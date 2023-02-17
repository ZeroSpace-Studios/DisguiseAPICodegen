#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_notifications_report.h"



status_notifications_report_t *status_notifications_report_create(
    statusd3_machine_t *machine,
    list_t *notifications
    ) {
    status_notifications_report_t *status_notifications_report_local_var = malloc(sizeof(status_notifications_report_t));
    if (!status_notifications_report_local_var) {
        return NULL;
    }
    status_notifications_report_local_var->machine = machine;
    status_notifications_report_local_var->notifications = notifications;

    return status_notifications_report_local_var;
}


void status_notifications_report_free(status_notifications_report_t *status_notifications_report) {
    if(NULL == status_notifications_report){
        return ;
    }
    listEntry_t *listEntry;
    if (status_notifications_report->machine) {
        statusd3_machine_free(status_notifications_report->machine);
        status_notifications_report->machine = NULL;
    }
    if (status_notifications_report->notifications) {
        list_ForEach(listEntry, status_notifications_report->notifications) {
            status_notification_free(listEntry->data);
        }
        list_free(status_notifications_report->notifications);
        status_notifications_report->notifications = NULL;
    }
    free(status_notifications_report);
}

cJSON *status_notifications_report_convertToJSON(status_notifications_report_t *status_notifications_report) {
    cJSON *item = cJSON_CreateObject();

    // status_notifications_report->machine
    if(status_notifications_report->machine) { 
    cJSON *machine_local_JSON = statusd3_machine_convertToJSON(status_notifications_report->machine);
    if(machine_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "machine", machine_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_notifications_report->notifications
    if(status_notifications_report->notifications) { 
    cJSON *notifications = cJSON_AddArrayToObject(item, "notifications");
    if(notifications == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *notificationsListEntry;
    if (status_notifications_report->notifications) {
    list_ForEach(notificationsListEntry, status_notifications_report->notifications) {
    cJSON *itemLocal = status_notification_convertToJSON(notificationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(notifications, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_notifications_report_t *status_notifications_report_parseFromJSON(cJSON *status_notifications_reportJSON){

    status_notifications_report_t *status_notifications_report_local_var = NULL;

    // status_notifications_report->machine
    cJSON *machine = cJSON_GetObjectItemCaseSensitive(status_notifications_reportJSON, "machine");
    statusd3_machine_t *machine_local_nonprim = NULL;
    if (machine) { 
    machine_local_nonprim = statusd3_machine_parseFromJSON(machine); //nonprimitive
    }

    // status_notifications_report->notifications
    cJSON *notifications = cJSON_GetObjectItemCaseSensitive(status_notifications_reportJSON, "notifications");
    list_t *notificationsList;
    if (notifications) { 
    cJSON *notifications_local_nonprimitive;
    if(!cJSON_IsArray(notifications)){
        goto end; //nonprimitive container
    }

    notificationsList = list_create();

    cJSON_ArrayForEach(notifications_local_nonprimitive,notifications )
    {
        if(!cJSON_IsObject(notifications_local_nonprimitive)){
            goto end;
        }
        status_notification_t *notificationsItem = status_notification_parseFromJSON(notifications_local_nonprimitive);

        list_addElement(notificationsList, notificationsItem);
    }
    }


    status_notifications_report_local_var = status_notifications_report_create (
        machine ? machine_local_nonprim : NULL,
        notifications ? notificationsList : NULL
        );

    return status_notifications_report_local_var;
end:
    if (machine_local_nonprim) {
        statusd3_machine_free(machine_local_nonprim);
        machine_local_nonprim = NULL;
    }
    return NULL;

}

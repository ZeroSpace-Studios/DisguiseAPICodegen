#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_notification.h"



status_notification_t *status_notification_create(
    char *summary,
    char *detail
    ) {
    status_notification_t *status_notification_local_var = malloc(sizeof(status_notification_t));
    if (!status_notification_local_var) {
        return NULL;
    }
    status_notification_local_var->summary = summary;
    status_notification_local_var->detail = detail;

    return status_notification_local_var;
}


void status_notification_free(status_notification_t *status_notification) {
    if(NULL == status_notification){
        return ;
    }
    listEntry_t *listEntry;
    if (status_notification->summary) {
        free(status_notification->summary);
        status_notification->summary = NULL;
    }
    if (status_notification->detail) {
        free(status_notification->detail);
        status_notification->detail = NULL;
    }
    free(status_notification);
}

cJSON *status_notification_convertToJSON(status_notification_t *status_notification) {
    cJSON *item = cJSON_CreateObject();

    // status_notification->summary
    if(status_notification->summary) { 
    if(cJSON_AddStringToObject(item, "summary", status_notification->summary) == NULL) {
    goto fail; //String
    }
     } 


    // status_notification->detail
    if(status_notification->detail) { 
    if(cJSON_AddStringToObject(item, "detail", status_notification->detail) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_notification_t *status_notification_parseFromJSON(cJSON *status_notificationJSON){

    status_notification_t *status_notification_local_var = NULL;

    // status_notification->summary
    cJSON *summary = cJSON_GetObjectItemCaseSensitive(status_notificationJSON, "summary");
    if (summary) { 
    if(!cJSON_IsString(summary))
    {
    goto end; //String
    }
    }

    // status_notification->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(status_notificationJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail))
    {
    goto end; //String
    }
    }


    status_notification_local_var = status_notification_create (
        summary ? strdup(summary->valuestring) : NULL,
        detail ? strdup(detail->valuestring) : NULL
        );

    return status_notification_local_var;
end:
    return NULL;

}

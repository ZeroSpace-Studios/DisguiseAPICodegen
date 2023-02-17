#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_health_report.h"



status_health_report_t *status_health_report_create(
    statusd3_machine_t *machine,
    statusd3_machine_t *running_as_machine,
    status_health_status_t *status
    ) {
    status_health_report_t *status_health_report_local_var = malloc(sizeof(status_health_report_t));
    if (!status_health_report_local_var) {
        return NULL;
    }
    status_health_report_local_var->machine = machine;
    status_health_report_local_var->running_as_machine = running_as_machine;
    status_health_report_local_var->status = status;

    return status_health_report_local_var;
}


void status_health_report_free(status_health_report_t *status_health_report) {
    if(NULL == status_health_report){
        return ;
    }
    listEntry_t *listEntry;
    if (status_health_report->machine) {
        statusd3_machine_free(status_health_report->machine);
        status_health_report->machine = NULL;
    }
    if (status_health_report->running_as_machine) {
        statusd3_machine_free(status_health_report->running_as_machine);
        status_health_report->running_as_machine = NULL;
    }
    if (status_health_report->status) {
        status_health_status_free(status_health_report->status);
        status_health_report->status = NULL;
    }
    free(status_health_report);
}

cJSON *status_health_report_convertToJSON(status_health_report_t *status_health_report) {
    cJSON *item = cJSON_CreateObject();

    // status_health_report->machine
    if(status_health_report->machine) { 
    cJSON *machine_local_JSON = statusd3_machine_convertToJSON(status_health_report->machine);
    if(machine_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "machine", machine_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_health_report->running_as_machine
    if(status_health_report->running_as_machine) { 
    cJSON *running_as_machine_local_JSON = statusd3_machine_convertToJSON(status_health_report->running_as_machine);
    if(running_as_machine_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "runningAsMachine", running_as_machine_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_health_report->status
    if(status_health_report->status) { 
    cJSON *status_local_JSON = status_health_status_convertToJSON(status_health_report->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_health_report_t *status_health_report_parseFromJSON(cJSON *status_health_reportJSON){

    status_health_report_t *status_health_report_local_var = NULL;

    // status_health_report->machine
    cJSON *machine = cJSON_GetObjectItemCaseSensitive(status_health_reportJSON, "machine");
    statusd3_machine_t *machine_local_nonprim = NULL;
    if (machine) { 
    machine_local_nonprim = statusd3_machine_parseFromJSON(machine); //nonprimitive
    }

    // status_health_report->running_as_machine
    cJSON *running_as_machine = cJSON_GetObjectItemCaseSensitive(status_health_reportJSON, "runningAsMachine");
    statusd3_machine_t *running_as_machine_local_nonprim = NULL;
    if (running_as_machine) { 
    running_as_machine_local_nonprim = statusd3_machine_parseFromJSON(running_as_machine); //nonprimitive
    }

    // status_health_report->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(status_health_reportJSON, "status");
    status_health_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = status_health_status_parseFromJSON(status); //nonprimitive
    }


    status_health_report_local_var = status_health_report_create (
        machine ? machine_local_nonprim : NULL,
        running_as_machine ? running_as_machine_local_nonprim : NULL,
        status ? status_local_nonprim : NULL
        );

    return status_health_report_local_var;
end:
    if (machine_local_nonprim) {
        statusd3_machine_free(machine_local_nonprim);
        machine_local_nonprim = NULL;
    }
    if (running_as_machine_local_nonprim) {
        statusd3_machine_free(running_as_machine_local_nonprim);
        running_as_machine_local_nonprim = NULL;
    }
    if (status_local_nonprim) {
        status_health_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "statusd3_machine.h"



statusd3_machine_t *statusd3_machine_create(
    char *uid,
    char *name,
    char *hostname
    ) {
    statusd3_machine_t *statusd3_machine_local_var = malloc(sizeof(statusd3_machine_t));
    if (!statusd3_machine_local_var) {
        return NULL;
    }
    statusd3_machine_local_var->uid = uid;
    statusd3_machine_local_var->name = name;
    statusd3_machine_local_var->hostname = hostname;

    return statusd3_machine_local_var;
}


void statusd3_machine_free(statusd3_machine_t *statusd3_machine) {
    if(NULL == statusd3_machine){
        return ;
    }
    listEntry_t *listEntry;
    if (statusd3_machine->uid) {
        free(statusd3_machine->uid);
        statusd3_machine->uid = NULL;
    }
    if (statusd3_machine->name) {
        free(statusd3_machine->name);
        statusd3_machine->name = NULL;
    }
    if (statusd3_machine->hostname) {
        free(statusd3_machine->hostname);
        statusd3_machine->hostname = NULL;
    }
    free(statusd3_machine);
}

cJSON *statusd3_machine_convertToJSON(statusd3_machine_t *statusd3_machine) {
    cJSON *item = cJSON_CreateObject();

    // statusd3_machine->uid
    if(statusd3_machine->uid) { 
    if(cJSON_AddStringToObject(item, "uid", statusd3_machine->uid) == NULL) {
    goto fail; //String
    }
     } 


    // statusd3_machine->name
    if(statusd3_machine->name) { 
    if(cJSON_AddStringToObject(item, "name", statusd3_machine->name) == NULL) {
    goto fail; //String
    }
     } 


    // statusd3_machine->hostname
    if(statusd3_machine->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", statusd3_machine->hostname) == NULL) {
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

statusd3_machine_t *statusd3_machine_parseFromJSON(cJSON *statusd3_machineJSON){

    statusd3_machine_t *statusd3_machine_local_var = NULL;

    // statusd3_machine->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(statusd3_machineJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // statusd3_machine->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(statusd3_machineJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // statusd3_machine->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(statusd3_machineJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }


    statusd3_machine_local_var = statusd3_machine_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        hostname ? strdup(hostname->valuestring) : NULL
        );

    return statusd3_machine_local_var;
end:
    return NULL;

}

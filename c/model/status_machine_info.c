#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_machine_info.h"


char* typestatus_machine_info_ToString(d3_api_status_machine_info__e type) {
    char* typeArray[] =  { "NULL", "Unknown", "Designer", "V2_5", "Pro4x2", "Pro4x4", "Plus2x2", "Pro4x4NoVfcs", "Node", "Pro2x4", "Gx1", "Gx2", "SoloV1", "Vx4", "Gx2c", "Rx", "RxII", "Vx1", "Vx2", "Vx4Plus", "Gx3" };
	return typeArray[type];
}

d3_api_status_machine_info__e typestatus_machine_info_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "Unknown", "Designer", "V2_5", "Pro4x2", "Pro4x4", "Plus2x2", "Pro4x4NoVfcs", "Node", "Pro2x4", "Gx1", "Gx2", "SoloV1", "Vx4", "Gx2c", "Rx", "RxII", "Vx1", "Vx2", "Vx4Plus", "Gx3" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

status_machine_info_t *status_machine_info_create(
    char *uid,
    char *name,
    char *hostname,
    ) {
    status_machine_info_t *status_machine_info_local_var = malloc(sizeof(status_machine_info_t));
    if (!status_machine_info_local_var) {
        return NULL;
    }
    status_machine_info_local_var->uid = uid;
    status_machine_info_local_var->name = name;
    status_machine_info_local_var->hostname = hostname;
    status_machine_info_local_var->type = type;

    return status_machine_info_local_var;
}


void status_machine_info_free(status_machine_info_t *status_machine_info) {
    if(NULL == status_machine_info){
        return ;
    }
    listEntry_t *listEntry;
    if (status_machine_info->uid) {
        free(status_machine_info->uid);
        status_machine_info->uid = NULL;
    }
    if (status_machine_info->name) {
        free(status_machine_info->name);
        status_machine_info->name = NULL;
    }
    if (status_machine_info->hostname) {
        free(status_machine_info->hostname);
        status_machine_info->hostname = NULL;
    }
    free(status_machine_info);
}

cJSON *status_machine_info_convertToJSON(status_machine_info_t *status_machine_info) {
    cJSON *item = cJSON_CreateObject();

    // status_machine_info->uid
    if(status_machine_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", status_machine_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // status_machine_info->name
    if(status_machine_info->name) { 
    if(cJSON_AddStringToObject(item, "name", status_machine_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // status_machine_info->hostname
    if(status_machine_info->hostname) { 
    if(cJSON_AddStringToObject(item, "hostname", status_machine_info->hostname) == NULL) {
    goto fail; //String
    }
     } 


    // status_machine_info->type
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_machine_info_t *status_machine_info_parseFromJSON(cJSON *status_machine_infoJSON){

    status_machine_info_t *status_machine_info_local_var = NULL;

    // status_machine_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(status_machine_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // status_machine_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(status_machine_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // status_machine_info->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(status_machine_infoJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname))
    {
    goto end; //String
    }
    }

    // status_machine_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(status_machine_infoJSON, "type");
    }


    status_machine_info_local_var = status_machine_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        hostname ? strdup(hostname->valuestring) : NULL,
        );

    return status_machine_info_local_var;
end:
    return NULL;

}

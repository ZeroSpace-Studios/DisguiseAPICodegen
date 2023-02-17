#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_d3_version_info.h"



status_d3_version_info_t *status_d3_version_info_create(
    long major,
    long minor,
    long hotfix,
    long revision
    ) {
    status_d3_version_info_t *status_d3_version_info_local_var = malloc(sizeof(status_d3_version_info_t));
    if (!status_d3_version_info_local_var) {
        return NULL;
    }
    status_d3_version_info_local_var->major = major;
    status_d3_version_info_local_var->minor = minor;
    status_d3_version_info_local_var->hotfix = hotfix;
    status_d3_version_info_local_var->revision = revision;

    return status_d3_version_info_local_var;
}


void status_d3_version_info_free(status_d3_version_info_t *status_d3_version_info) {
    if(NULL == status_d3_version_info){
        return ;
    }
    listEntry_t *listEntry;
    free(status_d3_version_info);
}

cJSON *status_d3_version_info_convertToJSON(status_d3_version_info_t *status_d3_version_info) {
    cJSON *item = cJSON_CreateObject();

    // status_d3_version_info->major
    if(status_d3_version_info->major) { 
    if(cJSON_AddNumberToObject(item, "major", status_d3_version_info->major) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_d3_version_info->minor
    if(status_d3_version_info->minor) { 
    if(cJSON_AddNumberToObject(item, "minor", status_d3_version_info->minor) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_d3_version_info->hotfix
    if(status_d3_version_info->hotfix) { 
    if(cJSON_AddNumberToObject(item, "hotfix", status_d3_version_info->hotfix) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_d3_version_info->revision
    if(status_d3_version_info->revision) { 
    if(cJSON_AddNumberToObject(item, "revision", status_d3_version_info->revision) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

status_d3_version_info_t *status_d3_version_info_parseFromJSON(cJSON *status_d3_version_infoJSON){

    status_d3_version_info_t *status_d3_version_info_local_var = NULL;

    // status_d3_version_info->major
    cJSON *major = cJSON_GetObjectItemCaseSensitive(status_d3_version_infoJSON, "major");
    if (major) { 
    if(!cJSON_IsNumber(major))
    {
    goto end; //Numeric
    }
    }

    // status_d3_version_info->minor
    cJSON *minor = cJSON_GetObjectItemCaseSensitive(status_d3_version_infoJSON, "minor");
    if (minor) { 
    if(!cJSON_IsNumber(minor))
    {
    goto end; //Numeric
    }
    }

    // status_d3_version_info->hotfix
    cJSON *hotfix = cJSON_GetObjectItemCaseSensitive(status_d3_version_infoJSON, "hotfix");
    if (hotfix) { 
    if(!cJSON_IsNumber(hotfix))
    {
    goto end; //Numeric
    }
    }

    // status_d3_version_info->revision
    cJSON *revision = cJSON_GetObjectItemCaseSensitive(status_d3_version_infoJSON, "revision");
    if (revision) { 
    if(!cJSON_IsNumber(revision))
    {
    goto end; //Numeric
    }
    }


    status_d3_version_info_local_var = status_d3_version_info_create (
        major ? major->valuedouble : 0,
        minor ? minor->valuedouble : 0,
        hotfix ? hotfix->valuedouble : 0,
        revision ? revision->valuedouble : 0
        );

    return status_d3_version_info_local_var;
end:
    return NULL;

}

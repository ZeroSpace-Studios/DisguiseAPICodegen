#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_get_project_result.h"



status_get_project_result_t *status_get_project_result_create(
    char *project_path,
    status_d3_version_info_t *version
    ) {
    status_get_project_result_t *status_get_project_result_local_var = malloc(sizeof(status_get_project_result_t));
    if (!status_get_project_result_local_var) {
        return NULL;
    }
    status_get_project_result_local_var->project_path = project_path;
    status_get_project_result_local_var->version = version;

    return status_get_project_result_local_var;
}


void status_get_project_result_free(status_get_project_result_t *status_get_project_result) {
    if(NULL == status_get_project_result){
        return ;
    }
    listEntry_t *listEntry;
    if (status_get_project_result->project_path) {
        free(status_get_project_result->project_path);
        status_get_project_result->project_path = NULL;
    }
    if (status_get_project_result->version) {
        status_d3_version_info_free(status_get_project_result->version);
        status_get_project_result->version = NULL;
    }
    free(status_get_project_result);
}

cJSON *status_get_project_result_convertToJSON(status_get_project_result_t *status_get_project_result) {
    cJSON *item = cJSON_CreateObject();

    // status_get_project_result->project_path
    if(status_get_project_result->project_path) { 
    if(cJSON_AddStringToObject(item, "projectPath", status_get_project_result->project_path) == NULL) {
    goto fail; //String
    }
     } 


    // status_get_project_result->version
    if(status_get_project_result->version) { 
    cJSON *version_local_JSON = status_d3_version_info_convertToJSON(status_get_project_result->version);
    if(version_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "version", version_local_JSON);
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

status_get_project_result_t *status_get_project_result_parseFromJSON(cJSON *status_get_project_resultJSON){

    status_get_project_result_t *status_get_project_result_local_var = NULL;

    // status_get_project_result->project_path
    cJSON *project_path = cJSON_GetObjectItemCaseSensitive(status_get_project_resultJSON, "projectPath");
    if (project_path) { 
    if(!cJSON_IsString(project_path))
    {
    goto end; //String
    }
    }

    // status_get_project_result->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(status_get_project_resultJSON, "version");
    status_d3_version_info_t *version_local_nonprim = NULL;
    if (version) { 
    version_local_nonprim = status_d3_version_info_parseFromJSON(version); //nonprimitive
    }


    status_get_project_result_local_var = status_get_project_result_create (
        project_path ? strdup(project_path->valuestring) : NULL,
        version ? version_local_nonprim : NULL
        );

    return status_get_project_result_local_var;
end:
    if (version_local_nonprim) {
        status_d3_version_info_free(version_local_nonprim);
        version_local_nonprim = NULL;
    }
    return NULL;

}

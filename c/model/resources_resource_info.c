#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resources_resource_info.h"



resources_resource_info_t *resources_resource_info_create(
    char *uid,
    char *name,
    char *path,
    char *type
    ) {
    resources_resource_info_t *resources_resource_info_local_var = malloc(sizeof(resources_resource_info_t));
    if (!resources_resource_info_local_var) {
        return NULL;
    }
    resources_resource_info_local_var->uid = uid;
    resources_resource_info_local_var->name = name;
    resources_resource_info_local_var->path = path;
    resources_resource_info_local_var->type = type;

    return resources_resource_info_local_var;
}


void resources_resource_info_free(resources_resource_info_t *resources_resource_info) {
    if(NULL == resources_resource_info){
        return ;
    }
    listEntry_t *listEntry;
    if (resources_resource_info->uid) {
        free(resources_resource_info->uid);
        resources_resource_info->uid = NULL;
    }
    if (resources_resource_info->name) {
        free(resources_resource_info->name);
        resources_resource_info->name = NULL;
    }
    if (resources_resource_info->path) {
        free(resources_resource_info->path);
        resources_resource_info->path = NULL;
    }
    if (resources_resource_info->type) {
        free(resources_resource_info->type);
        resources_resource_info->type = NULL;
    }
    free(resources_resource_info);
}

cJSON *resources_resource_info_convertToJSON(resources_resource_info_t *resources_resource_info) {
    cJSON *item = cJSON_CreateObject();

    // resources_resource_info->uid
    if(resources_resource_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", resources_resource_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // resources_resource_info->name
    if(resources_resource_info->name) { 
    if(cJSON_AddStringToObject(item, "name", resources_resource_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // resources_resource_info->path
    if(resources_resource_info->path) { 
    if(cJSON_AddStringToObject(item, "path", resources_resource_info->path) == NULL) {
    goto fail; //String
    }
     } 


    // resources_resource_info->type
    if(resources_resource_info->type) { 
    if(cJSON_AddStringToObject(item, "type", resources_resource_info->type) == NULL) {
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

resources_resource_info_t *resources_resource_info_parseFromJSON(cJSON *resources_resource_infoJSON){

    resources_resource_info_t *resources_resource_info_local_var = NULL;

    // resources_resource_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(resources_resource_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // resources_resource_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(resources_resource_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // resources_resource_info->path
    cJSON *path = cJSON_GetObjectItemCaseSensitive(resources_resource_infoJSON, "path");
    if (path) { 
    if(!cJSON_IsString(path))
    {
    goto end; //String
    }
    }

    // resources_resource_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(resources_resource_infoJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }
    }


    resources_resource_info_local_var = resources_resource_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        path ? strdup(path->valuestring) : NULL,
        type ? strdup(type->valuestring) : NULL
        );

    return resources_resource_info_local_var;
end:
    return NULL;

}

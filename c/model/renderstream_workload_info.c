#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_workload_info.h"



renderstream_workload_info_t *renderstream_workload_info_create(
    char *uid,
    char *name,
    list_t *instances
    ) {
    renderstream_workload_info_t *renderstream_workload_info_local_var = malloc(sizeof(renderstream_workload_info_t));
    if (!renderstream_workload_info_local_var) {
        return NULL;
    }
    renderstream_workload_info_local_var->uid = uid;
    renderstream_workload_info_local_var->name = name;
    renderstream_workload_info_local_var->instances = instances;

    return renderstream_workload_info_local_var;
}


void renderstream_workload_info_free(renderstream_workload_info_t *renderstream_workload_info) {
    if(NULL == renderstream_workload_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_workload_info->uid) {
        free(renderstream_workload_info->uid);
        renderstream_workload_info->uid = NULL;
    }
    if (renderstream_workload_info->name) {
        free(renderstream_workload_info->name);
        renderstream_workload_info->name = NULL;
    }
    if (renderstream_workload_info->instances) {
        list_ForEach(listEntry, renderstream_workload_info->instances) {
            renderstream_workload_instance_info_free(listEntry->data);
        }
        list_free(renderstream_workload_info->instances);
        renderstream_workload_info->instances = NULL;
    }
    free(renderstream_workload_info);
}

cJSON *renderstream_workload_info_convertToJSON(renderstream_workload_info_t *renderstream_workload_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_workload_info->uid
    if(renderstream_workload_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_workload_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_info->name
    if(renderstream_workload_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_workload_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_info->instances
    if(renderstream_workload_info->instances) { 
    cJSON *instances = cJSON_AddArrayToObject(item, "instances");
    if(instances == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *instancesListEntry;
    if (renderstream_workload_info->instances) {
    list_ForEach(instancesListEntry, renderstream_workload_info->instances) {
    cJSON *itemLocal = renderstream_workload_instance_info_convertToJSON(instancesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(instances, itemLocal);
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

renderstream_workload_info_t *renderstream_workload_info_parseFromJSON(cJSON *renderstream_workload_infoJSON){

    renderstream_workload_info_t *renderstream_workload_info_local_var = NULL;

    // renderstream_workload_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_workload_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_workload_info->instances
    cJSON *instances = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "instances");
    list_t *instancesList;
    if (instances) { 
    cJSON *instances_local_nonprimitive;
    if(!cJSON_IsArray(instances)){
        goto end; //nonprimitive container
    }

    instancesList = list_create();

    cJSON_ArrayForEach(instances_local_nonprimitive,instances )
    {
        if(!cJSON_IsObject(instances_local_nonprimitive)){
            goto end;
        }
        renderstream_workload_instance_info_t *instancesItem = renderstream_workload_instance_info_parseFromJSON(instances_local_nonprimitive);

        list_addElement(instancesList, instancesItem);
    }
    }


    renderstream_workload_info_local_var = renderstream_workload_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        instances ? instancesList : NULL
        );

    return renderstream_workload_info_local_var;
end:
    return NULL;

}

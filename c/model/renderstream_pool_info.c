#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_pool_info.h"



renderstream_pool_info_t *renderstream_pool_info_create(
    char *uid,
    char *name,
    list_t *machines,
    list_t *understudies
    ) {
    renderstream_pool_info_t *renderstream_pool_info_local_var = malloc(sizeof(renderstream_pool_info_t));
    if (!renderstream_pool_info_local_var) {
        return NULL;
    }
    renderstream_pool_info_local_var->uid = uid;
    renderstream_pool_info_local_var->name = name;
    renderstream_pool_info_local_var->machines = machines;
    renderstream_pool_info_local_var->understudies = understudies;

    return renderstream_pool_info_local_var;
}


void renderstream_pool_info_free(renderstream_pool_info_t *renderstream_pool_info) {
    if(NULL == renderstream_pool_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_pool_info->uid) {
        free(renderstream_pool_info->uid);
        renderstream_pool_info->uid = NULL;
    }
    if (renderstream_pool_info->name) {
        free(renderstream_pool_info->name);
        renderstream_pool_info->name = NULL;
    }
    if (renderstream_pool_info->machines) {
        list_ForEach(listEntry, renderstream_pool_info->machines) {
            renderstream_machine_info_free(listEntry->data);
        }
        list_free(renderstream_pool_info->machines);
        renderstream_pool_info->machines = NULL;
    }
    if (renderstream_pool_info->understudies) {
        list_ForEach(listEntry, renderstream_pool_info->understudies) {
            renderstream_machine_info_free(listEntry->data);
        }
        list_free(renderstream_pool_info->understudies);
        renderstream_pool_info->understudies = NULL;
    }
    free(renderstream_pool_info);
}

cJSON *renderstream_pool_info_convertToJSON(renderstream_pool_info_t *renderstream_pool_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_pool_info->uid
    if(renderstream_pool_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_pool_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_pool_info->name
    if(renderstream_pool_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_pool_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_pool_info->machines
    if(renderstream_pool_info->machines) { 
    cJSON *machines = cJSON_AddArrayToObject(item, "machines");
    if(machines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *machinesListEntry;
    if (renderstream_pool_info->machines) {
    list_ForEach(machinesListEntry, renderstream_pool_info->machines) {
    cJSON *itemLocal = renderstream_machine_info_convertToJSON(machinesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(machines, itemLocal);
    }
    }
     } 


    // renderstream_pool_info->understudies
    if(renderstream_pool_info->understudies) { 
    cJSON *understudies = cJSON_AddArrayToObject(item, "understudies");
    if(understudies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *understudiesListEntry;
    if (renderstream_pool_info->understudies) {
    list_ForEach(understudiesListEntry, renderstream_pool_info->understudies) {
    cJSON *itemLocal = renderstream_machine_info_convertToJSON(understudiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(understudies, itemLocal);
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

renderstream_pool_info_t *renderstream_pool_info_parseFromJSON(cJSON *renderstream_pool_infoJSON){

    renderstream_pool_info_t *renderstream_pool_info_local_var = NULL;

    // renderstream_pool_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_pool_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_pool_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_pool_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_pool_info->machines
    cJSON *machines = cJSON_GetObjectItemCaseSensitive(renderstream_pool_infoJSON, "machines");
    list_t *machinesList;
    if (machines) { 
    cJSON *machines_local_nonprimitive;
    if(!cJSON_IsArray(machines)){
        goto end; //nonprimitive container
    }

    machinesList = list_create();

    cJSON_ArrayForEach(machines_local_nonprimitive,machines )
    {
        if(!cJSON_IsObject(machines_local_nonprimitive)){
            goto end;
        }
        renderstream_machine_info_t *machinesItem = renderstream_machine_info_parseFromJSON(machines_local_nonprimitive);

        list_addElement(machinesList, machinesItem);
    }
    }

    // renderstream_pool_info->understudies
    cJSON *understudies = cJSON_GetObjectItemCaseSensitive(renderstream_pool_infoJSON, "understudies");
    list_t *understudiesList;
    if (understudies) { 
    cJSON *understudies_local_nonprimitive;
    if(!cJSON_IsArray(understudies)){
        goto end; //nonprimitive container
    }

    understudiesList = list_create();

    cJSON_ArrayForEach(understudies_local_nonprimitive,understudies )
    {
        if(!cJSON_IsObject(understudies_local_nonprimitive)){
            goto end;
        }
        renderstream_machine_info_t *understudiesItem = renderstream_machine_info_parseFromJSON(understudies_local_nonprimitive);

        list_addElement(understudiesList, understudiesItem);
    }
    }


    renderstream_pool_info_local_var = renderstream_pool_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        machines ? machinesList : NULL,
        understudies ? understudiesList : NULL
        );

    return renderstream_pool_info_local_var;
end:
    return NULL;

}

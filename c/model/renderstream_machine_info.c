#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_machine_info.h"



renderstream_machine_info_t *renderstream_machine_info_create(
    char *uid,
    char *name,
    char *preferred_sync_adapter,
    list_t *adapters
    ) {
    renderstream_machine_info_t *renderstream_machine_info_local_var = malloc(sizeof(renderstream_machine_info_t));
    if (!renderstream_machine_info_local_var) {
        return NULL;
    }
    renderstream_machine_info_local_var->uid = uid;
    renderstream_machine_info_local_var->name = name;
    renderstream_machine_info_local_var->preferred_sync_adapter = preferred_sync_adapter;
    renderstream_machine_info_local_var->adapters = adapters;

    return renderstream_machine_info_local_var;
}


void renderstream_machine_info_free(renderstream_machine_info_t *renderstream_machine_info) {
    if(NULL == renderstream_machine_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_machine_info->uid) {
        free(renderstream_machine_info->uid);
        renderstream_machine_info->uid = NULL;
    }
    if (renderstream_machine_info->name) {
        free(renderstream_machine_info->name);
        renderstream_machine_info->name = NULL;
    }
    if (renderstream_machine_info->preferred_sync_adapter) {
        free(renderstream_machine_info->preferred_sync_adapter);
        renderstream_machine_info->preferred_sync_adapter = NULL;
    }
    if (renderstream_machine_info->adapters) {
        list_ForEach(listEntry, renderstream_machine_info->adapters) {
            renderstream_adapter_info_free(listEntry->data);
        }
        list_free(renderstream_machine_info->adapters);
        renderstream_machine_info->adapters = NULL;
    }
    free(renderstream_machine_info);
}

cJSON *renderstream_machine_info_convertToJSON(renderstream_machine_info_t *renderstream_machine_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_machine_info->uid
    if(renderstream_machine_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_machine_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_machine_info->name
    if(renderstream_machine_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_machine_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_machine_info->preferred_sync_adapter
    if(renderstream_machine_info->preferred_sync_adapter) { 
    if(cJSON_AddStringToObject(item, "preferredSyncAdapter", renderstream_machine_info->preferred_sync_adapter) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_machine_info->adapters
    if(renderstream_machine_info->adapters) { 
    cJSON *adapters = cJSON_AddArrayToObject(item, "adapters");
    if(adapters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *adaptersListEntry;
    if (renderstream_machine_info->adapters) {
    list_ForEach(adaptersListEntry, renderstream_machine_info->adapters) {
    cJSON *itemLocal = renderstream_adapter_info_convertToJSON(adaptersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(adapters, itemLocal);
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

renderstream_machine_info_t *renderstream_machine_info_parseFromJSON(cJSON *renderstream_machine_infoJSON){

    renderstream_machine_info_t *renderstream_machine_info_local_var = NULL;

    // renderstream_machine_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_machine_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_machine_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_machine_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_machine_info->preferred_sync_adapter
    cJSON *preferred_sync_adapter = cJSON_GetObjectItemCaseSensitive(renderstream_machine_infoJSON, "preferredSyncAdapter");
    if (preferred_sync_adapter) { 
    if(!cJSON_IsString(preferred_sync_adapter))
    {
    goto end; //String
    }
    }

    // renderstream_machine_info->adapters
    cJSON *adapters = cJSON_GetObjectItemCaseSensitive(renderstream_machine_infoJSON, "adapters");
    list_t *adaptersList;
    if (adapters) { 
    cJSON *adapters_local_nonprimitive;
    if(!cJSON_IsArray(adapters)){
        goto end; //nonprimitive container
    }

    adaptersList = list_create();

    cJSON_ArrayForEach(adapters_local_nonprimitive,adapters )
    {
        if(!cJSON_IsObject(adapters_local_nonprimitive)){
            goto end;
        }
        renderstream_adapter_info_t *adaptersItem = renderstream_adapter_info_parseFromJSON(adapters_local_nonprimitive);

        list_addElement(adaptersList, adaptersItem);
    }
    }


    renderstream_machine_info_local_var = renderstream_machine_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        preferred_sync_adapter ? strdup(preferred_sync_adapter->valuestring) : NULL,
        adapters ? adaptersList : NULL
        );

    return renderstream_machine_info_local_var;
end:
    return NULL;

}

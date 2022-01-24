#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_workload_info.h"


char* statusrenderstream_workload_info_ToString(d3_api_renderstream_workload_info__e status) {
    char* statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
	return statusArray[status];
}

d3_api_renderstream_workload_info__e statusrenderstream_workload_info_FromString(char* status){
    int stringToReturn = 0;
    char *statusArray[] =  { "NULL", "UNKNOWN", "CRASHED", "ERROR", "STOPPING", "STOPPED", "LAUNCHING", "STARTING", "READY", "STANDBY", "RUNNING" };
    size_t sizeofArray = sizeof(statusArray) / sizeof(statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(status, statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

renderstream_workload_info_t *renderstream_workload_info_create(
    char *id,
    char *friendly_name,
    renderstream_asset_info_t *asset,
    list_t *instances,
    int engine_sync,
    char *layer_uid,
    char *location_description
    ) {
    renderstream_workload_info_t *renderstream_workload_info_local_var = malloc(sizeof(renderstream_workload_info_t));
    if (!renderstream_workload_info_local_var) {
        return NULL;
    }
    renderstream_workload_info_local_var->id = id;
    renderstream_workload_info_local_var->friendly_name = friendly_name;
    renderstream_workload_info_local_var->asset = asset;
    renderstream_workload_info_local_var->status = status;
    renderstream_workload_info_local_var->instances = instances;
    renderstream_workload_info_local_var->engine_sync = engine_sync;
    renderstream_workload_info_local_var->layer_uid = layer_uid;
    renderstream_workload_info_local_var->location_description = location_description;

    return renderstream_workload_info_local_var;
}


void renderstream_workload_info_free(renderstream_workload_info_t *renderstream_workload_info) {
    if(NULL == renderstream_workload_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_workload_info->id) {
        free(renderstream_workload_info->id);
        renderstream_workload_info->id = NULL;
    }
    if (renderstream_workload_info->friendly_name) {
        free(renderstream_workload_info->friendly_name);
        renderstream_workload_info->friendly_name = NULL;
    }
    if (renderstream_workload_info->asset) {
        renderstream_asset_info_free(renderstream_workload_info->asset);
        renderstream_workload_info->asset = NULL;
    }
    if (renderstream_workload_info->instances) {
        list_ForEach(listEntry, renderstream_workload_info->instances) {
            renderstream_workload_instance_info_free(listEntry->data);
        }
        list_free(renderstream_workload_info->instances);
        renderstream_workload_info->instances = NULL;
    }
    if (renderstream_workload_info->layer_uid) {
        free(renderstream_workload_info->layer_uid);
        renderstream_workload_info->layer_uid = NULL;
    }
    if (renderstream_workload_info->location_description) {
        free(renderstream_workload_info->location_description);
        renderstream_workload_info->location_description = NULL;
    }
    free(renderstream_workload_info);
}

cJSON *renderstream_workload_info_convertToJSON(renderstream_workload_info_t *renderstream_workload_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_workload_info->id
    if(renderstream_workload_info->id) { 
    if(cJSON_AddStringToObject(item, "id", renderstream_workload_info->id) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_info->friendly_name
    if(renderstream_workload_info->friendly_name) { 
    if(cJSON_AddStringToObject(item, "friendlyName", renderstream_workload_info->friendly_name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_info->asset
    if(renderstream_workload_info->asset) { 
    cJSON *asset_local_JSON = renderstream_asset_info_convertToJSON(renderstream_workload_info->asset);
    if(asset_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "asset", asset_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_workload_info->status
    
    


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


    // renderstream_workload_info->engine_sync
    if(renderstream_workload_info->engine_sync) { 
    if(cJSON_AddBoolToObject(item, "engineSync", renderstream_workload_info->engine_sync) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_workload_info->layer_uid
    if(renderstream_workload_info->layer_uid) { 
    if(cJSON_AddStringToObject(item, "layerUID", renderstream_workload_info->layer_uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_workload_info->location_description
    if(renderstream_workload_info->location_description) { 
    if(cJSON_AddStringToObject(item, "locationDescription", renderstream_workload_info->location_description) == NULL) {
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

renderstream_workload_info_t *renderstream_workload_info_parseFromJSON(cJSON *renderstream_workload_infoJSON){

    renderstream_workload_info_t *renderstream_workload_info_local_var = NULL;

    // renderstream_workload_info->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id))
    {
    goto end; //String
    }
    }

    // renderstream_workload_info->friendly_name
    cJSON *friendly_name = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "friendlyName");
    if (friendly_name) { 
    if(!cJSON_IsString(friendly_name))
    {
    goto end; //String
    }
    }

    // renderstream_workload_info->asset
    cJSON *asset = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "asset");
    renderstream_asset_info_t *asset_local_nonprim = NULL;
    if (asset) { 
    asset_local_nonprim = renderstream_asset_info_parseFromJSON(asset); //nonprimitive
    }

    // renderstream_workload_info->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "status");
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

    // renderstream_workload_info->engine_sync
    cJSON *engine_sync = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "engineSync");
    if (engine_sync) { 
    if(!cJSON_IsBool(engine_sync))
    {
    goto end; //Bool
    }
    }

    // renderstream_workload_info->layer_uid
    cJSON *layer_uid = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "layerUID");
    if (layer_uid) { 
    if(!cJSON_IsString(layer_uid))
    {
    goto end; //String
    }
    }

    // renderstream_workload_info->location_description
    cJSON *location_description = cJSON_GetObjectItemCaseSensitive(renderstream_workload_infoJSON, "locationDescription");
    if (location_description) { 
    if(!cJSON_IsString(location_description))
    {
    goto end; //String
    }
    }


    renderstream_workload_info_local_var = renderstream_workload_info_create (
        id ? strdup(id->valuestring) : NULL,
        friendly_name ? strdup(friendly_name->valuestring) : NULL,
        asset ? asset_local_nonprim : NULL,
        instances ? instancesList : NULL,
        engine_sync ? engine_sync->valueint : 0,
        layer_uid ? strdup(layer_uid->valuestring) : NULL,
        location_description ? strdup(location_description->valuestring) : NULL
        );

    return renderstream_workload_info_local_var;
end:
    if (asset_local_nonprim) {
        renderstream_asset_info_free(asset_local_nonprim);
        asset_local_nonprim = NULL;
    }
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_get_layer_status_result.h"



renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_create(
    renderstream_reference_info_t *reference,
    renderstream_workload_info_t *workload,
    list_t *streams,
    list_t *asset_errors
    ) {
    renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_local_var = malloc(sizeof(renderstream_get_layer_status_result_t));
    if (!renderstream_get_layer_status_result_local_var) {
        return NULL;
    }
    renderstream_get_layer_status_result_local_var->reference = reference;
    renderstream_get_layer_status_result_local_var->workload = workload;
    renderstream_get_layer_status_result_local_var->streams = streams;
    renderstream_get_layer_status_result_local_var->asset_errors = asset_errors;

    return renderstream_get_layer_status_result_local_var;
}


void renderstream_get_layer_status_result_free(renderstream_get_layer_status_result_t *renderstream_get_layer_status_result) {
    if(NULL == renderstream_get_layer_status_result){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_get_layer_status_result->reference) {
        renderstream_reference_info_free(renderstream_get_layer_status_result->reference);
        renderstream_get_layer_status_result->reference = NULL;
    }
    if (renderstream_get_layer_status_result->workload) {
        renderstream_workload_info_free(renderstream_get_layer_status_result->workload);
        renderstream_get_layer_status_result->workload = NULL;
    }
    if (renderstream_get_layer_status_result->streams) {
        list_ForEach(listEntry, renderstream_get_layer_status_result->streams) {
            renderstream_stream_info_free(listEntry->data);
        }
        list_free(renderstream_get_layer_status_result->streams);
        renderstream_get_layer_status_result->streams = NULL;
    }
    if (renderstream_get_layer_status_result->asset_errors) {
        list_ForEach(listEntry, renderstream_get_layer_status_result->asset_errors) {
            free(listEntry->data);
        }
        list_free(renderstream_get_layer_status_result->asset_errors);
        renderstream_get_layer_status_result->asset_errors = NULL;
    }
    free(renderstream_get_layer_status_result);
}

cJSON *renderstream_get_layer_status_result_convertToJSON(renderstream_get_layer_status_result_t *renderstream_get_layer_status_result) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_get_layer_status_result->reference
    if(renderstream_get_layer_status_result->reference) { 
    cJSON *reference_local_JSON = renderstream_reference_info_convertToJSON(renderstream_get_layer_status_result->reference);
    if(reference_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reference", reference_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layer_status_result->workload
    if(renderstream_get_layer_status_result->workload) { 
    cJSON *workload_local_JSON = renderstream_workload_info_convertToJSON(renderstream_get_layer_status_result->workload);
    if(workload_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "workload", workload_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_get_layer_status_result->streams
    if(renderstream_get_layer_status_result->streams) { 
    cJSON *streams = cJSON_AddArrayToObject(item, "streams");
    if(streams == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *streamsListEntry;
    if (renderstream_get_layer_status_result->streams) {
    list_ForEach(streamsListEntry, renderstream_get_layer_status_result->streams) {
    cJSON *itemLocal = renderstream_stream_info_convertToJSON(streamsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(streams, itemLocal);
    }
    }
     } 


    // renderstream_get_layer_status_result->asset_errors
    if(renderstream_get_layer_status_result->asset_errors) { 
    cJSON *asset_errors = cJSON_AddArrayToObject(item, "assetErrors");
    if(asset_errors == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *asset_errorsListEntry;
    list_ForEach(asset_errorsListEntry, renderstream_get_layer_status_result->asset_errors) {
    if(cJSON_AddStringToObject(asset_errors, "", (char*)asset_errorsListEntry->data) == NULL)
    {
        goto fail;
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

renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_parseFromJSON(cJSON *renderstream_get_layer_status_resultJSON){

    renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_local_var = NULL;

    // renderstream_get_layer_status_result->reference
    cJSON *reference = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_resultJSON, "reference");
    renderstream_reference_info_t *reference_local_nonprim = NULL;
    if (reference) { 
    reference_local_nonprim = renderstream_reference_info_parseFromJSON(reference); //nonprimitive
    }

    // renderstream_get_layer_status_result->workload
    cJSON *workload = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_resultJSON, "workload");
    renderstream_workload_info_t *workload_local_nonprim = NULL;
    if (workload) { 
    workload_local_nonprim = renderstream_workload_info_parseFromJSON(workload); //nonprimitive
    }

    // renderstream_get_layer_status_result->streams
    cJSON *streams = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_resultJSON, "streams");
    list_t *streamsList;
    if (streams) { 
    cJSON *streams_local_nonprimitive;
    if(!cJSON_IsArray(streams)){
        goto end; //nonprimitive container
    }

    streamsList = list_create();

    cJSON_ArrayForEach(streams_local_nonprimitive,streams )
    {
        if(!cJSON_IsObject(streams_local_nonprimitive)){
            goto end;
        }
        renderstream_stream_info_t *streamsItem = renderstream_stream_info_parseFromJSON(streams_local_nonprimitive);

        list_addElement(streamsList, streamsItem);
    }
    }

    // renderstream_get_layer_status_result->asset_errors
    cJSON *asset_errors = cJSON_GetObjectItemCaseSensitive(renderstream_get_layer_status_resultJSON, "assetErrors");
    list_t *asset_errorsList;
    if (asset_errors) { 
    cJSON *asset_errors_local;
    if(!cJSON_IsArray(asset_errors)) {
        goto end;//primitive container
    }
    asset_errorsList = list_create();

    cJSON_ArrayForEach(asset_errors_local, asset_errors)
    {
        if(!cJSON_IsString(asset_errors_local))
        {
            goto end;
        }
        list_addElement(asset_errorsList , strdup(asset_errors_local->valuestring));
    }
    }


    renderstream_get_layer_status_result_local_var = renderstream_get_layer_status_result_create (
        reference ? reference_local_nonprim : NULL,
        workload ? workload_local_nonprim : NULL,
        streams ? streamsList : NULL,
        asset_errors ? asset_errorsList : NULL
        );

    return renderstream_get_layer_status_result_local_var;
end:
    if (reference_local_nonprim) {
        renderstream_reference_info_free(reference_local_nonprim);
        reference_local_nonprim = NULL;
    }
    if (workload_local_nonprim) {
        renderstream_workload_info_free(workload_local_nonprim);
        workload_local_nonprim = NULL;
    }
    return NULL;

}

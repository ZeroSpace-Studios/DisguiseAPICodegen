#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_list_workloads_response.h"



renderstream_list_workloads_response_t *renderstream_list_workloads_response_create(
    list_t *workloads
    ) {
    renderstream_list_workloads_response_t *renderstream_list_workloads_response_local_var = malloc(sizeof(renderstream_list_workloads_response_t));
    if (!renderstream_list_workloads_response_local_var) {
        return NULL;
    }
    renderstream_list_workloads_response_local_var->workloads = workloads;

    return renderstream_list_workloads_response_local_var;
}


void renderstream_list_workloads_response_free(renderstream_list_workloads_response_t *renderstream_list_workloads_response) {
    if(NULL == renderstream_list_workloads_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_list_workloads_response->workloads) {
        list_ForEach(listEntry, renderstream_list_workloads_response->workloads) {
            renderstream_workload_info_free(listEntry->data);
        }
        list_free(renderstream_list_workloads_response->workloads);
        renderstream_list_workloads_response->workloads = NULL;
    }
    free(renderstream_list_workloads_response);
}

cJSON *renderstream_list_workloads_response_convertToJSON(renderstream_list_workloads_response_t *renderstream_list_workloads_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_list_workloads_response->workloads
    if(renderstream_list_workloads_response->workloads) { 
    cJSON *workloads = cJSON_AddArrayToObject(item, "workloads");
    if(workloads == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *workloadsListEntry;
    if (renderstream_list_workloads_response->workloads) {
    list_ForEach(workloadsListEntry, renderstream_list_workloads_response->workloads) {
    cJSON *itemLocal = renderstream_workload_info_convertToJSON(workloadsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(workloads, itemLocal);
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

renderstream_list_workloads_response_t *renderstream_list_workloads_response_parseFromJSON(cJSON *renderstream_list_workloads_responseJSON){

    renderstream_list_workloads_response_t *renderstream_list_workloads_response_local_var = NULL;

    // renderstream_list_workloads_response->workloads
    cJSON *workloads = cJSON_GetObjectItemCaseSensitive(renderstream_list_workloads_responseJSON, "workloads");
    list_t *workloadsList;
    if (workloads) { 
    cJSON *workloads_local_nonprimitive;
    if(!cJSON_IsArray(workloads)){
        goto end; //nonprimitive container
    }

    workloadsList = list_create();

    cJSON_ArrayForEach(workloads_local_nonprimitive,workloads )
    {
        if(!cJSON_IsObject(workloads_local_nonprimitive)){
            goto end;
        }
        renderstream_workload_info_t *workloadsItem = renderstream_workload_info_parseFromJSON(workloads_local_nonprimitive);

        list_addElement(workloadsList, workloadsItem);
    }
    }


    renderstream_list_workloads_response_local_var = renderstream_list_workloads_response_create (
        workloads ? workloadsList : NULL
        );

    return renderstream_list_workloads_response_local_var;
end:
    return NULL;

}

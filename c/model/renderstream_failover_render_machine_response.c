#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_failover_render_machine_response.h"



renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_create(
    int all_instances_failedover,
    list_t *failover_mappings
    ) {
    renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_local_var = malloc(sizeof(renderstream_failover_render_machine_response_t));
    if (!renderstream_failover_render_machine_response_local_var) {
        return NULL;
    }
    renderstream_failover_render_machine_response_local_var->all_instances_failedover = all_instances_failedover;
    renderstream_failover_render_machine_response_local_var->failover_mappings = failover_mappings;

    return renderstream_failover_render_machine_response_local_var;
}


void renderstream_failover_render_machine_response_free(renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response) {
    if(NULL == renderstream_failover_render_machine_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_failover_render_machine_response->failover_mappings) {
        list_ForEach(listEntry, renderstream_failover_render_machine_response->failover_mappings) {
            renderstream_failover_info_free(listEntry->data);
        }
        list_free(renderstream_failover_render_machine_response->failover_mappings);
        renderstream_failover_render_machine_response->failover_mappings = NULL;
    }
    free(renderstream_failover_render_machine_response);
}

cJSON *renderstream_failover_render_machine_response_convertToJSON(renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_failover_render_machine_response->all_instances_failedover
    if(renderstream_failover_render_machine_response->all_instances_failedover) { 
    if(cJSON_AddBoolToObject(item, "allInstancesFailedover", renderstream_failover_render_machine_response->all_instances_failedover) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_failover_render_machine_response->failover_mappings
    if(renderstream_failover_render_machine_response->failover_mappings) { 
    cJSON *failover_mappings = cJSON_AddArrayToObject(item, "failoverMappings");
    if(failover_mappings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *failover_mappingsListEntry;
    if (renderstream_failover_render_machine_response->failover_mappings) {
    list_ForEach(failover_mappingsListEntry, renderstream_failover_render_machine_response->failover_mappings) {
    cJSON *itemLocal = renderstream_failover_info_convertToJSON(failover_mappingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(failover_mappings, itemLocal);
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

renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_parseFromJSON(cJSON *renderstream_failover_render_machine_responseJSON){

    renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_local_var = NULL;

    // renderstream_failover_render_machine_response->all_instances_failedover
    cJSON *all_instances_failedover = cJSON_GetObjectItemCaseSensitive(renderstream_failover_render_machine_responseJSON, "allInstancesFailedover");
    if (all_instances_failedover) { 
    if(!cJSON_IsBool(all_instances_failedover))
    {
    goto end; //Bool
    }
    }

    // renderstream_failover_render_machine_response->failover_mappings
    cJSON *failover_mappings = cJSON_GetObjectItemCaseSensitive(renderstream_failover_render_machine_responseJSON, "failoverMappings");
    list_t *failover_mappingsList;
    if (failover_mappings) { 
    cJSON *failover_mappings_local_nonprimitive;
    if(!cJSON_IsArray(failover_mappings)){
        goto end; //nonprimitive container
    }

    failover_mappingsList = list_create();

    cJSON_ArrayForEach(failover_mappings_local_nonprimitive,failover_mappings )
    {
        if(!cJSON_IsObject(failover_mappings_local_nonprimitive)){
            goto end;
        }
        renderstream_failover_info_t *failover_mappingsItem = renderstream_failover_info_parseFromJSON(failover_mappings_local_nonprimitive);

        list_addElement(failover_mappingsList, failover_mappingsItem);
    }
    }


    renderstream_failover_render_machine_response_local_var = renderstream_failover_render_machine_response_create (
        all_instances_failedover ? all_instances_failedover->valueint : 0,
        failover_mappings ? failover_mappingsList : NULL
        );

    return renderstream_failover_render_machine_response_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_failover_workload_instance_response.h"



renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_create(
    renderstream_failover_info_t *failover_mapping
    ) {
    renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_local_var = malloc(sizeof(renderstream_failover_workload_instance_response_t));
    if (!renderstream_failover_workload_instance_response_local_var) {
        return NULL;
    }
    renderstream_failover_workload_instance_response_local_var->failover_mapping = failover_mapping;

    return renderstream_failover_workload_instance_response_local_var;
}


void renderstream_failover_workload_instance_response_free(renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response) {
    if(NULL == renderstream_failover_workload_instance_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_failover_workload_instance_response->failover_mapping) {
        renderstream_failover_info_free(renderstream_failover_workload_instance_response->failover_mapping);
        renderstream_failover_workload_instance_response->failover_mapping = NULL;
    }
    free(renderstream_failover_workload_instance_response);
}

cJSON *renderstream_failover_workload_instance_response_convertToJSON(renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_failover_workload_instance_response->failover_mapping
    if(renderstream_failover_workload_instance_response->failover_mapping) { 
    cJSON *failover_mapping_local_JSON = renderstream_failover_info_convertToJSON(renderstream_failover_workload_instance_response->failover_mapping);
    if(failover_mapping_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "failoverMapping", failover_mapping_local_JSON);
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

renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_parseFromJSON(cJSON *renderstream_failover_workload_instance_responseJSON){

    renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_local_var = NULL;

    // renderstream_failover_workload_instance_response->failover_mapping
    cJSON *failover_mapping = cJSON_GetObjectItemCaseSensitive(renderstream_failover_workload_instance_responseJSON, "failoverMapping");
    renderstream_failover_info_t *failover_mapping_local_nonprim = NULL;
    if (failover_mapping) { 
    failover_mapping_local_nonprim = renderstream_failover_info_parseFromJSON(failover_mapping); //nonprimitive
    }


    renderstream_failover_workload_instance_response_local_var = renderstream_failover_workload_instance_response_create (
        failover_mapping ? failover_mapping_local_nonprim : NULL
        );

    return renderstream_failover_workload_instance_response_local_var;
end:
    if (failover_mapping_local_nonprim) {
        renderstream_failover_info_free(failover_mapping_local_nonprim);
        failover_mapping_local_nonprim = NULL;
    }
    return NULL;

}

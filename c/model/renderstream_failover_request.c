#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_failover_request.h"



renderstream_failover_request_t *renderstream_failover_request_create(
    d3api_locator_t *machine
    ) {
    renderstream_failover_request_t *renderstream_failover_request_local_var = malloc(sizeof(renderstream_failover_request_t));
    if (!renderstream_failover_request_local_var) {
        return NULL;
    }
    renderstream_failover_request_local_var->machine = machine;

    return renderstream_failover_request_local_var;
}


void renderstream_failover_request_free(renderstream_failover_request_t *renderstream_failover_request) {
    if(NULL == renderstream_failover_request){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_failover_request->machine) {
        d3api_locator_free(renderstream_failover_request->machine);
        renderstream_failover_request->machine = NULL;
    }
    free(renderstream_failover_request);
}

cJSON *renderstream_failover_request_convertToJSON(renderstream_failover_request_t *renderstream_failover_request) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_failover_request->machine
    if(renderstream_failover_request->machine) { 
    cJSON *machine_local_JSON = d3api_locator_convertToJSON(renderstream_failover_request->machine);
    if(machine_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "machine", machine_local_JSON);
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

renderstream_failover_request_t *renderstream_failover_request_parseFromJSON(cJSON *renderstream_failover_requestJSON){

    renderstream_failover_request_t *renderstream_failover_request_local_var = NULL;

    // renderstream_failover_request->machine
    cJSON *machine = cJSON_GetObjectItemCaseSensitive(renderstream_failover_requestJSON, "machine");
    d3api_locator_t *machine_local_nonprim = NULL;
    if (machine) { 
    machine_local_nonprim = d3api_locator_parseFromJSON(machine); //nonprimitive
    }


    renderstream_failover_request_local_var = renderstream_failover_request_create (
        machine ? machine_local_nonprim : NULL
        );

    return renderstream_failover_request_local_var;
end:
    if (machine_local_nonprim) {
        d3api_locator_free(machine_local_nonprim);
        machine_local_nonprim = NULL;
    }
    return NULL;

}

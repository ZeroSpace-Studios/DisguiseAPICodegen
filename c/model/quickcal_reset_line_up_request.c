#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "quickcal_reset_line_up_request.h"



quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_create(
    d3api_locator_t *projector
    ) {
    quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_local_var = malloc(sizeof(quickcal_reset_line_up_request_t));
    if (!quickcal_reset_line_up_request_local_var) {
        return NULL;
    }
    quickcal_reset_line_up_request_local_var->projector = projector;

    return quickcal_reset_line_up_request_local_var;
}


void quickcal_reset_line_up_request_free(quickcal_reset_line_up_request_t *quickcal_reset_line_up_request) {
    if(NULL == quickcal_reset_line_up_request){
        return ;
    }
    listEntry_t *listEntry;
    if (quickcal_reset_line_up_request->projector) {
        d3api_locator_free(quickcal_reset_line_up_request->projector);
        quickcal_reset_line_up_request->projector = NULL;
    }
    free(quickcal_reset_line_up_request);
}

cJSON *quickcal_reset_line_up_request_convertToJSON(quickcal_reset_line_up_request_t *quickcal_reset_line_up_request) {
    cJSON *item = cJSON_CreateObject();

    // quickcal_reset_line_up_request->projector
    if(quickcal_reset_line_up_request->projector) { 
    cJSON *projector_local_JSON = d3api_locator_convertToJSON(quickcal_reset_line_up_request->projector);
    if(projector_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "projector", projector_local_JSON);
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

quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_parseFromJSON(cJSON *quickcal_reset_line_up_requestJSON){

    quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_local_var = NULL;

    // quickcal_reset_line_up_request->projector
    cJSON *projector = cJSON_GetObjectItemCaseSensitive(quickcal_reset_line_up_requestJSON, "projector");
    d3api_locator_t *projector_local_nonprim = NULL;
    if (projector) { 
    projector_local_nonprim = d3api_locator_parseFromJSON(projector); //nonprimitive
    }


    quickcal_reset_line_up_request_local_var = quickcal_reset_line_up_request_create (
        projector ? projector_local_nonprim : NULL
        );

    return quickcal_reset_line_up_request_local_var;
end:
    if (projector_local_nonprim) {
        d3api_locator_free(projector_local_nonprim);
        projector_local_nonprim = NULL;
    }
    return NULL;

}

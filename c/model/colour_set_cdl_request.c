#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "colour_set_cdl_request.h"



colour_set_cdl_request_t *colour_set_cdl_request_create(
    colour_cdl_info_t *cdl
    ) {
    colour_set_cdl_request_t *colour_set_cdl_request_local_var = malloc(sizeof(colour_set_cdl_request_t));
    if (!colour_set_cdl_request_local_var) {
        return NULL;
    }
    colour_set_cdl_request_local_var->cdl = cdl;

    return colour_set_cdl_request_local_var;
}


void colour_set_cdl_request_free(colour_set_cdl_request_t *colour_set_cdl_request) {
    if(NULL == colour_set_cdl_request){
        return ;
    }
    listEntry_t *listEntry;
    if (colour_set_cdl_request->cdl) {
        colour_cdl_info_free(colour_set_cdl_request->cdl);
        colour_set_cdl_request->cdl = NULL;
    }
    free(colour_set_cdl_request);
}

cJSON *colour_set_cdl_request_convertToJSON(colour_set_cdl_request_t *colour_set_cdl_request) {
    cJSON *item = cJSON_CreateObject();

    // colour_set_cdl_request->cdl
    if(colour_set_cdl_request->cdl) { 
    cJSON *cdl_local_JSON = colour_cdl_info_convertToJSON(colour_set_cdl_request->cdl);
    if(cdl_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cdl", cdl_local_JSON);
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

colour_set_cdl_request_t *colour_set_cdl_request_parseFromJSON(cJSON *colour_set_cdl_requestJSON){

    colour_set_cdl_request_t *colour_set_cdl_request_local_var = NULL;

    // colour_set_cdl_request->cdl
    cJSON *cdl = cJSON_GetObjectItemCaseSensitive(colour_set_cdl_requestJSON, "cdl");
    colour_cdl_info_t *cdl_local_nonprim = NULL;
    if (cdl) { 
    cdl_local_nonprim = colour_cdl_info_parseFromJSON(cdl); //nonprimitive
    }


    colour_set_cdl_request_local_var = colour_set_cdl_request_create (
        cdl ? cdl_local_nonprim : NULL
        );

    return colour_set_cdl_request_local_var;
end:
    if (cdl_local_nonprim) {
        colour_cdl_info_free(cdl_local_nonprim);
        cdl_local_nonprim = NULL;
    }
    return NULL;

}

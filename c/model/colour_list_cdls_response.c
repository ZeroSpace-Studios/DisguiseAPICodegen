#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "colour_list_cdls_response.h"



colour_list_cdls_response_t *colour_list_cdls_response_create(
    rpc_status_t *status,
    list_t *result
    ) {
    colour_list_cdls_response_t *colour_list_cdls_response_local_var = malloc(sizeof(colour_list_cdls_response_t));
    if (!colour_list_cdls_response_local_var) {
        return NULL;
    }
    colour_list_cdls_response_local_var->status = status;
    colour_list_cdls_response_local_var->result = result;

    return colour_list_cdls_response_local_var;
}


void colour_list_cdls_response_free(colour_list_cdls_response_t *colour_list_cdls_response) {
    if(NULL == colour_list_cdls_response){
        return ;
    }
    listEntry_t *listEntry;
    if (colour_list_cdls_response->status) {
        rpc_status_free(colour_list_cdls_response->status);
        colour_list_cdls_response->status = NULL;
    }
    if (colour_list_cdls_response->result) {
        list_ForEach(listEntry, colour_list_cdls_response->result) {
            colour_cdl_info_free(listEntry->data);
        }
        list_free(colour_list_cdls_response->result);
        colour_list_cdls_response->result = NULL;
    }
    free(colour_list_cdls_response);
}

cJSON *colour_list_cdls_response_convertToJSON(colour_list_cdls_response_t *colour_list_cdls_response) {
    cJSON *item = cJSON_CreateObject();

    // colour_list_cdls_response->status
    if(colour_list_cdls_response->status) { 
    cJSON *status_local_JSON = rpc_status_convertToJSON(colour_list_cdls_response->status);
    if(status_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "status", status_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // colour_list_cdls_response->result
    if(colour_list_cdls_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (colour_list_cdls_response->result) {
    list_ForEach(resultListEntry, colour_list_cdls_response->result) {
    cJSON *itemLocal = colour_cdl_info_convertToJSON(resultListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(result, itemLocal);
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

colour_list_cdls_response_t *colour_list_cdls_response_parseFromJSON(cJSON *colour_list_cdls_responseJSON){

    colour_list_cdls_response_t *colour_list_cdls_response_local_var = NULL;

    // colour_list_cdls_response->status
    cJSON *status = cJSON_GetObjectItemCaseSensitive(colour_list_cdls_responseJSON, "status");
    rpc_status_t *status_local_nonprim = NULL;
    if (status) { 
    status_local_nonprim = rpc_status_parseFromJSON(status); //nonprimitive
    }

    // colour_list_cdls_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(colour_list_cdls_responseJSON, "result");
    list_t *resultList;
    if (result) { 
    cJSON *result_local_nonprimitive;
    if(!cJSON_IsArray(result)){
        goto end; //nonprimitive container
    }

    resultList = list_create();

    cJSON_ArrayForEach(result_local_nonprimitive,result )
    {
        if(!cJSON_IsObject(result_local_nonprimitive)){
            goto end;
        }
        colour_cdl_info_t *resultItem = colour_cdl_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    colour_list_cdls_response_local_var = colour_list_cdls_response_create (
        status ? status_local_nonprim : NULL,
        result ? resultList : NULL
        );

    return colour_list_cdls_response_local_var;
end:
    if (status_local_nonprim) {
        rpc_status_free(status_local_nonprim);
        status_local_nonprim = NULL;
    }
    return NULL;

}

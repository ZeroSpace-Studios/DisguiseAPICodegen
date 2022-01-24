#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_list_indirections_response.h"



indirections_list_indirections_response_t *indirections_list_indirections_response_create(
    list_t *result
    ) {
    indirections_list_indirections_response_t *indirections_list_indirections_response_local_var = malloc(sizeof(indirections_list_indirections_response_t));
    if (!indirections_list_indirections_response_local_var) {
        return NULL;
    }
    indirections_list_indirections_response_local_var->result = result;

    return indirections_list_indirections_response_local_var;
}


void indirections_list_indirections_response_free(indirections_list_indirections_response_t *indirections_list_indirections_response) {
    if(NULL == indirections_list_indirections_response){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_list_indirections_response->result) {
        list_ForEach(listEntry, indirections_list_indirections_response->result) {
            indirections_indirection_free(listEntry->data);
        }
        list_free(indirections_list_indirections_response->result);
        indirections_list_indirections_response->result = NULL;
    }
    free(indirections_list_indirections_response);
}

cJSON *indirections_list_indirections_response_convertToJSON(indirections_list_indirections_response_t *indirections_list_indirections_response) {
    cJSON *item = cJSON_CreateObject();

    // indirections_list_indirections_response->result
    if(indirections_list_indirections_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (indirections_list_indirections_response->result) {
    list_ForEach(resultListEntry, indirections_list_indirections_response->result) {
    cJSON *itemLocal = indirections_indirection_convertToJSON(resultListEntry->data);
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

indirections_list_indirections_response_t *indirections_list_indirections_response_parseFromJSON(cJSON *indirections_list_indirections_responseJSON){

    indirections_list_indirections_response_t *indirections_list_indirections_response_local_var = NULL;

    // indirections_list_indirections_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(indirections_list_indirections_responseJSON, "result");
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
        indirections_indirection_t *resultItem = indirections_indirection_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    indirections_list_indirections_response_local_var = indirections_list_indirections_response_create (
        result ? resultList : NULL
        );

    return indirections_list_indirections_response_local_var;
end:
    return NULL;

}

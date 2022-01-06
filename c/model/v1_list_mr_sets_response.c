#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_list_mr_sets_response.h"



v1_list_mr_sets_response_t *v1_list_mr_sets_response_create(
    list_t *result
    ) {
    v1_list_mr_sets_response_t *v1_list_mr_sets_response_local_var = malloc(sizeof(v1_list_mr_sets_response_t));
    if (!v1_list_mr_sets_response_local_var) {
        return NULL;
    }
    v1_list_mr_sets_response_local_var->result = result;

    return v1_list_mr_sets_response_local_var;
}


void v1_list_mr_sets_response_free(v1_list_mr_sets_response_t *v1_list_mr_sets_response) {
    if(NULL == v1_list_mr_sets_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v1_list_mr_sets_response->result) {
        list_ForEach(listEntry, v1_list_mr_sets_response->result) {
            v1_mr_set_info_free(listEntry->data);
        }
        list_free(v1_list_mr_sets_response->result);
        v1_list_mr_sets_response->result = NULL;
    }
    free(v1_list_mr_sets_response);
}

cJSON *v1_list_mr_sets_response_convertToJSON(v1_list_mr_sets_response_t *v1_list_mr_sets_response) {
    cJSON *item = cJSON_CreateObject();

    // v1_list_mr_sets_response->result
    if(v1_list_mr_sets_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (v1_list_mr_sets_response->result) {
    list_ForEach(resultListEntry, v1_list_mr_sets_response->result) {
    cJSON *itemLocal = v1_mr_set_info_convertToJSON(resultListEntry->data);
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

v1_list_mr_sets_response_t *v1_list_mr_sets_response_parseFromJSON(cJSON *v1_list_mr_sets_responseJSON){

    v1_list_mr_sets_response_t *v1_list_mr_sets_response_local_var = NULL;

    // v1_list_mr_sets_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(v1_list_mr_sets_responseJSON, "result");
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
        v1_mr_set_info_t *resultItem = v1_mr_set_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    v1_list_mr_sets_response_local_var = v1_list_mr_sets_response_create (
        result ? resultList : NULL
        );

    return v1_list_mr_sets_response_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "resources_list_resources_response.h"



resources_list_resources_response_t *resources_list_resources_response_create(
    list_t *result
    ) {
    resources_list_resources_response_t *resources_list_resources_response_local_var = malloc(sizeof(resources_list_resources_response_t));
    if (!resources_list_resources_response_local_var) {
        return NULL;
    }
    resources_list_resources_response_local_var->result = result;

    return resources_list_resources_response_local_var;
}


void resources_list_resources_response_free(resources_list_resources_response_t *resources_list_resources_response) {
    if(NULL == resources_list_resources_response){
        return ;
    }
    listEntry_t *listEntry;
    if (resources_list_resources_response->result) {
        list_ForEach(listEntry, resources_list_resources_response->result) {
            resources_resource_info_free(listEntry->data);
        }
        list_free(resources_list_resources_response->result);
        resources_list_resources_response->result = NULL;
    }
    free(resources_list_resources_response);
}

cJSON *resources_list_resources_response_convertToJSON(resources_list_resources_response_t *resources_list_resources_response) {
    cJSON *item = cJSON_CreateObject();

    // resources_list_resources_response->result
    if(resources_list_resources_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (resources_list_resources_response->result) {
    list_ForEach(resultListEntry, resources_list_resources_response->result) {
    cJSON *itemLocal = resources_resource_info_convertToJSON(resultListEntry->data);
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

resources_list_resources_response_t *resources_list_resources_response_parseFromJSON(cJSON *resources_list_resources_responseJSON){

    resources_list_resources_response_t *resources_list_resources_response_local_var = NULL;

    // resources_list_resources_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(resources_list_resources_responseJSON, "result");
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
        resources_resource_info_t *resultItem = resources_resource_info_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    resources_list_resources_response_local_var = resources_list_resources_response_create (
        result ? resultList : NULL
        );

    return resources_list_resources_response_local_var;
end:
    return NULL;

}

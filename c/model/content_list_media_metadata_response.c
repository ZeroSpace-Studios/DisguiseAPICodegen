#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_list_media_metadata_response.h"



content_list_media_metadata_response_t *content_list_media_metadata_response_create(
    list_t *result
    ) {
    content_list_media_metadata_response_t *content_list_media_metadata_response_local_var = malloc(sizeof(content_list_media_metadata_response_t));
    if (!content_list_media_metadata_response_local_var) {
        return NULL;
    }
    content_list_media_metadata_response_local_var->result = result;

    return content_list_media_metadata_response_local_var;
}


void content_list_media_metadata_response_free(content_list_media_metadata_response_t *content_list_media_metadata_response) {
    if(NULL == content_list_media_metadata_response){
        return ;
    }
    listEntry_t *listEntry;
    if (content_list_media_metadata_response->result) {
        list_ForEach(listEntry, content_list_media_metadata_response->result) {
            content_media_metadata_free(listEntry->data);
        }
        list_free(content_list_media_metadata_response->result);
        content_list_media_metadata_response->result = NULL;
    }
    free(content_list_media_metadata_response);
}

cJSON *content_list_media_metadata_response_convertToJSON(content_list_media_metadata_response_t *content_list_media_metadata_response) {
    cJSON *item = cJSON_CreateObject();

    // content_list_media_metadata_response->result
    if(content_list_media_metadata_response->result) { 
    cJSON *result = cJSON_AddArrayToObject(item, "result");
    if(result == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *resultListEntry;
    if (content_list_media_metadata_response->result) {
    list_ForEach(resultListEntry, content_list_media_metadata_response->result) {
    cJSON *itemLocal = content_media_metadata_convertToJSON(resultListEntry->data);
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

content_list_media_metadata_response_t *content_list_media_metadata_response_parseFromJSON(cJSON *content_list_media_metadata_responseJSON){

    content_list_media_metadata_response_t *content_list_media_metadata_response_local_var = NULL;

    // content_list_media_metadata_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(content_list_media_metadata_responseJSON, "result");
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
        content_media_metadata_t *resultItem = content_media_metadata_parseFromJSON(result_local_nonprimitive);

        list_addElement(resultList, resultItem);
    }
    }


    content_list_media_metadata_response_local_var = content_list_media_metadata_response_create (
        result ? resultList : NULL
        );

    return content_list_media_metadata_response_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_get_media_metadata_response.h"



content_get_media_metadata_response_t *content_get_media_metadata_response_create(
    content_media_metadata_t *result
    ) {
    content_get_media_metadata_response_t *content_get_media_metadata_response_local_var = malloc(sizeof(content_get_media_metadata_response_t));
    if (!content_get_media_metadata_response_local_var) {
        return NULL;
    }
    content_get_media_metadata_response_local_var->result = result;

    return content_get_media_metadata_response_local_var;
}


void content_get_media_metadata_response_free(content_get_media_metadata_response_t *content_get_media_metadata_response) {
    if(NULL == content_get_media_metadata_response){
        return ;
    }
    listEntry_t *listEntry;
    if (content_get_media_metadata_response->result) {
        content_media_metadata_free(content_get_media_metadata_response->result);
        content_get_media_metadata_response->result = NULL;
    }
    free(content_get_media_metadata_response);
}

cJSON *content_get_media_metadata_response_convertToJSON(content_get_media_metadata_response_t *content_get_media_metadata_response) {
    cJSON *item = cJSON_CreateObject();

    // content_get_media_metadata_response->result
    if(content_get_media_metadata_response->result) { 
    cJSON *result_local_JSON = content_media_metadata_convertToJSON(content_get_media_metadata_response->result);
    if(result_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "result", result_local_JSON);
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

content_get_media_metadata_response_t *content_get_media_metadata_response_parseFromJSON(cJSON *content_get_media_metadata_responseJSON){

    content_get_media_metadata_response_t *content_get_media_metadata_response_local_var = NULL;

    // content_get_media_metadata_response->result
    cJSON *result = cJSON_GetObjectItemCaseSensitive(content_get_media_metadata_responseJSON, "result");
    content_media_metadata_t *result_local_nonprim = NULL;
    if (result) { 
    result_local_nonprim = content_media_metadata_parseFromJSON(result); //nonprimitive
    }


    content_get_media_metadata_response_local_var = content_get_media_metadata_response_create (
        result ? result_local_nonprim : NULL
        );

    return content_get_media_metadata_response_local_var;
end:
    if (result_local_nonprim) {
        content_media_metadata_free(result_local_nonprim);
        result_local_nonprim = NULL;
    }
    return NULL;

}

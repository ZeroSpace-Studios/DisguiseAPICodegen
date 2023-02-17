#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "protobuf_any.h"



protobuf_any_t *protobuf_any_create(
    char *type_url,
    char *value
    char *value
    ) {
    protobuf_any_t *protobuf_any_local_var = malloc(sizeof(protobuf_any_t));
    if (!protobuf_any_local_var) {
        return NULL;
    }
    protobuf_any_local_var->type_url = type_url;
    protobuf_any_local_var->value = value;

    return protobuf_any_local_var;
}


void protobuf_any_free(protobuf_any_t *protobuf_any) {
    if(NULL == protobuf_any){
        return ;
    }
    listEntry_t *listEntry;
    if (protobuf_any->type_url) {
        free(protobuf_any->type_url);
        protobuf_any->type_url = NULL;
    }
    if (protobuf_any->value) {
        free(protobuf_any->value);
        protobuf_any->value = NULL;
    }
    if (protobuf_any->value) {
        free(protobuf_any->value);
        protobuf_any->value = NULL;
    }
    free(protobuf_any);
}

cJSON *protobuf_any_convertToJSON(protobuf_any_t *protobuf_any) {
    cJSON *item = cJSON_CreateObject();

    // protobuf_any->type_url
    if(protobuf_any->type_url) { 
    if(cJSON_AddStringToObject(item, "type_url", protobuf_any->type_url) == NULL) {
    goto fail; //String
    }
     } 


    // protobuf_any->value
    if(protobuf_any->value) { 
    if(cJSON_AddStringToObject(item, "value", protobuf_any->value) == NULL) {
    goto fail; //String
    }
    if(cJSON_AddStringToObject(item, "value", protobuf_any->value) == NULL) {
    goto fail; //ByteArray
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

protobuf_any_t *protobuf_any_parseFromJSON(cJSON *protobuf_anyJSON){

    protobuf_any_t *protobuf_any_local_var = NULL;

    // protobuf_any->type_url
    cJSON *type_url = cJSON_GetObjectItemCaseSensitive(protobuf_anyJSON, "type_url");
    if (type_url) { 
    if(!cJSON_IsString(type_url))
    {
    goto end; //String
    }
    }

    // protobuf_any->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(protobuf_anyJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //ByteArray
    }
    }


    protobuf_any_local_var = protobuf_any_create (
        type_url ? strdup(type_url->valuestring) : NULL,
        value ? strdup(value->valuestring) : NULL
        value ? strdup(value->valuestring) : NULL
        );

    return protobuf_any_local_var;
end:
    return NULL;

}

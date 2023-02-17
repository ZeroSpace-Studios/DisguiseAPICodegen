#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "d3api_locator.h"



d3api_locator_t *d3api_locator_create(
    char *uid,
    char *name
    ) {
    d3api_locator_t *d3api_locator_local_var = malloc(sizeof(d3api_locator_t));
    if (!d3api_locator_local_var) {
        return NULL;
    }
    d3api_locator_local_var->uid = uid;
    d3api_locator_local_var->name = name;

    return d3api_locator_local_var;
}


void d3api_locator_free(d3api_locator_t *d3api_locator) {
    if(NULL == d3api_locator){
        return ;
    }
    listEntry_t *listEntry;
    if (d3api_locator->uid) {
        free(d3api_locator->uid);
        d3api_locator->uid = NULL;
    }
    if (d3api_locator->name) {
        free(d3api_locator->name);
        d3api_locator->name = NULL;
    }
    free(d3api_locator);
}

cJSON *d3api_locator_convertToJSON(d3api_locator_t *d3api_locator) {
    cJSON *item = cJSON_CreateObject();

    // d3api_locator->uid
    if(d3api_locator->uid) { 
    if(cJSON_AddStringToObject(item, "uid", d3api_locator->uid) == NULL) {
    goto fail; //String
    }
     } 


    // d3api_locator->name
    if(d3api_locator->name) { 
    if(cJSON_AddStringToObject(item, "name", d3api_locator->name) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

d3api_locator_t *d3api_locator_parseFromJSON(cJSON *d3api_locatorJSON){

    d3api_locator_t *d3api_locator_local_var = NULL;

    // d3api_locator->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(d3api_locatorJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // d3api_locator->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(d3api_locatorJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    d3api_locator_local_var = d3api_locator_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return d3api_locator_local_var;
end:
    return NULL;

}

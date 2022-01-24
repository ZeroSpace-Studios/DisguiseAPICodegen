#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_vector3.h"



content_vector3_t *content_vector3_create(
    float x,
    float y,
    float z
    ) {
    content_vector3_t *content_vector3_local_var = malloc(sizeof(content_vector3_t));
    if (!content_vector3_local_var) {
        return NULL;
    }
    content_vector3_local_var->x = x;
    content_vector3_local_var->y = y;
    content_vector3_local_var->z = z;

    return content_vector3_local_var;
}


void content_vector3_free(content_vector3_t *content_vector3) {
    if(NULL == content_vector3){
        return ;
    }
    listEntry_t *listEntry;
    free(content_vector3);
}

cJSON *content_vector3_convertToJSON(content_vector3_t *content_vector3) {
    cJSON *item = cJSON_CreateObject();

    // content_vector3->x
    if(content_vector3->x) { 
    if(cJSON_AddNumberToObject(item, "x", content_vector3->x) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_vector3->y
    if(content_vector3->y) { 
    if(cJSON_AddNumberToObject(item, "y", content_vector3->y) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_vector3->z
    if(content_vector3->z) { 
    if(cJSON_AddNumberToObject(item, "z", content_vector3->z) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

content_vector3_t *content_vector3_parseFromJSON(cJSON *content_vector3JSON){

    content_vector3_t *content_vector3_local_var = NULL;

    // content_vector3->x
    cJSON *x = cJSON_GetObjectItemCaseSensitive(content_vector3JSON, "x");
    if (x) { 
    if(!cJSON_IsNumber(x))
    {
    goto end; //Numeric
    }
    }

    // content_vector3->y
    cJSON *y = cJSON_GetObjectItemCaseSensitive(content_vector3JSON, "y");
    if (y) { 
    if(!cJSON_IsNumber(y))
    {
    goto end; //Numeric
    }
    }

    // content_vector3->z
    cJSON *z = cJSON_GetObjectItemCaseSensitive(content_vector3JSON, "z");
    if (z) { 
    if(!cJSON_IsNumber(z))
    {
    goto end; //Numeric
    }
    }


    content_vector3_local_var = content_vector3_create (
        x ? x->valuedouble : 0,
        y ? y->valuedouble : 0,
        z ? z->valuedouble : 0
        );

    return content_vector3_local_var;
end:
    return NULL;

}

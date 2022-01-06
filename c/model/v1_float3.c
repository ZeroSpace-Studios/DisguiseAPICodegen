#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v1_float3.h"



v1_float3_t *v1_float3_create(
    float x,
    float y,
    float z
    ) {
    v1_float3_t *v1_float3_local_var = malloc(sizeof(v1_float3_t));
    if (!v1_float3_local_var) {
        return NULL;
    }
    v1_float3_local_var->x = x;
    v1_float3_local_var->y = y;
    v1_float3_local_var->z = z;

    return v1_float3_local_var;
}


void v1_float3_free(v1_float3_t *v1_float3) {
    if(NULL == v1_float3){
        return ;
    }
    listEntry_t *listEntry;
    free(v1_float3);
}

cJSON *v1_float3_convertToJSON(v1_float3_t *v1_float3) {
    cJSON *item = cJSON_CreateObject();

    // v1_float3->x
    if(v1_float3->x) { 
    if(cJSON_AddNumberToObject(item, "x", v1_float3->x) == NULL) {
    goto fail; //Numeric
    }
     } 


    // v1_float3->y
    if(v1_float3->y) { 
    if(cJSON_AddNumberToObject(item, "y", v1_float3->y) == NULL) {
    goto fail; //Numeric
    }
     } 


    // v1_float3->z
    if(v1_float3->z) { 
    if(cJSON_AddNumberToObject(item, "z", v1_float3->z) == NULL) {
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

v1_float3_t *v1_float3_parseFromJSON(cJSON *v1_float3JSON){

    v1_float3_t *v1_float3_local_var = NULL;

    // v1_float3->x
    cJSON *x = cJSON_GetObjectItemCaseSensitive(v1_float3JSON, "x");
    if (x) { 
    if(!cJSON_IsNumber(x))
    {
    goto end; //Numeric
    }
    }

    // v1_float3->y
    cJSON *y = cJSON_GetObjectItemCaseSensitive(v1_float3JSON, "y");
    if (y) { 
    if(!cJSON_IsNumber(y))
    {
    goto end; //Numeric
    }
    }

    // v1_float3->z
    cJSON *z = cJSON_GetObjectItemCaseSensitive(v1_float3JSON, "z");
    if (z) { 
    if(!cJSON_IsNumber(z))
    {
    goto end; //Numeric
    }
    }


    v1_float3_local_var = v1_float3_create (
        x ? x->valuedouble : 0,
        y ? y->valuedouble : 0,
        z ? z->valuedouble : 0
        );

    return v1_float3_local_var;
end:
    return NULL;

}

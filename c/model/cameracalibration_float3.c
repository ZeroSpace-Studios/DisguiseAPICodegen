#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cameracalibration_float3.h"



cameracalibration_float3_t *cameracalibration_float3_create(
    float x,
    float y,
    float z
    ) {
    cameracalibration_float3_t *cameracalibration_float3_local_var = malloc(sizeof(cameracalibration_float3_t));
    if (!cameracalibration_float3_local_var) {
        return NULL;
    }
    cameracalibration_float3_local_var->x = x;
    cameracalibration_float3_local_var->y = y;
    cameracalibration_float3_local_var->z = z;

    return cameracalibration_float3_local_var;
}


void cameracalibration_float3_free(cameracalibration_float3_t *cameracalibration_float3) {
    if(NULL == cameracalibration_float3){
        return ;
    }
    listEntry_t *listEntry;
    free(cameracalibration_float3);
}

cJSON *cameracalibration_float3_convertToJSON(cameracalibration_float3_t *cameracalibration_float3) {
    cJSON *item = cJSON_CreateObject();

    // cameracalibration_float3->x
    if(cameracalibration_float3->x) { 
    if(cJSON_AddNumberToObject(item, "x", cameracalibration_float3->x) == NULL) {
    goto fail; //Numeric
    }
     } 


    // cameracalibration_float3->y
    if(cameracalibration_float3->y) { 
    if(cJSON_AddNumberToObject(item, "y", cameracalibration_float3->y) == NULL) {
    goto fail; //Numeric
    }
     } 


    // cameracalibration_float3->z
    if(cameracalibration_float3->z) { 
    if(cJSON_AddNumberToObject(item, "z", cameracalibration_float3->z) == NULL) {
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

cameracalibration_float3_t *cameracalibration_float3_parseFromJSON(cJSON *cameracalibration_float3JSON){

    cameracalibration_float3_t *cameracalibration_float3_local_var = NULL;

    // cameracalibration_float3->x
    cJSON *x = cJSON_GetObjectItemCaseSensitive(cameracalibration_float3JSON, "x");
    if (x) { 
    if(!cJSON_IsNumber(x))
    {
    goto end; //Numeric
    }
    }

    // cameracalibration_float3->y
    cJSON *y = cJSON_GetObjectItemCaseSensitive(cameracalibration_float3JSON, "y");
    if (y) { 
    if(!cJSON_IsNumber(y))
    {
    goto end; //Numeric
    }
    }

    // cameracalibration_float3->z
    cJSON *z = cJSON_GetObjectItemCaseSensitive(cameracalibration_float3JSON, "z");
    if (z) { 
    if(!cJSON_IsNumber(z))
    {
    goto end; //Numeric
    }
    }


    cameracalibration_float3_local_var = cameracalibration_float3_create (
        x ? x->valuedouble : 0,
        y ? y->valuedouble : 0,
        z ? z->valuedouble : 0
        );

    return cameracalibration_float3_local_var;
end:
    return NULL;

}

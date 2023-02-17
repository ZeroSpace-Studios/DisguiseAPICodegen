#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "d3api_vec2_float.h"



d3api_vec2_float_t *d3api_vec2_float_create(
    float x,
    float y
    ) {
    d3api_vec2_float_t *d3api_vec2_float_local_var = malloc(sizeof(d3api_vec2_float_t));
    if (!d3api_vec2_float_local_var) {
        return NULL;
    }
    d3api_vec2_float_local_var->x = x;
    d3api_vec2_float_local_var->y = y;

    return d3api_vec2_float_local_var;
}


void d3api_vec2_float_free(d3api_vec2_float_t *d3api_vec2_float) {
    if(NULL == d3api_vec2_float){
        return ;
    }
    listEntry_t *listEntry;
    free(d3api_vec2_float);
}

cJSON *d3api_vec2_float_convertToJSON(d3api_vec2_float_t *d3api_vec2_float) {
    cJSON *item = cJSON_CreateObject();

    // d3api_vec2_float->x
    if(d3api_vec2_float->x) { 
    if(cJSON_AddNumberToObject(item, "x", d3api_vec2_float->x) == NULL) {
    goto fail; //Numeric
    }
     } 


    // d3api_vec2_float->y
    if(d3api_vec2_float->y) { 
    if(cJSON_AddNumberToObject(item, "y", d3api_vec2_float->y) == NULL) {
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

d3api_vec2_float_t *d3api_vec2_float_parseFromJSON(cJSON *d3api_vec2_floatJSON){

    d3api_vec2_float_t *d3api_vec2_float_local_var = NULL;

    // d3api_vec2_float->x
    cJSON *x = cJSON_GetObjectItemCaseSensitive(d3api_vec2_floatJSON, "x");
    if (x) { 
    if(!cJSON_IsNumber(x))
    {
    goto end; //Numeric
    }
    }

    // d3api_vec2_float->y
    cJSON *y = cJSON_GetObjectItemCaseSensitive(d3api_vec2_floatJSON, "y");
    if (y) { 
    if(!cJSON_IsNumber(y))
    {
    goto end; //Numeric
    }
    }


    d3api_vec2_float_local_var = d3api_vec2_float_create (
        x ? x->valuedouble : 0,
        y ? y->valuedouble : 0
        );

    return d3api_vec2_float_local_var;
end:
    return NULL;

}

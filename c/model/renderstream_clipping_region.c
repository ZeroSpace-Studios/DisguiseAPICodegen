#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_clipping_region.h"



renderstream_clipping_region_t *renderstream_clipping_region_create(
    float left,
    float right,
    float top,
    float bottom
    ) {
    renderstream_clipping_region_t *renderstream_clipping_region_local_var = malloc(sizeof(renderstream_clipping_region_t));
    if (!renderstream_clipping_region_local_var) {
        return NULL;
    }
    renderstream_clipping_region_local_var->left = left;
    renderstream_clipping_region_local_var->right = right;
    renderstream_clipping_region_local_var->top = top;
    renderstream_clipping_region_local_var->bottom = bottom;

    return renderstream_clipping_region_local_var;
}


void renderstream_clipping_region_free(renderstream_clipping_region_t *renderstream_clipping_region) {
    if(NULL == renderstream_clipping_region){
        return ;
    }
    listEntry_t *listEntry;
    free(renderstream_clipping_region);
}

cJSON *renderstream_clipping_region_convertToJSON(renderstream_clipping_region_t *renderstream_clipping_region) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_clipping_region->left
    if(renderstream_clipping_region->left) { 
    if(cJSON_AddNumberToObject(item, "left", renderstream_clipping_region->left) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_clipping_region->right
    if(renderstream_clipping_region->right) { 
    if(cJSON_AddNumberToObject(item, "right", renderstream_clipping_region->right) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_clipping_region->top
    if(renderstream_clipping_region->top) { 
    if(cJSON_AddNumberToObject(item, "top", renderstream_clipping_region->top) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_clipping_region->bottom
    if(renderstream_clipping_region->bottom) { 
    if(cJSON_AddNumberToObject(item, "bottom", renderstream_clipping_region->bottom) == NULL) {
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

renderstream_clipping_region_t *renderstream_clipping_region_parseFromJSON(cJSON *renderstream_clipping_regionJSON){

    renderstream_clipping_region_t *renderstream_clipping_region_local_var = NULL;

    // renderstream_clipping_region->left
    cJSON *left = cJSON_GetObjectItemCaseSensitive(renderstream_clipping_regionJSON, "left");
    if (left) { 
    if(!cJSON_IsNumber(left))
    {
    goto end; //Numeric
    }
    }

    // renderstream_clipping_region->right
    cJSON *right = cJSON_GetObjectItemCaseSensitive(renderstream_clipping_regionJSON, "right");
    if (right) { 
    if(!cJSON_IsNumber(right))
    {
    goto end; //Numeric
    }
    }

    // renderstream_clipping_region->top
    cJSON *top = cJSON_GetObjectItemCaseSensitive(renderstream_clipping_regionJSON, "top");
    if (top) { 
    if(!cJSON_IsNumber(top))
    {
    goto end; //Numeric
    }
    }

    // renderstream_clipping_region->bottom
    cJSON *bottom = cJSON_GetObjectItemCaseSensitive(renderstream_clipping_regionJSON, "bottom");
    if (bottom) { 
    if(!cJSON_IsNumber(bottom))
    {
    goto end; //Numeric
    }
    }


    renderstream_clipping_region_local_var = renderstream_clipping_region_create (
        left ? left->valuedouble : 0,
        right ? right->valuedouble : 0,
        top ? top->valuedouble : 0,
        bottom ? bottom->valuedouble : 0
        );

    return renderstream_clipping_region_local_var;
end:
    return NULL;

}

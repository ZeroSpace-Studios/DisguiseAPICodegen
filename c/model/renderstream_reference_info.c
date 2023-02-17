#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_reference_info.h"



renderstream_reference_info_t *renderstream_reference_info_create(
    double t_now
    ) {
    renderstream_reference_info_t *renderstream_reference_info_local_var = malloc(sizeof(renderstream_reference_info_t));
    if (!renderstream_reference_info_local_var) {
        return NULL;
    }
    renderstream_reference_info_local_var->t_now = t_now;

    return renderstream_reference_info_local_var;
}


void renderstream_reference_info_free(renderstream_reference_info_t *renderstream_reference_info) {
    if(NULL == renderstream_reference_info){
        return ;
    }
    listEntry_t *listEntry;
    free(renderstream_reference_info);
}

cJSON *renderstream_reference_info_convertToJSON(renderstream_reference_info_t *renderstream_reference_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_reference_info->t_now
    if(renderstream_reference_info->t_now) { 
    if(cJSON_AddNumberToObject(item, "tNow", renderstream_reference_info->t_now) == NULL) {
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

renderstream_reference_info_t *renderstream_reference_info_parseFromJSON(cJSON *renderstream_reference_infoJSON){

    renderstream_reference_info_t *renderstream_reference_info_local_var = NULL;

    // renderstream_reference_info->t_now
    cJSON *t_now = cJSON_GetObjectItemCaseSensitive(renderstream_reference_infoJSON, "tNow");
    if (t_now) { 
    if(!cJSON_IsNumber(t_now))
    {
    goto end; //Numeric
    }
    }


    renderstream_reference_info_local_var = renderstream_reference_info_create (
        t_now ? t_now->valuedouble : 0
        );

    return renderstream_reference_info_local_var;
end:
    return NULL;

}

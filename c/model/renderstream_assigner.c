#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_assigner.h"



renderstream_assigner_t *renderstream_assigner_create(
    char *uid,
    char *name
    ) {
    renderstream_assigner_t *renderstream_assigner_local_var = malloc(sizeof(renderstream_assigner_t));
    if (!renderstream_assigner_local_var) {
        return NULL;
    }
    renderstream_assigner_local_var->uid = uid;
    renderstream_assigner_local_var->name = name;

    return renderstream_assigner_local_var;
}


void renderstream_assigner_free(renderstream_assigner_t *renderstream_assigner) {
    if(NULL == renderstream_assigner){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_assigner->uid) {
        free(renderstream_assigner->uid);
        renderstream_assigner->uid = NULL;
    }
    if (renderstream_assigner->name) {
        free(renderstream_assigner->name);
        renderstream_assigner->name = NULL;
    }
    free(renderstream_assigner);
}

cJSON *renderstream_assigner_convertToJSON(renderstream_assigner_t *renderstream_assigner) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_assigner->uid
    if(renderstream_assigner->uid) { 
    if(cJSON_AddStringToObject(item, "uid", renderstream_assigner->uid) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_assigner->name
    if(renderstream_assigner->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_assigner->name) == NULL) {
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

renderstream_assigner_t *renderstream_assigner_parseFromJSON(cJSON *renderstream_assignerJSON){

    renderstream_assigner_t *renderstream_assigner_local_var = NULL;

    // renderstream_assigner->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(renderstream_assignerJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // renderstream_assigner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_assignerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }


    renderstream_assigner_local_var = renderstream_assigner_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL
        );

    return renderstream_assigner_local_var;
end:
    return NULL;

}

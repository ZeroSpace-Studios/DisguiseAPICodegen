#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_list_annotations_result.h"



transport_list_annotations_result_t *transport_list_annotations_result_create(
    char *uid,
    char *name,
    transport_annotation_info_t *annotations
    ) {
    transport_list_annotations_result_t *transport_list_annotations_result_local_var = malloc(sizeof(transport_list_annotations_result_t));
    if (!transport_list_annotations_result_local_var) {
        return NULL;
    }
    transport_list_annotations_result_local_var->uid = uid;
    transport_list_annotations_result_local_var->name = name;
    transport_list_annotations_result_local_var->annotations = annotations;

    return transport_list_annotations_result_local_var;
}


void transport_list_annotations_result_free(transport_list_annotations_result_t *transport_list_annotations_result) {
    if(NULL == transport_list_annotations_result){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_list_annotations_result->uid) {
        free(transport_list_annotations_result->uid);
        transport_list_annotations_result->uid = NULL;
    }
    if (transport_list_annotations_result->name) {
        free(transport_list_annotations_result->name);
        transport_list_annotations_result->name = NULL;
    }
    if (transport_list_annotations_result->annotations) {
        transport_annotation_info_free(transport_list_annotations_result->annotations);
        transport_list_annotations_result->annotations = NULL;
    }
    free(transport_list_annotations_result);
}

cJSON *transport_list_annotations_result_convertToJSON(transport_list_annotations_result_t *transport_list_annotations_result) {
    cJSON *item = cJSON_CreateObject();

    // transport_list_annotations_result->uid
    if(transport_list_annotations_result->uid) { 
    if(cJSON_AddStringToObject(item, "uid", transport_list_annotations_result->uid) == NULL) {
    goto fail; //String
    }
     } 


    // transport_list_annotations_result->name
    if(transport_list_annotations_result->name) { 
    if(cJSON_AddStringToObject(item, "name", transport_list_annotations_result->name) == NULL) {
    goto fail; //String
    }
     } 


    // transport_list_annotations_result->annotations
    if(transport_list_annotations_result->annotations) { 
    cJSON *annotations_local_JSON = transport_annotation_info_convertToJSON(transport_list_annotations_result->annotations);
    if(annotations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "annotations", annotations_local_JSON);
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

transport_list_annotations_result_t *transport_list_annotations_result_parseFromJSON(cJSON *transport_list_annotations_resultJSON){

    transport_list_annotations_result_t *transport_list_annotations_result_local_var = NULL;

    // transport_list_annotations_result->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(transport_list_annotations_resultJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // transport_list_annotations_result->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transport_list_annotations_resultJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // transport_list_annotations_result->annotations
    cJSON *annotations = cJSON_GetObjectItemCaseSensitive(transport_list_annotations_resultJSON, "annotations");
    transport_annotation_info_t *annotations_local_nonprim = NULL;
    if (annotations) { 
    annotations_local_nonprim = transport_annotation_info_parseFromJSON(annotations); //nonprimitive
    }


    transport_list_annotations_result_local_var = transport_list_annotations_result_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        annotations ? annotations_local_nonprim : NULL
        );

    return transport_list_annotations_result_local_var;
end:
    if (annotations_local_nonprim) {
        transport_annotation_info_free(annotations_local_nonprim);
        annotations_local_nonprim = NULL;
    }
    return NULL;

}

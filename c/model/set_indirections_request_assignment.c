#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_indirections_request_assignment.h"



set_indirections_request_assignment_t *set_indirections_request_assignment_create(
    char *uid,
    long resource_index,
    char *resource_uid
    ) {
    set_indirections_request_assignment_t *set_indirections_request_assignment_local_var = malloc(sizeof(set_indirections_request_assignment_t));
    if (!set_indirections_request_assignment_local_var) {
        return NULL;
    }
    set_indirections_request_assignment_local_var->uid = uid;
    set_indirections_request_assignment_local_var->resource_index = resource_index;
    set_indirections_request_assignment_local_var->resource_uid = resource_uid;

    return set_indirections_request_assignment_local_var;
}


void set_indirections_request_assignment_free(set_indirections_request_assignment_t *set_indirections_request_assignment) {
    if(NULL == set_indirections_request_assignment){
        return ;
    }
    listEntry_t *listEntry;
    if (set_indirections_request_assignment->uid) {
        free(set_indirections_request_assignment->uid);
        set_indirections_request_assignment->uid = NULL;
    }
    if (set_indirections_request_assignment->resource_uid) {
        free(set_indirections_request_assignment->resource_uid);
        set_indirections_request_assignment->resource_uid = NULL;
    }
    free(set_indirections_request_assignment);
}

cJSON *set_indirections_request_assignment_convertToJSON(set_indirections_request_assignment_t *set_indirections_request_assignment) {
    cJSON *item = cJSON_CreateObject();

    // set_indirections_request_assignment->uid
    if(set_indirections_request_assignment->uid) { 
    if(cJSON_AddStringToObject(item, "uid", set_indirections_request_assignment->uid) == NULL) {
    goto fail; //String
    }
     } 


    // set_indirections_request_assignment->resource_index
    if(set_indirections_request_assignment->resource_index) { 
    if(cJSON_AddNumberToObject(item, "resourceIndex", set_indirections_request_assignment->resource_index) == NULL) {
    goto fail; //Numeric
    }
     } 


    // set_indirections_request_assignment->resource_uid
    if(set_indirections_request_assignment->resource_uid) { 
    if(cJSON_AddStringToObject(item, "resourceUid", set_indirections_request_assignment->resource_uid) == NULL) {
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

set_indirections_request_assignment_t *set_indirections_request_assignment_parseFromJSON(cJSON *set_indirections_request_assignmentJSON){

    set_indirections_request_assignment_t *set_indirections_request_assignment_local_var = NULL;

    // set_indirections_request_assignment->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(set_indirections_request_assignmentJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // set_indirections_request_assignment->resource_index
    cJSON *resource_index = cJSON_GetObjectItemCaseSensitive(set_indirections_request_assignmentJSON, "resourceIndex");
    if (resource_index) { 
    if(!cJSON_IsNumber(resource_index))
    {
    goto end; //Numeric
    }
    }

    // set_indirections_request_assignment->resource_uid
    cJSON *resource_uid = cJSON_GetObjectItemCaseSensitive(set_indirections_request_assignmentJSON, "resourceUid");
    if (resource_uid) { 
    if(!cJSON_IsString(resource_uid))
    {
    goto end; //String
    }
    }


    set_indirections_request_assignment_local_var = set_indirections_request_assignment_create (
        uid ? strdup(uid->valuestring) : NULL,
        resource_index ? resource_index->valuedouble : 0,
        resource_uid ? strdup(resource_uid->valuestring) : NULL
        );

    return set_indirections_request_assignment_local_var;
end:
    return NULL;

}

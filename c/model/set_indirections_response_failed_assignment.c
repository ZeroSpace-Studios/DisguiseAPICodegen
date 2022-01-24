#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "set_indirections_response_failed_assignment.h"



set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_create(
    char *uid,
    long resource_index,
    char *resource_uid,
    char *error
    ) {
    set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_local_var = malloc(sizeof(set_indirections_response_failed_assignment_t));
    if (!set_indirections_response_failed_assignment_local_var) {
        return NULL;
    }
    set_indirections_response_failed_assignment_local_var->uid = uid;
    set_indirections_response_failed_assignment_local_var->resource_index = resource_index;
    set_indirections_response_failed_assignment_local_var->resource_uid = resource_uid;
    set_indirections_response_failed_assignment_local_var->error = error;

    return set_indirections_response_failed_assignment_local_var;
}


void set_indirections_response_failed_assignment_free(set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment) {
    if(NULL == set_indirections_response_failed_assignment){
        return ;
    }
    listEntry_t *listEntry;
    if (set_indirections_response_failed_assignment->uid) {
        free(set_indirections_response_failed_assignment->uid);
        set_indirections_response_failed_assignment->uid = NULL;
    }
    if (set_indirections_response_failed_assignment->resource_uid) {
        free(set_indirections_response_failed_assignment->resource_uid);
        set_indirections_response_failed_assignment->resource_uid = NULL;
    }
    if (set_indirections_response_failed_assignment->error) {
        free(set_indirections_response_failed_assignment->error);
        set_indirections_response_failed_assignment->error = NULL;
    }
    free(set_indirections_response_failed_assignment);
}

cJSON *set_indirections_response_failed_assignment_convertToJSON(set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment) {
    cJSON *item = cJSON_CreateObject();

    // set_indirections_response_failed_assignment->uid
    if(set_indirections_response_failed_assignment->uid) { 
    if(cJSON_AddStringToObject(item, "uid", set_indirections_response_failed_assignment->uid) == NULL) {
    goto fail; //String
    }
     } 


    // set_indirections_response_failed_assignment->resource_index
    if(set_indirections_response_failed_assignment->resource_index) { 
    if(cJSON_AddNumberToObject(item, "resourceIndex", set_indirections_response_failed_assignment->resource_index) == NULL) {
    goto fail; //Numeric
    }
     } 


    // set_indirections_response_failed_assignment->resource_uid
    if(set_indirections_response_failed_assignment->resource_uid) { 
    if(cJSON_AddStringToObject(item, "resourceUid", set_indirections_response_failed_assignment->resource_uid) == NULL) {
    goto fail; //String
    }
     } 


    // set_indirections_response_failed_assignment->error
    if(set_indirections_response_failed_assignment->error) { 
    if(cJSON_AddStringToObject(item, "error", set_indirections_response_failed_assignment->error) == NULL) {
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

set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_parseFromJSON(cJSON *set_indirections_response_failed_assignmentJSON){

    set_indirections_response_failed_assignment_t *set_indirections_response_failed_assignment_local_var = NULL;

    // set_indirections_response_failed_assignment->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(set_indirections_response_failed_assignmentJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // set_indirections_response_failed_assignment->resource_index
    cJSON *resource_index = cJSON_GetObjectItemCaseSensitive(set_indirections_response_failed_assignmentJSON, "resourceIndex");
    if (resource_index) { 
    if(!cJSON_IsNumber(resource_index))
    {
    goto end; //Numeric
    }
    }

    // set_indirections_response_failed_assignment->resource_uid
    cJSON *resource_uid = cJSON_GetObjectItemCaseSensitive(set_indirections_response_failed_assignmentJSON, "resourceUid");
    if (resource_uid) { 
    if(!cJSON_IsString(resource_uid))
    {
    goto end; //String
    }
    }

    // set_indirections_response_failed_assignment->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(set_indirections_response_failed_assignmentJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error))
    {
    goto end; //String
    }
    }


    set_indirections_response_failed_assignment_local_var = set_indirections_response_failed_assignment_create (
        uid ? strdup(uid->valuestring) : NULL,
        resource_index ? resource_index->valuedouble : 0,
        resource_uid ? strdup(resource_uid->valuestring) : NULL,
        error ? strdup(error->valuestring) : NULL
        );

    return set_indirections_response_failed_assignment_local_var;
end:
    return NULL;

}

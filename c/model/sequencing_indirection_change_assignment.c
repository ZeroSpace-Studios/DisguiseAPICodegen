#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sequencing_indirection_change_assignment.h"



sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_create(
    d3api_locator_t *indirection,
    d3api_locator_t *resource
    ) {
    sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_local_var = malloc(sizeof(sequencing_indirection_change_assignment_t));
    if (!sequencing_indirection_change_assignment_local_var) {
        return NULL;
    }
    sequencing_indirection_change_assignment_local_var->indirection = indirection;
    sequencing_indirection_change_assignment_local_var->resource = resource;

    return sequencing_indirection_change_assignment_local_var;
}


void sequencing_indirection_change_assignment_free(sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment) {
    if(NULL == sequencing_indirection_change_assignment){
        return ;
    }
    listEntry_t *listEntry;
    if (sequencing_indirection_change_assignment->indirection) {
        d3api_locator_free(sequencing_indirection_change_assignment->indirection);
        sequencing_indirection_change_assignment->indirection = NULL;
    }
    if (sequencing_indirection_change_assignment->resource) {
        d3api_locator_free(sequencing_indirection_change_assignment->resource);
        sequencing_indirection_change_assignment->resource = NULL;
    }
    free(sequencing_indirection_change_assignment);
}

cJSON *sequencing_indirection_change_assignment_convertToJSON(sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment) {
    cJSON *item = cJSON_CreateObject();

    // sequencing_indirection_change_assignment->indirection
    if(sequencing_indirection_change_assignment->indirection) { 
    cJSON *indirection_local_JSON = d3api_locator_convertToJSON(sequencing_indirection_change_assignment->indirection);
    if(indirection_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "indirection", indirection_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // sequencing_indirection_change_assignment->resource
    if(sequencing_indirection_change_assignment->resource) { 
    cJSON *resource_local_JSON = d3api_locator_convertToJSON(sequencing_indirection_change_assignment->resource);
    if(resource_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resource", resource_local_JSON);
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

sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_parseFromJSON(cJSON *sequencing_indirection_change_assignmentJSON){

    sequencing_indirection_change_assignment_t *sequencing_indirection_change_assignment_local_var = NULL;

    // sequencing_indirection_change_assignment->indirection
    cJSON *indirection = cJSON_GetObjectItemCaseSensitive(sequencing_indirection_change_assignmentJSON, "indirection");
    d3api_locator_t *indirection_local_nonprim = NULL;
    if (indirection) { 
    indirection_local_nonprim = d3api_locator_parseFromJSON(indirection); //nonprimitive
    }

    // sequencing_indirection_change_assignment->resource
    cJSON *resource = cJSON_GetObjectItemCaseSensitive(sequencing_indirection_change_assignmentJSON, "resource");
    d3api_locator_t *resource_local_nonprim = NULL;
    if (resource) { 
    resource_local_nonprim = d3api_locator_parseFromJSON(resource); //nonprimitive
    }


    sequencing_indirection_change_assignment_local_var = sequencing_indirection_change_assignment_create (
        indirection ? indirection_local_nonprim : NULL,
        resource ? resource_local_nonprim : NULL
        );

    return sequencing_indirection_change_assignment_local_var;
end:
    if (indirection_local_nonprim) {
        d3api_locator_free(indirection_local_nonprim);
        indirection_local_nonprim = NULL;
    }
    if (resource_local_nonprim) {
        d3api_locator_free(resource_local_nonprim);
        resource_local_nonprim = NULL;
    }
    return NULL;

}

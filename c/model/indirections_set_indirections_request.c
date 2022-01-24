#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_set_indirections_request.h"



indirections_set_indirections_request_t *indirections_set_indirections_request_create(
    list_t *assignments
    ) {
    indirections_set_indirections_request_t *indirections_set_indirections_request_local_var = malloc(sizeof(indirections_set_indirections_request_t));
    if (!indirections_set_indirections_request_local_var) {
        return NULL;
    }
    indirections_set_indirections_request_local_var->assignments = assignments;

    return indirections_set_indirections_request_local_var;
}


void indirections_set_indirections_request_free(indirections_set_indirections_request_t *indirections_set_indirections_request) {
    if(NULL == indirections_set_indirections_request){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_set_indirections_request->assignments) {
        list_ForEach(listEntry, indirections_set_indirections_request->assignments) {
            set_indirections_request_assignment_free(listEntry->data);
        }
        list_free(indirections_set_indirections_request->assignments);
        indirections_set_indirections_request->assignments = NULL;
    }
    free(indirections_set_indirections_request);
}

cJSON *indirections_set_indirections_request_convertToJSON(indirections_set_indirections_request_t *indirections_set_indirections_request) {
    cJSON *item = cJSON_CreateObject();

    // indirections_set_indirections_request->assignments
    if(indirections_set_indirections_request->assignments) { 
    cJSON *assignments = cJSON_AddArrayToObject(item, "assignments");
    if(assignments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *assignmentsListEntry;
    if (indirections_set_indirections_request->assignments) {
    list_ForEach(assignmentsListEntry, indirections_set_indirections_request->assignments) {
    cJSON *itemLocal = set_indirections_request_assignment_convertToJSON(assignmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(assignments, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

indirections_set_indirections_request_t *indirections_set_indirections_request_parseFromJSON(cJSON *indirections_set_indirections_requestJSON){

    indirections_set_indirections_request_t *indirections_set_indirections_request_local_var = NULL;

    // indirections_set_indirections_request->assignments
    cJSON *assignments = cJSON_GetObjectItemCaseSensitive(indirections_set_indirections_requestJSON, "assignments");
    list_t *assignmentsList;
    if (assignments) { 
    cJSON *assignments_local_nonprimitive;
    if(!cJSON_IsArray(assignments)){
        goto end; //nonprimitive container
    }

    assignmentsList = list_create();

    cJSON_ArrayForEach(assignments_local_nonprimitive,assignments )
    {
        if(!cJSON_IsObject(assignments_local_nonprimitive)){
            goto end;
        }
        set_indirections_request_assignment_t *assignmentsItem = set_indirections_request_assignment_parseFromJSON(assignments_local_nonprimitive);

        list_addElement(assignmentsList, assignmentsItem);
    }
    }


    indirections_set_indirections_request_local_var = indirections_set_indirections_request_create (
        assignments ? assignmentsList : NULL
        );

    return indirections_set_indirections_request_local_var;
end:
    return NULL;

}

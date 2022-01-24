#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "indirections_set_indirections_response.h"



indirections_set_indirections_response_t *indirections_set_indirections_response_create(
    list_t *failed_assignments
    ) {
    indirections_set_indirections_response_t *indirections_set_indirections_response_local_var = malloc(sizeof(indirections_set_indirections_response_t));
    if (!indirections_set_indirections_response_local_var) {
        return NULL;
    }
    indirections_set_indirections_response_local_var->failed_assignments = failed_assignments;

    return indirections_set_indirections_response_local_var;
}


void indirections_set_indirections_response_free(indirections_set_indirections_response_t *indirections_set_indirections_response) {
    if(NULL == indirections_set_indirections_response){
        return ;
    }
    listEntry_t *listEntry;
    if (indirections_set_indirections_response->failed_assignments) {
        list_ForEach(listEntry, indirections_set_indirections_response->failed_assignments) {
            set_indirections_response_failed_assignment_free(listEntry->data);
        }
        list_free(indirections_set_indirections_response->failed_assignments);
        indirections_set_indirections_response->failed_assignments = NULL;
    }
    free(indirections_set_indirections_response);
}

cJSON *indirections_set_indirections_response_convertToJSON(indirections_set_indirections_response_t *indirections_set_indirections_response) {
    cJSON *item = cJSON_CreateObject();

    // indirections_set_indirections_response->failed_assignments
    if(indirections_set_indirections_response->failed_assignments) { 
    cJSON *failed_assignments = cJSON_AddArrayToObject(item, "failedAssignments");
    if(failed_assignments == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *failed_assignmentsListEntry;
    if (indirections_set_indirections_response->failed_assignments) {
    list_ForEach(failed_assignmentsListEntry, indirections_set_indirections_response->failed_assignments) {
    cJSON *itemLocal = set_indirections_response_failed_assignment_convertToJSON(failed_assignmentsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(failed_assignments, itemLocal);
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

indirections_set_indirections_response_t *indirections_set_indirections_response_parseFromJSON(cJSON *indirections_set_indirections_responseJSON){

    indirections_set_indirections_response_t *indirections_set_indirections_response_local_var = NULL;

    // indirections_set_indirections_response->failed_assignments
    cJSON *failed_assignments = cJSON_GetObjectItemCaseSensitive(indirections_set_indirections_responseJSON, "failedAssignments");
    list_t *failed_assignmentsList;
    if (failed_assignments) { 
    cJSON *failed_assignments_local_nonprimitive;
    if(!cJSON_IsArray(failed_assignments)){
        goto end; //nonprimitive container
    }

    failed_assignmentsList = list_create();

    cJSON_ArrayForEach(failed_assignments_local_nonprimitive,failed_assignments )
    {
        if(!cJSON_IsObject(failed_assignments_local_nonprimitive)){
            goto end;
        }
        set_indirections_response_failed_assignment_t *failed_assignmentsItem = set_indirections_response_failed_assignment_parseFromJSON(failed_assignments_local_nonprimitive);

        list_addElement(failed_assignmentsList, failed_assignmentsItem);
    }
    }


    indirections_set_indirections_response_local_var = indirections_set_indirections_response_create (
        failed_assignments ? failed_assignmentsList : NULL
        );

    return indirections_set_indirections_response_local_var;
end:
    return NULL;

}

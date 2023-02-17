#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "sequencing_change_indirections_request.h"



sequencing_change_indirections_request_t *sequencing_change_indirections_request_create(
    list_t *changes
    ) {
    sequencing_change_indirections_request_t *sequencing_change_indirections_request_local_var = malloc(sizeof(sequencing_change_indirections_request_t));
    if (!sequencing_change_indirections_request_local_var) {
        return NULL;
    }
    sequencing_change_indirections_request_local_var->changes = changes;

    return sequencing_change_indirections_request_local_var;
}


void sequencing_change_indirections_request_free(sequencing_change_indirections_request_t *sequencing_change_indirections_request) {
    if(NULL == sequencing_change_indirections_request){
        return ;
    }
    listEntry_t *listEntry;
    if (sequencing_change_indirections_request->changes) {
        list_ForEach(listEntry, sequencing_change_indirections_request->changes) {
            sequencing_indirection_change_assignment_free(listEntry->data);
        }
        list_free(sequencing_change_indirections_request->changes);
        sequencing_change_indirections_request->changes = NULL;
    }
    free(sequencing_change_indirections_request);
}

cJSON *sequencing_change_indirections_request_convertToJSON(sequencing_change_indirections_request_t *sequencing_change_indirections_request) {
    cJSON *item = cJSON_CreateObject();

    // sequencing_change_indirections_request->changes
    if(sequencing_change_indirections_request->changes) { 
    cJSON *changes = cJSON_AddArrayToObject(item, "changes");
    if(changes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *changesListEntry;
    if (sequencing_change_indirections_request->changes) {
    list_ForEach(changesListEntry, sequencing_change_indirections_request->changes) {
    cJSON *itemLocal = sequencing_indirection_change_assignment_convertToJSON(changesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(changes, itemLocal);
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

sequencing_change_indirections_request_t *sequencing_change_indirections_request_parseFromJSON(cJSON *sequencing_change_indirections_requestJSON){

    sequencing_change_indirections_request_t *sequencing_change_indirections_request_local_var = NULL;

    // sequencing_change_indirections_request->changes
    cJSON *changes = cJSON_GetObjectItemCaseSensitive(sequencing_change_indirections_requestJSON, "changes");
    list_t *changesList;
    if (changes) { 
    cJSON *changes_local_nonprimitive;
    if(!cJSON_IsArray(changes)){
        goto end; //nonprimitive container
    }

    changesList = list_create();

    cJSON_ArrayForEach(changes_local_nonprimitive,changes )
    {
        if(!cJSON_IsObject(changes_local_nonprimitive)){
            goto end;
        }
        sequencing_indirection_change_assignment_t *changesItem = sequencing_indirection_change_assignment_parseFromJSON(changes_local_nonprimitive);

        list_addElement(changesList, changesItem);
    }
    }


    sequencing_change_indirections_request_local_var = sequencing_change_indirections_request_create (
        changes ? changesList : NULL
        );

    return sequencing_change_indirections_request_local_var;
end:
    return NULL;

}

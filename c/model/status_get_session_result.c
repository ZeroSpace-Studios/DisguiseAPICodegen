#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_get_session_result.h"



status_get_session_result_t *status_get_session_result_create(
    int is_running_solo,
    int is_director_dedicated,
    status_machine_info_t *director,
    list_t *actors,
    list_t *understudies
    ) {
    status_get_session_result_t *status_get_session_result_local_var = malloc(sizeof(status_get_session_result_t));
    if (!status_get_session_result_local_var) {
        return NULL;
    }
    status_get_session_result_local_var->is_running_solo = is_running_solo;
    status_get_session_result_local_var->is_director_dedicated = is_director_dedicated;
    status_get_session_result_local_var->director = director;
    status_get_session_result_local_var->actors = actors;
    status_get_session_result_local_var->understudies = understudies;

    return status_get_session_result_local_var;
}


void status_get_session_result_free(status_get_session_result_t *status_get_session_result) {
    if(NULL == status_get_session_result){
        return ;
    }
    listEntry_t *listEntry;
    if (status_get_session_result->director) {
        status_machine_info_free(status_get_session_result->director);
        status_get_session_result->director = NULL;
    }
    if (status_get_session_result->actors) {
        list_ForEach(listEntry, status_get_session_result->actors) {
            status_machine_info_free(listEntry->data);
        }
        list_free(status_get_session_result->actors);
        status_get_session_result->actors = NULL;
    }
    if (status_get_session_result->understudies) {
        list_ForEach(listEntry, status_get_session_result->understudies) {
            status_machine_info_free(listEntry->data);
        }
        list_free(status_get_session_result->understudies);
        status_get_session_result->understudies = NULL;
    }
    free(status_get_session_result);
}

cJSON *status_get_session_result_convertToJSON(status_get_session_result_t *status_get_session_result) {
    cJSON *item = cJSON_CreateObject();

    // status_get_session_result->is_running_solo
    if(status_get_session_result->is_running_solo) { 
    if(cJSON_AddBoolToObject(item, "isRunningSolo", status_get_session_result->is_running_solo) == NULL) {
    goto fail; //Bool
    }
     } 


    // status_get_session_result->is_director_dedicated
    if(status_get_session_result->is_director_dedicated) { 
    if(cJSON_AddBoolToObject(item, "isDirectorDedicated", status_get_session_result->is_director_dedicated) == NULL) {
    goto fail; //Bool
    }
     } 


    // status_get_session_result->director
    if(status_get_session_result->director) { 
    cJSON *director_local_JSON = status_machine_info_convertToJSON(status_get_session_result->director);
    if(director_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "director", director_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // status_get_session_result->actors
    if(status_get_session_result->actors) { 
    cJSON *actors = cJSON_AddArrayToObject(item, "actors");
    if(actors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *actorsListEntry;
    if (status_get_session_result->actors) {
    list_ForEach(actorsListEntry, status_get_session_result->actors) {
    cJSON *itemLocal = status_machine_info_convertToJSON(actorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(actors, itemLocal);
    }
    }
     } 


    // status_get_session_result->understudies
    if(status_get_session_result->understudies) { 
    cJSON *understudies = cJSON_AddArrayToObject(item, "understudies");
    if(understudies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *understudiesListEntry;
    if (status_get_session_result->understudies) {
    list_ForEach(understudiesListEntry, status_get_session_result->understudies) {
    cJSON *itemLocal = status_machine_info_convertToJSON(understudiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(understudies, itemLocal);
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

status_get_session_result_t *status_get_session_result_parseFromJSON(cJSON *status_get_session_resultJSON){

    status_get_session_result_t *status_get_session_result_local_var = NULL;

    // status_get_session_result->is_running_solo
    cJSON *is_running_solo = cJSON_GetObjectItemCaseSensitive(status_get_session_resultJSON, "isRunningSolo");
    if (is_running_solo) { 
    if(!cJSON_IsBool(is_running_solo))
    {
    goto end; //Bool
    }
    }

    // status_get_session_result->is_director_dedicated
    cJSON *is_director_dedicated = cJSON_GetObjectItemCaseSensitive(status_get_session_resultJSON, "isDirectorDedicated");
    if (is_director_dedicated) { 
    if(!cJSON_IsBool(is_director_dedicated))
    {
    goto end; //Bool
    }
    }

    // status_get_session_result->director
    cJSON *director = cJSON_GetObjectItemCaseSensitive(status_get_session_resultJSON, "director");
    status_machine_info_t *director_local_nonprim = NULL;
    if (director) { 
    director_local_nonprim = status_machine_info_parseFromJSON(director); //nonprimitive
    }

    // status_get_session_result->actors
    cJSON *actors = cJSON_GetObjectItemCaseSensitive(status_get_session_resultJSON, "actors");
    list_t *actorsList;
    if (actors) { 
    cJSON *actors_local_nonprimitive;
    if(!cJSON_IsArray(actors)){
        goto end; //nonprimitive container
    }

    actorsList = list_create();

    cJSON_ArrayForEach(actors_local_nonprimitive,actors )
    {
        if(!cJSON_IsObject(actors_local_nonprimitive)){
            goto end;
        }
        status_machine_info_t *actorsItem = status_machine_info_parseFromJSON(actors_local_nonprimitive);

        list_addElement(actorsList, actorsItem);
    }
    }

    // status_get_session_result->understudies
    cJSON *understudies = cJSON_GetObjectItemCaseSensitive(status_get_session_resultJSON, "understudies");
    list_t *understudiesList;
    if (understudies) { 
    cJSON *understudies_local_nonprimitive;
    if(!cJSON_IsArray(understudies)){
        goto end; //nonprimitive container
    }

    understudiesList = list_create();

    cJSON_ArrayForEach(understudies_local_nonprimitive,understudies )
    {
        if(!cJSON_IsObject(understudies_local_nonprimitive)){
            goto end;
        }
        status_machine_info_t *understudiesItem = status_machine_info_parseFromJSON(understudies_local_nonprimitive);

        list_addElement(understudiesList, understudiesItem);
    }
    }


    status_get_session_result_local_var = status_get_session_result_create (
        is_running_solo ? is_running_solo->valueint : 0,
        is_director_dedicated ? is_director_dedicated->valueint : 0,
        director ? director_local_nonprim : NULL,
        actors ? actorsList : NULL,
        understudies ? understudiesList : NULL
        );

    return status_get_session_result_local_var;
end:
    if (director_local_nonprim) {
        status_machine_info_free(director_local_nonprim);
        director_local_nonprim = NULL;
    }
    return NULL;

}

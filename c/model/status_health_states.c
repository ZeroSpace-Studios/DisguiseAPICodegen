#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_health_states.h"



status_health_states_t *status_health_states_create(
    char *name,
    char *detail,
    char *category,
    char *severity
    ) {
    status_health_states_t *status_health_states_local_var = malloc(sizeof(status_health_states_t));
    if (!status_health_states_local_var) {
        return NULL;
    }
    status_health_states_local_var->name = name;
    status_health_states_local_var->detail = detail;
    status_health_states_local_var->category = category;
    status_health_states_local_var->severity = severity;

    return status_health_states_local_var;
}


void status_health_states_free(status_health_states_t *status_health_states) {
    if(NULL == status_health_states){
        return ;
    }
    listEntry_t *listEntry;
    if (status_health_states->name) {
        free(status_health_states->name);
        status_health_states->name = NULL;
    }
    if (status_health_states->detail) {
        free(status_health_states->detail);
        status_health_states->detail = NULL;
    }
    if (status_health_states->category) {
        free(status_health_states->category);
        status_health_states->category = NULL;
    }
    if (status_health_states->severity) {
        free(status_health_states->severity);
        status_health_states->severity = NULL;
    }
    free(status_health_states);
}

cJSON *status_health_states_convertToJSON(status_health_states_t *status_health_states) {
    cJSON *item = cJSON_CreateObject();

    // status_health_states->name
    if(status_health_states->name) { 
    if(cJSON_AddStringToObject(item, "name", status_health_states->name) == NULL) {
    goto fail; //String
    }
     } 


    // status_health_states->detail
    if(status_health_states->detail) { 
    if(cJSON_AddStringToObject(item, "detail", status_health_states->detail) == NULL) {
    goto fail; //String
    }
     } 


    // status_health_states->category
    if(status_health_states->category) { 
    if(cJSON_AddStringToObject(item, "category", status_health_states->category) == NULL) {
    goto fail; //String
    }
     } 


    // status_health_states->severity
    if(status_health_states->severity) { 
    if(cJSON_AddStringToObject(item, "severity", status_health_states->severity) == NULL) {
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

status_health_states_t *status_health_states_parseFromJSON(cJSON *status_health_statesJSON){

    status_health_states_t *status_health_states_local_var = NULL;

    // status_health_states->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(status_health_statesJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // status_health_states->detail
    cJSON *detail = cJSON_GetObjectItemCaseSensitive(status_health_statesJSON, "detail");
    if (detail) { 
    if(!cJSON_IsString(detail))
    {
    goto end; //String
    }
    }

    // status_health_states->category
    cJSON *category = cJSON_GetObjectItemCaseSensitive(status_health_statesJSON, "category");
    if (category) { 
    if(!cJSON_IsString(category))
    {
    goto end; //String
    }
    }

    // status_health_states->severity
    cJSON *severity = cJSON_GetObjectItemCaseSensitive(status_health_statesJSON, "severity");
    if (severity) { 
    if(!cJSON_IsString(severity))
    {
    goto end; //String
    }
    }


    status_health_states_local_var = status_health_states_create (
        name ? strdup(name->valuestring) : NULL,
        detail ? strdup(detail->valuestring) : NULL,
        category ? strdup(category->valuestring) : NULL,
        severity ? strdup(severity->valuestring) : NULL
        );

    return status_health_states_local_var;
end:
    return NULL;

}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_section_info.h"



transport_section_info_t *transport_section_info_create(
    double time,
    char *index
    ) {
    transport_section_info_t *transport_section_info_local_var = malloc(sizeof(transport_section_info_t));
    if (!transport_section_info_local_var) {
        return NULL;
    }
    transport_section_info_local_var->time = time;
    transport_section_info_local_var->index = index;

    return transport_section_info_local_var;
}


void transport_section_info_free(transport_section_info_t *transport_section_info) {
    if(NULL == transport_section_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_section_info->index) {
        free(transport_section_info->index);
        transport_section_info->index = NULL;
    }
    free(transport_section_info);
}

cJSON *transport_section_info_convertToJSON(transport_section_info_t *transport_section_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_section_info->time
    if(transport_section_info->time) { 
    if(cJSON_AddNumberToObject(item, "time", transport_section_info->time) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_section_info->index
    if(transport_section_info->index) { 
    if(cJSON_AddStringToObject(item, "index", transport_section_info->index) == NULL) {
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

transport_section_info_t *transport_section_info_parseFromJSON(cJSON *transport_section_infoJSON){

    transport_section_info_t *transport_section_info_local_var = NULL;

    // transport_section_info->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(transport_section_infoJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }

    // transport_section_info->index
    cJSON *index = cJSON_GetObjectItemCaseSensitive(transport_section_infoJSON, "index");
    if (index) { 
    if(!cJSON_IsString(index))
    {
    goto end; //String
    }
    }


    transport_section_info_local_var = transport_section_info_create (
        time ? time->valuedouble : 0,
        index ? strdup(index->valuestring) : NULL
        );

    return transport_section_info_local_var;
end:
    return NULL;

}

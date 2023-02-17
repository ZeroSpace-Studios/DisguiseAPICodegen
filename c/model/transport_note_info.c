#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_note_info.h"



transport_note_info_t *transport_note_info_create(
    double time,
    char *text
    ) {
    transport_note_info_t *transport_note_info_local_var = malloc(sizeof(transport_note_info_t));
    if (!transport_note_info_local_var) {
        return NULL;
    }
    transport_note_info_local_var->time = time;
    transport_note_info_local_var->text = text;

    return transport_note_info_local_var;
}


void transport_note_info_free(transport_note_info_t *transport_note_info) {
    if(NULL == transport_note_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_note_info->text) {
        free(transport_note_info->text);
        transport_note_info->text = NULL;
    }
    free(transport_note_info);
}

cJSON *transport_note_info_convertToJSON(transport_note_info_t *transport_note_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_note_info->time
    if(transport_note_info->time) { 
    if(cJSON_AddNumberToObject(item, "time", transport_note_info->time) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_note_info->text
    if(transport_note_info->text) { 
    if(cJSON_AddStringToObject(item, "text", transport_note_info->text) == NULL) {
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

transport_note_info_t *transport_note_info_parseFromJSON(cJSON *transport_note_infoJSON){

    transport_note_info_t *transport_note_info_local_var = NULL;

    // transport_note_info->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(transport_note_infoJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }

    // transport_note_info->text
    cJSON *text = cJSON_GetObjectItemCaseSensitive(transport_note_infoJSON, "text");
    if (text) { 
    if(!cJSON_IsString(text))
    {
    goto end; //String
    }
    }


    transport_note_info_local_var = transport_note_info_create (
        time ? time->valuedouble : 0,
        text ? strdup(text->valuestring) : NULL
        );

    return transport_note_info_local_var;
end:
    return NULL;

}

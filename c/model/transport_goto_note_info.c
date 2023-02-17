#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_goto_note_info.h"


char* playmodetransport_goto_note_info_ToString(d3_api_transport_goto_note_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_goto_note_info__e playmodetransport_goto_note_info_FromString(char* playmode){
    int stringToReturn = 0;
    char *playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
    size_t sizeofArray = sizeof(playmodeArray) / sizeof(playmodeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(playmode, playmodeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

transport_goto_note_info_t *transport_goto_note_info_create(
    d3api_locator_t *transport,
    char *note,
    ) {
    transport_goto_note_info_t *transport_goto_note_info_local_var = malloc(sizeof(transport_goto_note_info_t));
    if (!transport_goto_note_info_local_var) {
        return NULL;
    }
    transport_goto_note_info_local_var->transport = transport;
    transport_goto_note_info_local_var->note = note;
    transport_goto_note_info_local_var->playmode = playmode;

    return transport_goto_note_info_local_var;
}


void transport_goto_note_info_free(transport_goto_note_info_t *transport_goto_note_info) {
    if(NULL == transport_goto_note_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_goto_note_info->transport) {
        d3api_locator_free(transport_goto_note_info->transport);
        transport_goto_note_info->transport = NULL;
    }
    if (transport_goto_note_info->note) {
        free(transport_goto_note_info->note);
        transport_goto_note_info->note = NULL;
    }
    free(transport_goto_note_info);
}

cJSON *transport_goto_note_info_convertToJSON(transport_goto_note_info_t *transport_goto_note_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_goto_note_info->transport
    if(transport_goto_note_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_goto_note_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_goto_note_info->note
    if(transport_goto_note_info->note) { 
    if(cJSON_AddStringToObject(item, "note", transport_goto_note_info->note) == NULL) {
    goto fail; //String
    }
     } 


    // transport_goto_note_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_goto_note_info_t *transport_goto_note_info_parseFromJSON(cJSON *transport_goto_note_infoJSON){

    transport_goto_note_info_t *transport_goto_note_info_local_var = NULL;

    // transport_goto_note_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_goto_note_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_goto_note_info->note
    cJSON *note = cJSON_GetObjectItemCaseSensitive(transport_goto_note_infoJSON, "note");
    if (note) { 
    if(!cJSON_IsString(note))
    {
    goto end; //String
    }
    }

    // transport_goto_note_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_goto_note_infoJSON, "playmode");
    }


    transport_goto_note_info_local_var = transport_goto_note_info_create (
        transport ? transport_local_nonprim : NULL,
        note ? strdup(note->valuestring) : NULL,
        );

    return transport_goto_note_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

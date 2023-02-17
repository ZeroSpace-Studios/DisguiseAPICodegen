#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_go_to_section_info.h"


char* playmodetransport_go_to_section_info_ToString(d3_api_transport_go_to_section_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_go_to_section_info__e playmodetransport_go_to_section_info_FromString(char* playmode){
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

transport_go_to_section_info_t *transport_go_to_section_info_create(
    d3api_locator_t *transport,
    char *section,
    ) {
    transport_go_to_section_info_t *transport_go_to_section_info_local_var = malloc(sizeof(transport_go_to_section_info_t));
    if (!transport_go_to_section_info_local_var) {
        return NULL;
    }
    transport_go_to_section_info_local_var->transport = transport;
    transport_go_to_section_info_local_var->section = section;
    transport_go_to_section_info_local_var->playmode = playmode;

    return transport_go_to_section_info_local_var;
}


void transport_go_to_section_info_free(transport_go_to_section_info_t *transport_go_to_section_info) {
    if(NULL == transport_go_to_section_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_go_to_section_info->transport) {
        d3api_locator_free(transport_go_to_section_info->transport);
        transport_go_to_section_info->transport = NULL;
    }
    if (transport_go_to_section_info->section) {
        free(transport_go_to_section_info->section);
        transport_go_to_section_info->section = NULL;
    }
    free(transport_go_to_section_info);
}

cJSON *transport_go_to_section_info_convertToJSON(transport_go_to_section_info_t *transport_go_to_section_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_go_to_section_info->transport
    if(transport_go_to_section_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_go_to_section_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_go_to_section_info->section
    if(transport_go_to_section_info->section) { 
    if(cJSON_AddStringToObject(item, "section", transport_go_to_section_info->section) == NULL) {
    goto fail; //String
    }
     } 


    // transport_go_to_section_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_go_to_section_info_t *transport_go_to_section_info_parseFromJSON(cJSON *transport_go_to_section_infoJSON){

    transport_go_to_section_info_t *transport_go_to_section_info_local_var = NULL;

    // transport_go_to_section_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_go_to_section_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_go_to_section_info->section
    cJSON *section = cJSON_GetObjectItemCaseSensitive(transport_go_to_section_infoJSON, "section");
    if (section) { 
    if(!cJSON_IsString(section))
    {
    goto end; //String
    }
    }

    // transport_go_to_section_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_go_to_section_infoJSON, "playmode");
    }


    transport_go_to_section_info_local_var = transport_go_to_section_info_create (
        transport ? transport_local_nonprim : NULL,
        section ? strdup(section->valuestring) : NULL,
        );

    return transport_go_to_section_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

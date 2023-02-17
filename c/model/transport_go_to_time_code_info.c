#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_go_to_time_code_info.h"


char* playmodetransport_go_to_time_code_info_ToString(d3_api_transport_go_to_time_code_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_go_to_time_code_info__e playmodetransport_go_to_time_code_info_FromString(char* playmode){
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

transport_go_to_time_code_info_t *transport_go_to_time_code_info_create(
    d3api_locator_t *transport,
    char *timecode,
    int ignore_tags,
    ) {
    transport_go_to_time_code_info_t *transport_go_to_time_code_info_local_var = malloc(sizeof(transport_go_to_time_code_info_t));
    if (!transport_go_to_time_code_info_local_var) {
        return NULL;
    }
    transport_go_to_time_code_info_local_var->transport = transport;
    transport_go_to_time_code_info_local_var->timecode = timecode;
    transport_go_to_time_code_info_local_var->ignore_tags = ignore_tags;
    transport_go_to_time_code_info_local_var->playmode = playmode;

    return transport_go_to_time_code_info_local_var;
}


void transport_go_to_time_code_info_free(transport_go_to_time_code_info_t *transport_go_to_time_code_info) {
    if(NULL == transport_go_to_time_code_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_go_to_time_code_info->transport) {
        d3api_locator_free(transport_go_to_time_code_info->transport);
        transport_go_to_time_code_info->transport = NULL;
    }
    if (transport_go_to_time_code_info->timecode) {
        free(transport_go_to_time_code_info->timecode);
        transport_go_to_time_code_info->timecode = NULL;
    }
    free(transport_go_to_time_code_info);
}

cJSON *transport_go_to_time_code_info_convertToJSON(transport_go_to_time_code_info_t *transport_go_to_time_code_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_go_to_time_code_info->transport
    if(transport_go_to_time_code_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_go_to_time_code_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_go_to_time_code_info->timecode
    if(transport_go_to_time_code_info->timecode) { 
    if(cJSON_AddStringToObject(item, "timecode", transport_go_to_time_code_info->timecode) == NULL) {
    goto fail; //String
    }
     } 


    // transport_go_to_time_code_info->ignore_tags
    if(transport_go_to_time_code_info->ignore_tags) { 
    if(cJSON_AddBoolToObject(item, "ignoreTags", transport_go_to_time_code_info->ignore_tags) == NULL) {
    goto fail; //Bool
    }
     } 


    // transport_go_to_time_code_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_go_to_time_code_info_t *transport_go_to_time_code_info_parseFromJSON(cJSON *transport_go_to_time_code_infoJSON){

    transport_go_to_time_code_info_t *transport_go_to_time_code_info_local_var = NULL;

    // transport_go_to_time_code_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_go_to_time_code_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_go_to_time_code_info->timecode
    cJSON *timecode = cJSON_GetObjectItemCaseSensitive(transport_go_to_time_code_infoJSON, "timecode");
    if (timecode) { 
    if(!cJSON_IsString(timecode))
    {
    goto end; //String
    }
    }

    // transport_go_to_time_code_info->ignore_tags
    cJSON *ignore_tags = cJSON_GetObjectItemCaseSensitive(transport_go_to_time_code_infoJSON, "ignoreTags");
    if (ignore_tags) { 
    if(!cJSON_IsBool(ignore_tags))
    {
    goto end; //Bool
    }
    }

    // transport_go_to_time_code_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_go_to_time_code_infoJSON, "playmode");
    }


    transport_go_to_time_code_info_local_var = transport_go_to_time_code_info_create (
        transport ? transport_local_nonprim : NULL,
        timecode ? strdup(timecode->valuestring) : NULL,
        ignore_tags ? ignore_tags->valueint : 0,
        );

    return transport_go_to_time_code_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

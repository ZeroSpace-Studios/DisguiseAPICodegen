#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_go_to_track_info.h"


char* playmodetransport_go_to_track_info_ToString(d3_api_transport_go_to_track_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_go_to_track_info__e playmodetransport_go_to_track_info_FromString(char* playmode){
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

transport_go_to_track_info_t *transport_go_to_track_info_create(
    d3api_locator_t *transport,
    d3api_locator_t *track,
    ) {
    transport_go_to_track_info_t *transport_go_to_track_info_local_var = malloc(sizeof(transport_go_to_track_info_t));
    if (!transport_go_to_track_info_local_var) {
        return NULL;
    }
    transport_go_to_track_info_local_var->transport = transport;
    transport_go_to_track_info_local_var->track = track;
    transport_go_to_track_info_local_var->playmode = playmode;

    return transport_go_to_track_info_local_var;
}


void transport_go_to_track_info_free(transport_go_to_track_info_t *transport_go_to_track_info) {
    if(NULL == transport_go_to_track_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_go_to_track_info->transport) {
        d3api_locator_free(transport_go_to_track_info->transport);
        transport_go_to_track_info->transport = NULL;
    }
    if (transport_go_to_track_info->track) {
        d3api_locator_free(transport_go_to_track_info->track);
        transport_go_to_track_info->track = NULL;
    }
    free(transport_go_to_track_info);
}

cJSON *transport_go_to_track_info_convertToJSON(transport_go_to_track_info_t *transport_go_to_track_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_go_to_track_info->transport
    if(transport_go_to_track_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_go_to_track_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_go_to_track_info->track
    if(transport_go_to_track_info->track) { 
    cJSON *track_local_JSON = d3api_locator_convertToJSON(transport_go_to_track_info->track);
    if(track_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "track", track_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_go_to_track_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_go_to_track_info_t *transport_go_to_track_info_parseFromJSON(cJSON *transport_go_to_track_infoJSON){

    transport_go_to_track_info_t *transport_go_to_track_info_local_var = NULL;

    // transport_go_to_track_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_go_to_track_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_go_to_track_info->track
    cJSON *track = cJSON_GetObjectItemCaseSensitive(transport_go_to_track_infoJSON, "track");
    d3api_locator_t *track_local_nonprim = NULL;
    if (track) { 
    track_local_nonprim = d3api_locator_parseFromJSON(track); //nonprimitive
    }

    // transport_go_to_track_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_go_to_track_infoJSON, "playmode");
    }


    transport_go_to_track_info_local_var = transport_go_to_track_info_create (
        transport ? transport_local_nonprim : NULL,
        track ? track_local_nonprim : NULL,
        );

    return transport_go_to_track_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    if (track_local_nonprim) {
        d3api_locator_free(track_local_nonprim);
        track_local_nonprim = NULL;
    }
    return NULL;

}

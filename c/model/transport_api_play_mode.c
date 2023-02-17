#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_api_play_mode.h"


char* transport_api_play_mode_transport_api_play_mode_ToString(d3_api_transport_api_play_mode__e transport_api_play_mode) {
    char *transport_api_play_modeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
    return transport_api_play_modeArray[transport_api_play_mode];
}

d3_api_transport_api_play_mode__e transport_api_play_mode_transport_api_play_mode_FromString(char* transport_api_play_mode) {
    int stringToReturn = 0;
    char *transport_api_play_modeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
    size_t sizeofArray = sizeof(transport_api_play_modeArray) / sizeof(transport_api_play_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(transport_api_play_mode, transport_api_play_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *transport_api_play_mode_transport_api_play_mode_convertToJSON(d3_api_transport_api_play_mode__e transport_api_play_mode) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "transport_api_play_mode", transport_api_play_mode_transport_api_play_mode_ToString(transport_api_play_mode)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_transport_api_play_mode__e transport_api_play_mode_transport_api_play_mode_parseFromJSON(cJSON *transport_api_play_modeJSON) {
    d3_api_transport_api_play_mode__e *transport_api_play_mode = NULL;
    d3_api_transport_api_play_mode__e transport_api_play_modeVariable;
    cJSON *transport_api_play_modeVar = cJSON_GetObjectItemCaseSensitive(transport_api_play_modeJSON, "transport_api_play_mode");
    if(!cJSON_IsString(transport_api_play_modeVar) || (transport_api_play_modeVar->valuestring == NULL)){
        goto end;
    }
    transport_api_play_modeVariable = transport_api_play_mode_transport_api_play_mode_FromString(transport_api_play_modeVar->valuestring);
    return transport_api_play_modeVariable;
end:
    return 0;
}

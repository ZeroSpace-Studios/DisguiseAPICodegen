#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "track_info_crossfade_mode.h"


char* track_info_crossfade_mode_track_info_crossfade_mode_ToString(d3_api_track_info_crossfade_mode__e track_info_crossfade_mode) {
    char *track_info_crossfade_modeArray[] =  { "NULL", "Unknown", "Off", "Fade", "TrackSection" };
    return track_info_crossfade_modeArray[track_info_crossfade_mode];
}

d3_api_track_info_crossfade_mode__e track_info_crossfade_mode_track_info_crossfade_mode_FromString(char* track_info_crossfade_mode) {
    int stringToReturn = 0;
    char *track_info_crossfade_modeArray[] =  { "NULL", "Unknown", "Off", "Fade", "TrackSection" };
    size_t sizeofArray = sizeof(track_info_crossfade_modeArray) / sizeof(track_info_crossfade_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(track_info_crossfade_mode, track_info_crossfade_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *track_info_crossfade_mode_track_info_crossfade_mode_convertToJSON(d3_api_track_info_crossfade_mode__e track_info_crossfade_mode) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "track_info_crossfade_mode", track_info_crossfade_mode_track_info_crossfade_mode_ToString(track_info_crossfade_mode)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_track_info_crossfade_mode__e track_info_crossfade_mode_track_info_crossfade_mode_parseFromJSON(cJSON *track_info_crossfade_modeJSON) {
    d3_api_track_info_crossfade_mode__e *track_info_crossfade_mode = NULL;
    d3_api_track_info_crossfade_mode__e track_info_crossfade_modeVariable;
    cJSON *track_info_crossfade_modeVar = cJSON_GetObjectItemCaseSensitive(track_info_crossfade_modeJSON, "track_info_crossfade_mode");
    if(!cJSON_IsString(track_info_crossfade_modeVar) || (track_info_crossfade_modeVar->valuestring == NULL)){
        goto end;
    }
    track_info_crossfade_modeVariable = track_info_crossfade_mode_track_info_crossfade_mode_FromString(track_info_crossfade_modeVar->valuestring);
    return track_info_crossfade_modeVariable;
end:
    return 0;
}

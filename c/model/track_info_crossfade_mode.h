/*
 * track_info_crossfade_mode.h
 *
 * 
 */

#ifndef _track_info_crossfade_mode_H_
#define _track_info_crossfade_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct track_info_crossfade_mode_t track_info_crossfade_mode_t;


// Enum  for track_info_crossfade_mode

typedef enum { d3_api_track_info_crossfade_mode__NULL = 0, d3_api_track_info_crossfade_mode__Unknown, d3_api_track_info_crossfade_mode__Off, d3_api_track_info_crossfade_mode__Fade, d3_api_track_info_crossfade_mode__TrackSection } d3_api_track_info_crossfade_mode__e;

char* track_info_crossfade_mode_track_info_crossfade_mode_ToString(d3_api_track_info_crossfade_mode__e track_info_crossfade_mode);

d3_api_track_info_crossfade_mode__e track_info_crossfade_mode_track_info_crossfade_mode_FromString(char* track_info_crossfade_mode);

//cJSON *track_info_crossfade_mode_track_info_crossfade_mode_convertToJSON(d3_api_track_info_crossfade_mode__e track_info_crossfade_mode);

//d3_api_track_info_crossfade_mode__e track_info_crossfade_mode_track_info_crossfade_mode_parseFromJSON(cJSON *track_info_crossfade_modeJSON);

#endif /* _track_info_crossfade_mode_H_ */


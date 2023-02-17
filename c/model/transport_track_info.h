/*
 * transport_track_info.h
 *
 * 
 */

#ifndef _transport_track_info_H_
#define _transport_track_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_track_info_t transport_track_info_t;

#include "track_info_crossfade_mode.h"

// Enum  for transport_track_info

typedef enum  { d3_api_transport_track_info__NULL = 0, d3_api_transport_track_info__Unknown, d3_api_transport_track_info__Off, d3_api_transport_track_info__Fade, d3_api_transport_track_info__TrackSection } d3_api_transport_track_info__e;

char* transport_track_info_crossfade_ToString(d3_api_transport_track_info__e crossfade);

d3_api_transport_track_info__e transport_track_info_crossfade_FromString(char* crossfade);



typedef struct transport_track_info_t {
    char *uid; // string
    char *name; // string
    double length; //numeric

} transport_track_info_t;

transport_track_info_t *transport_track_info_create(
    char *uid,
    char *name,
    double length,
);

void transport_track_info_free(transport_track_info_t *transport_track_info);

transport_track_info_t *transport_track_info_parseFromJSON(cJSON *transport_track_infoJSON);

cJSON *transport_track_info_convertToJSON(transport_track_info_t *transport_track_info);

#endif /* _transport_track_info_H_ */


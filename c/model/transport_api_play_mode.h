/*
 * transport_api_play_mode.h
 *
 * 
 */

#ifndef _transport_api_play_mode_H_
#define _transport_api_play_mode_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_api_play_mode_t transport_api_play_mode_t;


// Enum  for transport_api_play_mode

typedef enum { d3_api_transport_api_play_mode__NULL = 0, d3_api_transport_api_play_mode__NotSet, d3_api_transport_api_play_mode__Play, d3_api_transport_api_play_mode__PlaySection, d3_api_transport_api_play_mode__Loop, d3_api_transport_api_play_mode__Stop, d3_api_transport_api_play_mode__Unknown } d3_api_transport_api_play_mode__e;

char* transport_api_play_mode_transport_api_play_mode_ToString(d3_api_transport_api_play_mode__e transport_api_play_mode);

d3_api_transport_api_play_mode__e transport_api_play_mode_transport_api_play_mode_FromString(char* transport_api_play_mode);

//cJSON *transport_api_play_mode_transport_api_play_mode_convertToJSON(d3_api_transport_api_play_mode__e transport_api_play_mode);

//d3_api_transport_api_play_mode__e transport_api_play_mode_transport_api_play_mode_parseFromJSON(cJSON *transport_api_play_modeJSON);

#endif /* _transport_api_play_mode_H_ */


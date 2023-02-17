/*
 * transport_transport_info.h
 *
 * 
 */

#ifndef _transport_transport_info_H_
#define _transport_transport_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_transport_info_t transport_transport_info_t;

#include "transport_api_play_mode.h"

// Enum  for transport_transport_info

typedef enum  { d3_api_transport_transport_info__NULL = 0, d3_api_transport_transport_info__NotSet, d3_api_transport_transport_info__Play, d3_api_transport_transport_info__PlaySection, d3_api_transport_transport_info__Loop, d3_api_transport_transport_info__Stop, d3_api_transport_transport_info__Unknown } d3_api_transport_transport_info__e;

char* transport_transport_info_playmode_ToString(d3_api_transport_transport_info__e playmode);

d3_api_transport_transport_info__e transport_transport_info_playmode_FromString(char* playmode);



typedef struct transport_transport_info_t {
    char *uid; // string
    char *name; // string
    int engaged; //boolean
    double volume; //numeric
    double brightness; //numeric

} transport_transport_info_t;

transport_transport_info_t *transport_transport_info_create(
    char *uid,
    char *name,
    int engaged,
    double volume,
    double brightness,
);

void transport_transport_info_free(transport_transport_info_t *transport_transport_info);

transport_transport_info_t *transport_transport_info_parseFromJSON(cJSON *transport_transport_infoJSON);

cJSON *transport_transport_info_convertToJSON(transport_transport_info_t *transport_transport_info);

#endif /* _transport_transport_info_H_ */


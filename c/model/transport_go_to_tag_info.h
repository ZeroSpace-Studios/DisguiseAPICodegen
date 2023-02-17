/*
 * transport_go_to_tag_info.h
 *
 * 
 */

#ifndef _transport_go_to_tag_info_H_
#define _transport_go_to_tag_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_go_to_tag_info_t transport_go_to_tag_info_t;

#include "d3api_locator.h"
#include "transport_api_play_mode.h"
#include "transport_tag_type.h"

// Enum  for transport_go_to_tag_info

typedef enum  { d3_api_transport_go_to_tag_info__NULL = 0, d3_api_transport_go_to_tag_info__TagType_Unknown, d3_api_transport_go_to_tag_info__TC, d3_api_transport_go_to_tag_info__MIDI, d3_api_transport_go_to_tag_info__CUE } d3_api_transport_go_to_tag_info__e;

char* transport_go_to_tag_info_type_ToString(d3_api_transport_go_to_tag_info__e type);

d3_api_transport_go_to_tag_info__e transport_go_to_tag_info_type_FromString(char* type);

// Enum  for transport_go_to_tag_info

typedef enum  { d3_api_transport_go_to_tag_info__NULL = 0, d3_api_transport_go_to_tag_info__NotSet, d3_api_transport_go_to_tag_info__Play, d3_api_transport_go_to_tag_info__PlaySection, d3_api_transport_go_to_tag_info__Loop, d3_api_transport_go_to_tag_info__Stop, d3_api_transport_go_to_tag_info__Unknown } d3_api_transport_go_to_tag_info__e;

char* transport_go_to_tag_info_playmode_ToString(d3_api_transport_go_to_tag_info__e playmode);

d3_api_transport_go_to_tag_info__e transport_go_to_tag_info_playmode_FromString(char* playmode);



typedef struct transport_go_to_tag_info_t {
    struct d3api_locator_t *transport; //model
    char *value; // string
    int allow_global_jump; //boolean

} transport_go_to_tag_info_t;

transport_go_to_tag_info_t *transport_go_to_tag_info_create(
    d3api_locator_t *transport,
    char *value,
    int allow_global_jump,
);

void transport_go_to_tag_info_free(transport_go_to_tag_info_t *transport_go_to_tag_info);

transport_go_to_tag_info_t *transport_go_to_tag_info_parseFromJSON(cJSON *transport_go_to_tag_infoJSON);

cJSON *transport_go_to_tag_info_convertToJSON(transport_go_to_tag_info_t *transport_go_to_tag_info);

#endif /* _transport_go_to_tag_info_H_ */


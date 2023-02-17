/*
 * transport_go_to_frame_info.h
 *
 * 
 */

#ifndef _transport_go_to_frame_info_H_
#define _transport_go_to_frame_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_go_to_frame_info_t transport_go_to_frame_info_t;

#include "d3api_locator.h"
#include "transport_api_play_mode.h"

// Enum  for transport_go_to_frame_info

typedef enum  { d3_api_transport_go_to_frame_info__NULL = 0, d3_api_transport_go_to_frame_info__NotSet, d3_api_transport_go_to_frame_info__Play, d3_api_transport_go_to_frame_info__PlaySection, d3_api_transport_go_to_frame_info__Loop, d3_api_transport_go_to_frame_info__Stop, d3_api_transport_go_to_frame_info__Unknown } d3_api_transport_go_to_frame_info__e;

char* transport_go_to_frame_info_playmode_ToString(d3_api_transport_go_to_frame_info__e playmode);

d3_api_transport_go_to_frame_info__e transport_go_to_frame_info_playmode_FromString(char* playmode);



typedef struct transport_go_to_frame_info_t {
    struct d3api_locator_t *transport; //model
    long frame; //numeric

} transport_go_to_frame_info_t;

transport_go_to_frame_info_t *transport_go_to_frame_info_create(
    d3api_locator_t *transport,
    long frame,
);

void transport_go_to_frame_info_free(transport_go_to_frame_info_t *transport_go_to_frame_info);

transport_go_to_frame_info_t *transport_go_to_frame_info_parseFromJSON(cJSON *transport_go_to_frame_infoJSON);

cJSON *transport_go_to_frame_info_convertToJSON(transport_go_to_frame_info_t *transport_go_to_frame_info);

#endif /* _transport_go_to_frame_info_H_ */


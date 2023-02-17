/*
 * transport_goto_note_info.h
 *
 * 
 */

#ifndef _transport_goto_note_info_H_
#define _transport_goto_note_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_goto_note_info_t transport_goto_note_info_t;

#include "d3api_locator.h"
#include "transport_api_play_mode.h"

// Enum  for transport_goto_note_info

typedef enum  { d3_api_transport_goto_note_info__NULL = 0, d3_api_transport_goto_note_info__NotSet, d3_api_transport_goto_note_info__Play, d3_api_transport_goto_note_info__PlaySection, d3_api_transport_goto_note_info__Loop, d3_api_transport_goto_note_info__Stop, d3_api_transport_goto_note_info__Unknown } d3_api_transport_goto_note_info__e;

char* transport_goto_note_info_playmode_ToString(d3_api_transport_goto_note_info__e playmode);

d3_api_transport_goto_note_info__e transport_goto_note_info_playmode_FromString(char* playmode);



typedef struct transport_goto_note_info_t {
    struct d3api_locator_t *transport; //model
    char *note; // string

} transport_goto_note_info_t;

transport_goto_note_info_t *transport_goto_note_info_create(
    d3api_locator_t *transport,
    char *note,
);

void transport_goto_note_info_free(transport_goto_note_info_t *transport_goto_note_info);

transport_goto_note_info_t *transport_goto_note_info_parseFromJSON(cJSON *transport_goto_note_infoJSON);

cJSON *transport_goto_note_info_convertToJSON(transport_goto_note_info_t *transport_goto_note_info);

#endif /* _transport_goto_note_info_H_ */


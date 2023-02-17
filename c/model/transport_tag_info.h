/*
 * transport_tag_info.h
 *
 * 
 */

#ifndef _transport_tag_info_H_
#define _transport_tag_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_tag_info_t transport_tag_info_t;

#include "transport_tag_type.h"

// Enum  for transport_tag_info

typedef enum  { d3_api_transport_tag_info__NULL = 0, d3_api_transport_tag_info__TagType_Unknown, d3_api_transport_tag_info__TC, d3_api_transport_tag_info__MIDI, d3_api_transport_tag_info__CUE } d3_api_transport_tag_info__e;

char* transport_tag_info_type_ToString(d3_api_transport_tag_info__e type);

d3_api_transport_tag_info__e transport_tag_info_type_FromString(char* type);



typedef struct transport_tag_info_t {
    double time; //numeric
    char *value; // string

} transport_tag_info_t;

transport_tag_info_t *transport_tag_info_create(
    double time,
    char *value
);

void transport_tag_info_free(transport_tag_info_t *transport_tag_info);

transport_tag_info_t *transport_tag_info_parseFromJSON(cJSON *transport_tag_infoJSON);

cJSON *transport_tag_info_convertToJSON(transport_tag_info_t *transport_tag_info);

#endif /* _transport_tag_info_H_ */


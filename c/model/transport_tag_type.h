/*
 * transport_tag_type.h
 *
 * 
 */

#ifndef _transport_tag_type_H_
#define _transport_tag_type_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_tag_type_t transport_tag_type_t;


// Enum  for transport_tag_type

typedef enum { d3_api_transport_tag_type__NULL = 0, d3_api_transport_tag_type__TagType_Unknown, d3_api_transport_tag_type__TC, d3_api_transport_tag_type__MIDI, d3_api_transport_tag_type__CUE } d3_api_transport_tag_type__e;

char* transport_tag_type_transport_tag_type_ToString(d3_api_transport_tag_type__e transport_tag_type);

d3_api_transport_tag_type__e transport_tag_type_transport_tag_type_FromString(char* transport_tag_type);

//cJSON *transport_tag_type_transport_tag_type_convertToJSON(d3_api_transport_tag_type__e transport_tag_type);

//d3_api_transport_tag_type__e transport_tag_type_transport_tag_type_parseFromJSON(cJSON *transport_tag_typeJSON);

#endif /* _transport_tag_type_H_ */


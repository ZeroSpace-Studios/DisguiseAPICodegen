/*
 * stream_info_stream_status.h
 *
 * 
 */

#ifndef _stream_info_stream_status_H_
#define _stream_info_stream_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct stream_info_stream_status_t stream_info_stream_status_t;


// Enum  for stream_info_stream_status

typedef enum { d3_api_stream_info_stream_status__NULL = 0, d3_api_stream_info_stream_status__None, d3_api_stream_info_stream_status__Good, d3_api_stream_info_stream_status__DroppingFrames, d3_api_stream_info_stream_status__BadStream, d3_api_stream_info_stream_status__NoStream, d3_api_stream_info_stream_status__Offline } d3_api_stream_info_stream_status__e;

char* stream_info_stream_status_stream_info_stream_status_ToString(d3_api_stream_info_stream_status__e stream_info_stream_status);

d3_api_stream_info_stream_status__e stream_info_stream_status_stream_info_stream_status_FromString(char* stream_info_stream_status);

//cJSON *stream_info_stream_status_stream_info_stream_status_convertToJSON(d3_api_stream_info_stream_status__e stream_info_stream_status);

//d3_api_stream_info_stream_status__e stream_info_stream_status_stream_info_stream_status_parseFromJSON(cJSON *stream_info_stream_statusJSON);

#endif /* _stream_info_stream_status_H_ */


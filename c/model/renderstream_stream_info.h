/*
 * renderstream_stream_info.h
 *
 * 
 */

#ifndef _renderstream_stream_info_H_
#define _renderstream_stream_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_stream_info_t renderstream_stream_info_t;

#include "renderstream_clipping_region.h"
#include "stream_info_stream_status.h"

// Enum  for renderstream_stream_info

typedef enum  { d3_api_renderstream_stream_info__NULL = 0, d3_api_renderstream_stream_info__None, d3_api_renderstream_stream_info__Good, d3_api_renderstream_stream_info__DroppingFrames, d3_api_renderstream_stream_info__BadStream, d3_api_renderstream_stream_info__NoStream, d3_api_renderstream_stream_info__Offline } d3_api_renderstream_stream_info__e;

char* renderstream_stream_info_status_ToString(d3_api_renderstream_stream_info__e status);

d3_api_renderstream_stream_info__e renderstream_stream_info_status_FromString(char* status);



typedef struct renderstream_stream_info_t {
    char *name; // string
    char *workload_id; // string
    char *machine_name; // string
    int receiving_locally; //boolean
    struct renderstream_clipping_region_t *clipping; //model

} renderstream_stream_info_t;

renderstream_stream_info_t *renderstream_stream_info_create(
    char *name,
    char *workload_id,
    char *machine_name,
    int receiving_locally,
    renderstream_clipping_region_t *clipping
);

void renderstream_stream_info_free(renderstream_stream_info_t *renderstream_stream_info);

renderstream_stream_info_t *renderstream_stream_info_parseFromJSON(cJSON *renderstream_stream_infoJSON);

cJSON *renderstream_stream_info_convertToJSON(renderstream_stream_info_t *renderstream_stream_info);

#endif /* _renderstream_stream_info_H_ */


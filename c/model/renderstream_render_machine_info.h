/*
 * renderstream_render_machine_info.h
 *
 * 
 */

#ifndef _renderstream_render_machine_info_H_
#define _renderstream_render_machine_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_render_machine_info_t renderstream_render_machine_info_t;

#include "render_machine_info_status.h"
#include "renderstream_adapter_info.h"
#include "renderstream_asset_info.h"
#include "renderstream_stream_info.h"

// Enum  for renderstream_render_machine_info

typedef enum  { d3_api_renderstream_render_machine_info__NULL = 0, d3_api_renderstream_render_machine_info__UNKNOWN, d3_api_renderstream_render_machine_info__OFFLINE, d3_api_renderstream_render_machine_info__OK, d3_api_renderstream_render_machine_info__STANDBY, d3_api_renderstream_render_machine_info__FAILED } d3_api_renderstream_render_machine_info__e;

char* renderstream_render_machine_info_status_ToString(d3_api_renderstream_render_machine_info__e status);

d3_api_renderstream_render_machine_info__e renderstream_render_machine_info_status_FromString(char* status);



typedef struct renderstream_render_machine_info_t {
    char *name; // string
    char *status_string; // string
    int online; //boolean
    float load_factor; //numeric
    char *preferred_adapter; // string
    list_t *network_adapters; //nonprimitive container
    list_t *streams; //nonprimitive container
    list_t *assets; //nonprimitive container

} renderstream_render_machine_info_t;

renderstream_render_machine_info_t *renderstream_render_machine_info_create(
    char *name,
    char *status_string,
    int online,
    float load_factor,
    char *preferred_adapter,
    list_t *network_adapters,
    list_t *streams,
    list_t *assets
);

void renderstream_render_machine_info_free(renderstream_render_machine_info_t *renderstream_render_machine_info);

renderstream_render_machine_info_t *renderstream_render_machine_info_parseFromJSON(cJSON *renderstream_render_machine_infoJSON);

cJSON *renderstream_render_machine_info_convertToJSON(renderstream_render_machine_info_t *renderstream_render_machine_info);

#endif /* _renderstream_render_machine_info_H_ */


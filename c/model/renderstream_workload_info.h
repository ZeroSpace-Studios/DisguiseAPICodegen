/*
 * renderstream_workload_info.h
 *
 * 
 */

#ifndef _renderstream_workload_info_H_
#define _renderstream_workload_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_workload_info_t renderstream_workload_info_t;

#include "renderstream_asset_info.h"
#include "renderstream_workload_instance_info.h"
#include "workload_instance_info_workload_instance_status.h"

// Enum  for renderstream_workload_info

typedef enum  { d3_api_renderstream_workload_info__NULL = 0, d3_api_renderstream_workload_info__UNKNOWN, d3_api_renderstream_workload_info__CRASHED, d3_api_renderstream_workload_info__ERROR, d3_api_renderstream_workload_info__STOPPING, d3_api_renderstream_workload_info__STOPPED, d3_api_renderstream_workload_info__LAUNCHING, d3_api_renderstream_workload_info__STARTING, d3_api_renderstream_workload_info__READY, d3_api_renderstream_workload_info__STANDBY, d3_api_renderstream_workload_info__RUNNING } d3_api_renderstream_workload_info__e;

char* renderstream_workload_info_status_ToString(d3_api_renderstream_workload_info__e status);

d3_api_renderstream_workload_info__e renderstream_workload_info_status_FromString(char* status);



typedef struct renderstream_workload_info_t {
    char *id; // string
    char *friendly_name; // string
    struct renderstream_asset_info_t *asset; //model
    list_t *instances; //nonprimitive container
    int engine_sync; //boolean
    char *layer_uid; // string
    char *location_description; // string

} renderstream_workload_info_t;

renderstream_workload_info_t *renderstream_workload_info_create(
    char *id,
    char *friendly_name,
    renderstream_asset_info_t *asset,
    list_t *instances,
    int engine_sync,
    char *layer_uid,
    char *location_description
);

void renderstream_workload_info_free(renderstream_workload_info_t *renderstream_workload_info);

renderstream_workload_info_t *renderstream_workload_info_parseFromJSON(cJSON *renderstream_workload_infoJSON);

cJSON *renderstream_workload_info_convertToJSON(renderstream_workload_info_t *renderstream_workload_info);

#endif /* _renderstream_workload_info_H_ */


/*
 * renderstream_workload_instance_info.h
 *
 * 
 */

#ifndef _renderstream_workload_instance_info_H_
#define _renderstream_workload_instance_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_workload_instance_info_t renderstream_workload_instance_info_t;

#include "workload_instance_info_workload_instance_status.h"

// Enum  for renderstream_workload_instance_info

typedef enum  { d3_api_renderstream_workload_instance_info__NULL = 0, d3_api_renderstream_workload_instance_info__UNKNOWN, d3_api_renderstream_workload_instance_info__CRASHED, d3_api_renderstream_workload_instance_info__ERROR, d3_api_renderstream_workload_instance_info__STOPPING, d3_api_renderstream_workload_instance_info__STOPPED, d3_api_renderstream_workload_instance_info__LAUNCHING, d3_api_renderstream_workload_instance_info__STARTING, d3_api_renderstream_workload_instance_info__READY, d3_api_renderstream_workload_instance_info__STANDBY, d3_api_renderstream_workload_instance_info__RUNNING } d3_api_renderstream_workload_instance_info__e;

char* renderstream_workload_instance_info_status_ToString(d3_api_renderstream_workload_instance_info__e status);

d3_api_renderstream_workload_instance_info__e renderstream_workload_instance_info_status_FromString(char* status);



typedef struct renderstream_workload_instance_info_t {
    char *workloadid; // string
    long instanceid; //numeric
    int process_running; //boolean
    int dropping_frames; //boolean
    int dropping_input_frames; //boolean

} renderstream_workload_instance_info_t;

renderstream_workload_instance_info_t *renderstream_workload_instance_info_create(
    char *workloadid,
    long instanceid,
    int process_running,
    int dropping_frames,
    int dropping_input_frames
);

void renderstream_workload_instance_info_free(renderstream_workload_instance_info_t *renderstream_workload_instance_info);

renderstream_workload_instance_info_t *renderstream_workload_instance_info_parseFromJSON(cJSON *renderstream_workload_instance_infoJSON);

cJSON *renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_t *renderstream_workload_instance_info);

#endif /* _renderstream_workload_instance_info_H_ */


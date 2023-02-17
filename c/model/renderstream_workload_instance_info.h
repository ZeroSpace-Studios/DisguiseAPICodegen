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




typedef struct renderstream_workload_instance_info_t {
    char *machine_uid; // string
    char *machine_name; // string
    char *state; // string
    char *health_message; // string
    char *health_details; // string

} renderstream_workload_instance_info_t;

renderstream_workload_instance_info_t *renderstream_workload_instance_info_create(
    char *machine_uid,
    char *machine_name,
    char *state,
    char *health_message,
    char *health_details
);

void renderstream_workload_instance_info_free(renderstream_workload_instance_info_t *renderstream_workload_instance_info);

renderstream_workload_instance_info_t *renderstream_workload_instance_info_parseFromJSON(cJSON *renderstream_workload_instance_infoJSON);

cJSON *renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_t *renderstream_workload_instance_info);

#endif /* _renderstream_workload_instance_info_H_ */


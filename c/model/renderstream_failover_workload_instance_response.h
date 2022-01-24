/*
 * renderstream_failover_workload_instance_response.h
 *
 * 
 */

#ifndef _renderstream_failover_workload_instance_response_H_
#define _renderstream_failover_workload_instance_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_failover_workload_instance_response_t renderstream_failover_workload_instance_response_t;

#include "renderstream_failover_info.h"



typedef struct renderstream_failover_workload_instance_response_t {
    struct renderstream_failover_info_t *failover_mapping; //model

} renderstream_failover_workload_instance_response_t;

renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_create(
    renderstream_failover_info_t *failover_mapping
);

void renderstream_failover_workload_instance_response_free(renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response);

renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response_parseFromJSON(cJSON *renderstream_failover_workload_instance_responseJSON);

cJSON *renderstream_failover_workload_instance_response_convertToJSON(renderstream_failover_workload_instance_response_t *renderstream_failover_workload_instance_response);

#endif /* _renderstream_failover_workload_instance_response_H_ */


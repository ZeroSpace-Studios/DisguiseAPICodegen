/*
 * renderstream_get_workload_instance_response.h
 *
 * 
 */

#ifndef _renderstream_get_workload_instance_response_H_
#define _renderstream_get_workload_instance_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_get_workload_instance_response_t renderstream_get_workload_instance_response_t;

#include "renderstream_workload_instance_info.h"



typedef struct renderstream_get_workload_instance_response_t {
    struct renderstream_workload_instance_info_t *result; //model

} renderstream_get_workload_instance_response_t;

renderstream_get_workload_instance_response_t *renderstream_get_workload_instance_response_create(
    renderstream_workload_instance_info_t *result
);

void renderstream_get_workload_instance_response_free(renderstream_get_workload_instance_response_t *renderstream_get_workload_instance_response);

renderstream_get_workload_instance_response_t *renderstream_get_workload_instance_response_parseFromJSON(cJSON *renderstream_get_workload_instance_responseJSON);

cJSON *renderstream_get_workload_instance_response_convertToJSON(renderstream_get_workload_instance_response_t *renderstream_get_workload_instance_response);

#endif /* _renderstream_get_workload_instance_response_H_ */


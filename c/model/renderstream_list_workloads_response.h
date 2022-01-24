/*
 * renderstream_list_workloads_response.h
 *
 * 
 */

#ifndef _renderstream_list_workloads_response_H_
#define _renderstream_list_workloads_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_list_workloads_response_t renderstream_list_workloads_response_t;

#include "renderstream_workload_info.h"



typedef struct renderstream_list_workloads_response_t {
    list_t *workloads; //nonprimitive container

} renderstream_list_workloads_response_t;

renderstream_list_workloads_response_t *renderstream_list_workloads_response_create(
    list_t *workloads
);

void renderstream_list_workloads_response_free(renderstream_list_workloads_response_t *renderstream_list_workloads_response);

renderstream_list_workloads_response_t *renderstream_list_workloads_response_parseFromJSON(cJSON *renderstream_list_workloads_responseJSON);

cJSON *renderstream_list_workloads_response_convertToJSON(renderstream_list_workloads_response_t *renderstream_list_workloads_response);

#endif /* _renderstream_list_workloads_response_H_ */


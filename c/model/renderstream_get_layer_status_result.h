/*
 * renderstream_get_layer_status_result.h
 *
 * 
 */

#ifndef _renderstream_get_layer_status_result_H_
#define _renderstream_get_layer_status_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_get_layer_status_result_t renderstream_get_layer_status_result_t;

#include "renderstream_reference_info.h"
#include "renderstream_stream_info.h"
#include "renderstream_workload_info.h"



typedef struct renderstream_get_layer_status_result_t {
    struct renderstream_reference_info_t *reference; //model
    struct renderstream_workload_info_t *workload; //model
    list_t *streams; //nonprimitive container
    list_t *asset_errors; //primitive container

} renderstream_get_layer_status_result_t;

renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_create(
    renderstream_reference_info_t *reference,
    renderstream_workload_info_t *workload,
    list_t *streams,
    list_t *asset_errors
);

void renderstream_get_layer_status_result_free(renderstream_get_layer_status_result_t *renderstream_get_layer_status_result);

renderstream_get_layer_status_result_t *renderstream_get_layer_status_result_parseFromJSON(cJSON *renderstream_get_layer_status_resultJSON);

cJSON *renderstream_get_layer_status_result_convertToJSON(renderstream_get_layer_status_result_t *renderstream_get_layer_status_result);

#endif /* _renderstream_get_layer_status_result_H_ */


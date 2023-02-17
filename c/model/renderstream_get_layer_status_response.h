/*
 * renderstream_get_layer_status_response.h
 *
 * 
 */

#ifndef _renderstream_get_layer_status_response_H_
#define _renderstream_get_layer_status_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_get_layer_status_response_t renderstream_get_layer_status_response_t;

#include "renderstream_get_layer_status_result.h"
#include "rpc_status.h"



typedef struct renderstream_get_layer_status_response_t {
    struct rpc_status_t *status; //model
    struct renderstream_get_layer_status_result_t *result; //model

} renderstream_get_layer_status_response_t;

renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_create(
    rpc_status_t *status,
    renderstream_get_layer_status_result_t *result
);

void renderstream_get_layer_status_response_free(renderstream_get_layer_status_response_t *renderstream_get_layer_status_response);

renderstream_get_layer_status_response_t *renderstream_get_layer_status_response_parseFromJSON(cJSON *renderstream_get_layer_status_responseJSON);

cJSON *renderstream_get_layer_status_response_convertToJSON(renderstream_get_layer_status_response_t *renderstream_get_layer_status_response);

#endif /* _renderstream_get_layer_status_response_H_ */


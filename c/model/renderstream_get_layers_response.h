/*
 * renderstream_get_layers_response.h
 *
 * 
 */

#ifndef _renderstream_get_layers_response_H_
#define _renderstream_get_layers_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_get_layers_response_t renderstream_get_layers_response_t;

#include "renderstream_render_stream_info.h"
#include "rpc_status.h"



typedef struct renderstream_get_layers_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} renderstream_get_layers_response_t;

renderstream_get_layers_response_t *renderstream_get_layers_response_create(
    rpc_status_t *status,
    list_t *result
);

void renderstream_get_layers_response_free(renderstream_get_layers_response_t *renderstream_get_layers_response);

renderstream_get_layers_response_t *renderstream_get_layers_response_parseFromJSON(cJSON *renderstream_get_layers_responseJSON);

cJSON *renderstream_get_layers_response_convertToJSON(renderstream_get_layers_response_t *renderstream_get_layers_response);

#endif /* _renderstream_get_layers_response_H_ */


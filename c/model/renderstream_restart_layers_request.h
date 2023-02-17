/*
 * renderstream_restart_layers_request.h
 *
 * 
 */

#ifndef _renderstream_restart_layers_request_H_
#define _renderstream_restart_layers_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_restart_layers_request_t renderstream_restart_layers_request_t;

#include "d3api_locator.h"



typedef struct renderstream_restart_layers_request_t {
    list_t *layers; //nonprimitive container

} renderstream_restart_layers_request_t;

renderstream_restart_layers_request_t *renderstream_restart_layers_request_create(
    list_t *layers
);

void renderstream_restart_layers_request_free(renderstream_restart_layers_request_t *renderstream_restart_layers_request);

renderstream_restart_layers_request_t *renderstream_restart_layers_request_parseFromJSON(cJSON *renderstream_restart_layers_requestJSON);

cJSON *renderstream_restart_layers_request_convertToJSON(renderstream_restart_layers_request_t *renderstream_restart_layers_request);

#endif /* _renderstream_restart_layers_request_H_ */


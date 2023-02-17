/*
 * renderstream_failover_request.h
 *
 * 
 */

#ifndef _renderstream_failover_request_H_
#define _renderstream_failover_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_failover_request_t renderstream_failover_request_t;

#include "d3api_locator.h"



typedef struct renderstream_failover_request_t {
    struct d3api_locator_t *machine; //model

} renderstream_failover_request_t;

renderstream_failover_request_t *renderstream_failover_request_create(
    d3api_locator_t *machine
);

void renderstream_failover_request_free(renderstream_failover_request_t *renderstream_failover_request);

renderstream_failover_request_t *renderstream_failover_request_parseFromJSON(cJSON *renderstream_failover_requestJSON);

cJSON *renderstream_failover_request_convertToJSON(renderstream_failover_request_t *renderstream_failover_request);

#endif /* _renderstream_failover_request_H_ */


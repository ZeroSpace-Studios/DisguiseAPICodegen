/*
 * transport_stop_request.h
 *
 * 
 */

#ifndef _transport_stop_request_H_
#define _transport_stop_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_stop_request_t transport_stop_request_t;

#include "d3api_locator.h"



typedef struct transport_stop_request_t {
    list_t *transports; //nonprimitive container

} transport_stop_request_t;

transport_stop_request_t *transport_stop_request_create(
    list_t *transports
);

void transport_stop_request_free(transport_stop_request_t *transport_stop_request);

transport_stop_request_t *transport_stop_request_parseFromJSON(cJSON *transport_stop_requestJSON);

cJSON *transport_stop_request_convertToJSON(transport_stop_request_t *transport_stop_request);

#endif /* _transport_stop_request_H_ */


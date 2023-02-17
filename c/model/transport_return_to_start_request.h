/*
 * transport_return_to_start_request.h
 *
 * 
 */

#ifndef _transport_return_to_start_request_H_
#define _transport_return_to_start_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_return_to_start_request_t transport_return_to_start_request_t;

#include "d3api_locator.h"



typedef struct transport_return_to_start_request_t {
    list_t *transports; //nonprimitive container

} transport_return_to_start_request_t;

transport_return_to_start_request_t *transport_return_to_start_request_create(
    list_t *transports
);

void transport_return_to_start_request_free(transport_return_to_start_request_t *transport_return_to_start_request);

transport_return_to_start_request_t *transport_return_to_start_request_parseFromJSON(cJSON *transport_return_to_start_requestJSON);

cJSON *transport_return_to_start_request_convertToJSON(transport_return_to_start_request_t *transport_return_to_start_request);

#endif /* _transport_return_to_start_request_H_ */


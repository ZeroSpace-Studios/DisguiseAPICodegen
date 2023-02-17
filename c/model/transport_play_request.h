/*
 * transport_play_request.h
 *
 * 
 */

#ifndef _transport_play_request_H_
#define _transport_play_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_play_request_t transport_play_request_t;

#include "d3api_locator.h"



typedef struct transport_play_request_t {
    list_t *transports; //nonprimitive container

} transport_play_request_t;

transport_play_request_t *transport_play_request_create(
    list_t *transports
);

void transport_play_request_free(transport_play_request_t *transport_play_request);

transport_play_request_t *transport_play_request_parseFromJSON(cJSON *transport_play_requestJSON);

cJSON *transport_play_request_convertToJSON(transport_play_request_t *transport_play_request);

#endif /* _transport_play_request_H_ */


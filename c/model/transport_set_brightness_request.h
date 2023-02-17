/*
 * transport_set_brightness_request.h
 *
 * 
 */

#ifndef _transport_set_brightness_request_H_
#define _transport_set_brightness_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_set_brightness_request_t transport_set_brightness_request_t;

#include "transport_set_brightness_info.h"



typedef struct transport_set_brightness_request_t {
    list_t *transports; //nonprimitive container

} transport_set_brightness_request_t;

transport_set_brightness_request_t *transport_set_brightness_request_create(
    list_t *transports
);

void transport_set_brightness_request_free(transport_set_brightness_request_t *transport_set_brightness_request);

transport_set_brightness_request_t *transport_set_brightness_request_parseFromJSON(cJSON *transport_set_brightness_requestJSON);

cJSON *transport_set_brightness_request_convertToJSON(transport_set_brightness_request_t *transport_set_brightness_request);

#endif /* _transport_set_brightness_request_H_ */


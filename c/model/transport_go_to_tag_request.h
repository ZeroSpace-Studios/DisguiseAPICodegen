/*
 * transport_go_to_tag_request.h
 *
 * 
 */

#ifndef _transport_go_to_tag_request_H_
#define _transport_go_to_tag_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_go_to_tag_request_t transport_go_to_tag_request_t;

#include "transport_go_to_tag_info.h"



typedef struct transport_go_to_tag_request_t {
    list_t *transports; //nonprimitive container

} transport_go_to_tag_request_t;

transport_go_to_tag_request_t *transport_go_to_tag_request_create(
    list_t *transports
);

void transport_go_to_tag_request_free(transport_go_to_tag_request_t *transport_go_to_tag_request);

transport_go_to_tag_request_t *transport_go_to_tag_request_parseFromJSON(cJSON *transport_go_to_tag_requestJSON);

cJSON *transport_go_to_tag_request_convertToJSON(transport_go_to_tag_request_t *transport_go_to_tag_request);

#endif /* _transport_go_to_tag_request_H_ */


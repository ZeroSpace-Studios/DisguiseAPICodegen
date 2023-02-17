/*
 * transport_get_active_transport_response.h
 *
 * 
 */

#ifndef _transport_get_active_transport_response_H_
#define _transport_get_active_transport_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_get_active_transport_response_t transport_get_active_transport_response_t;

#include "rpc_status.h"
#include "transport_transport_info.h"



typedef struct transport_get_active_transport_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} transport_get_active_transport_response_t;

transport_get_active_transport_response_t *transport_get_active_transport_response_create(
    rpc_status_t *status,
    list_t *result
);

void transport_get_active_transport_response_free(transport_get_active_transport_response_t *transport_get_active_transport_response);

transport_get_active_transport_response_t *transport_get_active_transport_response_parseFromJSON(cJSON *transport_get_active_transport_responseJSON);

cJSON *transport_get_active_transport_response_convertToJSON(transport_get_active_transport_response_t *transport_get_active_transport_response);

#endif /* _transport_get_active_transport_response_H_ */


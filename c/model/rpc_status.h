/*
 * rpc_status.h
 *
 * The &#x60;Status&#x60; type defines a logical error model that is suitable for different programming environments, including REST APIs and RPC APIs. It is used by [gRPC](https://github.com/grpc). Each &#x60;Status&#x60; message contains three pieces of data: error code, error message, and error details.  You can find out more about this error model and how to work with it in the [API Design Guide](https://cloud.google.com/apis/design/errors).
 */

#ifndef _rpc_status_H_
#define _rpc_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct rpc_status_t rpc_status_t;

#include "protobuf_any.h"



typedef struct rpc_status_t {
    int code; //numeric
    char *message; // string
    list_t *details; //nonprimitive container

} rpc_status_t;

rpc_status_t *rpc_status_create(
    int code,
    char *message,
    list_t *details
);

void rpc_status_free(rpc_status_t *rpc_status);

rpc_status_t *rpc_status_parseFromJSON(cJSON *rpc_statusJSON);

cJSON *rpc_status_convertToJSON(rpc_status_t *rpc_status);

#endif /* _rpc_status_H_ */


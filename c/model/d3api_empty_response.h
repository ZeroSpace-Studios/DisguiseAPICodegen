/*
 * d3api_empty_response.h
 *
 * 
 */

#ifndef _d3api_empty_response_H_
#define _d3api_empty_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct d3api_empty_response_t d3api_empty_response_t;

#include "rpc_status.h"



typedef struct d3api_empty_response_t {
    struct rpc_status_t *status; //model

} d3api_empty_response_t;

d3api_empty_response_t *d3api_empty_response_create(
    rpc_status_t *status
);

void d3api_empty_response_free(d3api_empty_response_t *d3api_empty_response);

d3api_empty_response_t *d3api_empty_response_parseFromJSON(cJSON *d3api_empty_responseJSON);

cJSON *d3api_empty_response_convertToJSON(d3api_empty_response_t *d3api_empty_response);

#endif /* _d3api_empty_response_H_ */


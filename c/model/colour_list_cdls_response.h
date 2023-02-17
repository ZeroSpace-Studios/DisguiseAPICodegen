/*
 * colour_list_cdls_response.h
 *
 * 
 */

#ifndef _colour_list_cdls_response_H_
#define _colour_list_cdls_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct colour_list_cdls_response_t colour_list_cdls_response_t;

#include "colour_cdl_info.h"
#include "rpc_status.h"



typedef struct colour_list_cdls_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} colour_list_cdls_response_t;

colour_list_cdls_response_t *colour_list_cdls_response_create(
    rpc_status_t *status,
    list_t *result
);

void colour_list_cdls_response_free(colour_list_cdls_response_t *colour_list_cdls_response);

colour_list_cdls_response_t *colour_list_cdls_response_parseFromJSON(cJSON *colour_list_cdls_responseJSON);

cJSON *colour_list_cdls_response_convertToJSON(colour_list_cdls_response_t *colour_list_cdls_response);

#endif /* _colour_list_cdls_response_H_ */


/*
 * transport_list_annotations_response.h
 *
 * 
 */

#ifndef _transport_list_annotations_response_H_
#define _transport_list_annotations_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_list_annotations_response_t transport_list_annotations_response_t;

#include "rpc_status.h"
#include "transport_list_annotations_result.h"



typedef struct transport_list_annotations_response_t {
    struct rpc_status_t *status; //model
    struct transport_list_annotations_result_t *result; //model

} transport_list_annotations_response_t;

transport_list_annotations_response_t *transport_list_annotations_response_create(
    rpc_status_t *status,
    transport_list_annotations_result_t *result
);

void transport_list_annotations_response_free(transport_list_annotations_response_t *transport_list_annotations_response);

transport_list_annotations_response_t *transport_list_annotations_response_parseFromJSON(cJSON *transport_list_annotations_responseJSON);

cJSON *transport_list_annotations_response_convertToJSON(transport_list_annotations_response_t *transport_list_annotations_response);

#endif /* _transport_list_annotations_response_H_ */


/*
 * status_get_project_response.h
 *
 * 
 */

#ifndef _status_get_project_response_H_
#define _status_get_project_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_get_project_response_t status_get_project_response_t;

#include "rpc_status.h"
#include "status_get_project_result.h"



typedef struct status_get_project_response_t {
    struct rpc_status_t *status; //model
    struct status_get_project_result_t *result; //model

} status_get_project_response_t;

status_get_project_response_t *status_get_project_response_create(
    rpc_status_t *status,
    status_get_project_result_t *result
);

void status_get_project_response_free(status_get_project_response_t *status_get_project_response);

status_get_project_response_t *status_get_project_response_parseFromJSON(cJSON *status_get_project_responseJSON);

cJSON *status_get_project_response_convertToJSON(status_get_project_response_t *status_get_project_response);

#endif /* _status_get_project_response_H_ */


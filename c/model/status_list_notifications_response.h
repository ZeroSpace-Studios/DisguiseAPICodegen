/*
 * status_list_notifications_response.h
 *
 * 
 */

#ifndef _status_list_notifications_response_H_
#define _status_list_notifications_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_list_notifications_response_t status_list_notifications_response_t;

#include "rpc_status.h"
#include "status_notifications_report.h"



typedef struct status_list_notifications_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} status_list_notifications_response_t;

status_list_notifications_response_t *status_list_notifications_response_create(
    rpc_status_t *status,
    list_t *result
);

void status_list_notifications_response_free(status_list_notifications_response_t *status_list_notifications_response);

status_list_notifications_response_t *status_list_notifications_response_parseFromJSON(cJSON *status_list_notifications_responseJSON);

cJSON *status_list_notifications_response_convertToJSON(status_list_notifications_response_t *status_list_notifications_response);

#endif /* _status_list_notifications_response_H_ */


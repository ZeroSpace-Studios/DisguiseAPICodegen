/*
 * status_get_session_result.h
 *
 * 
 */

#ifndef _status_get_session_result_H_
#define _status_get_session_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_get_session_result_t status_get_session_result_t;

#include "status_machine_info.h"



typedef struct status_get_session_result_t {
    int is_running_solo; //boolean
    int is_director_dedicated; //boolean
    struct status_machine_info_t *director; //model
    list_t *actors; //nonprimitive container
    list_t *understudies; //nonprimitive container

} status_get_session_result_t;

status_get_session_result_t *status_get_session_result_create(
    int is_running_solo,
    int is_director_dedicated,
    status_machine_info_t *director,
    list_t *actors,
    list_t *understudies
);

void status_get_session_result_free(status_get_session_result_t *status_get_session_result);

status_get_session_result_t *status_get_session_result_parseFromJSON(cJSON *status_get_session_resultJSON);

cJSON *status_get_session_result_convertToJSON(status_get_session_result_t *status_get_session_result);

#endif /* _status_get_session_result_H_ */


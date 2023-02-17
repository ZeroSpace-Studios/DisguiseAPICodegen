/*
 * mixedreality_get_cameras_response.h
 *
 * 
 */

#ifndef _mixedreality_get_cameras_response_H_
#define _mixedreality_get_cameras_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_get_cameras_response_t mixedreality_get_cameras_response_t;

#include "mixedreality_camera_info.h"
#include "rpc_status.h"



typedef struct mixedreality_get_cameras_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} mixedreality_get_cameras_response_t;

mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_create(
    rpc_status_t *status,
    list_t *result
);

void mixedreality_get_cameras_response_free(mixedreality_get_cameras_response_t *mixedreality_get_cameras_response);

mixedreality_get_cameras_response_t *mixedreality_get_cameras_response_parseFromJSON(cJSON *mixedreality_get_cameras_responseJSON);

cJSON *mixedreality_get_cameras_response_convertToJSON(mixedreality_get_cameras_response_t *mixedreality_get_cameras_response);

#endif /* _mixedreality_get_cameras_response_H_ */


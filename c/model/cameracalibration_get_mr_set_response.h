/*
 * cameracalibration_get_mr_set_response.h
 *
 * 
 */

#ifndef _cameracalibration_get_mr_set_response_H_
#define _cameracalibration_get_mr_set_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_get_mr_set_response_t cameracalibration_get_mr_set_response_t;

#include "cameracalibration_mr_set_info.h"



typedef struct cameracalibration_get_mr_set_response_t {
    struct cameracalibration_mr_set_info_t *result; //model

} cameracalibration_get_mr_set_response_t;

cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_create(
    cameracalibration_mr_set_info_t *result
);

void cameracalibration_get_mr_set_response_free(cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response);

cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response_parseFromJSON(cJSON *cameracalibration_get_mr_set_responseJSON);

cJSON *cameracalibration_get_mr_set_response_convertToJSON(cameracalibration_get_mr_set_response_t *cameracalibration_get_mr_set_response);

#endif /* _cameracalibration_get_mr_set_response_H_ */


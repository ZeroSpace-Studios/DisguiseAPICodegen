/*
 * cameracalibration_list_mr_sets_response.h
 *
 * 
 */

#ifndef _cameracalibration_list_mr_sets_response_H_
#define _cameracalibration_list_mr_sets_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct cameracalibration_list_mr_sets_response_t cameracalibration_list_mr_sets_response_t;

#include "cameracalibration_mr_set_info.h"



typedef struct cameracalibration_list_mr_sets_response_t {
    list_t *result; //nonprimitive container

} cameracalibration_list_mr_sets_response_t;

cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_create(
    list_t *result
);

void cameracalibration_list_mr_sets_response_free(cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response);

cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response_parseFromJSON(cJSON *cameracalibration_list_mr_sets_responseJSON);

cJSON *cameracalibration_list_mr_sets_response_convertToJSON(cameracalibration_list_mr_sets_response_t *cameracalibration_list_mr_sets_response);

#endif /* _cameracalibration_list_mr_sets_response_H_ */


/*
 * v1_get_mr_set_response.h
 *
 * 
 */

#ifndef _v1_get_mr_set_response_H_
#define _v1_get_mr_set_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_get_mr_set_response_t v1_get_mr_set_response_t;

#include "v1_mr_set_info.h"



typedef struct v1_get_mr_set_response_t {
    struct v1_mr_set_info_t *result; //model

} v1_get_mr_set_response_t;

v1_get_mr_set_response_t *v1_get_mr_set_response_create(
    v1_mr_set_info_t *result
);

void v1_get_mr_set_response_free(v1_get_mr_set_response_t *v1_get_mr_set_response);

v1_get_mr_set_response_t *v1_get_mr_set_response_parseFromJSON(cJSON *v1_get_mr_set_responseJSON);

cJSON *v1_get_mr_set_response_convertToJSON(v1_get_mr_set_response_t *v1_get_mr_set_response);

#endif /* _v1_get_mr_set_response_H_ */


/*
 * v1_list_mr_sets_response.h
 *
 * 
 */

#ifndef _v1_list_mr_sets_response_H_
#define _v1_list_mr_sets_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_list_mr_sets_response_t v1_list_mr_sets_response_t;

#include "v1_mr_set_info.h"



typedef struct v1_list_mr_sets_response_t {
    list_t *result; //nonprimitive container

} v1_list_mr_sets_response_t;

v1_list_mr_sets_response_t *v1_list_mr_sets_response_create(
    list_t *result
);

void v1_list_mr_sets_response_free(v1_list_mr_sets_response_t *v1_list_mr_sets_response);

v1_list_mr_sets_response_t *v1_list_mr_sets_response_parseFromJSON(cJSON *v1_list_mr_sets_responseJSON);

cJSON *v1_list_mr_sets_response_convertToJSON(v1_list_mr_sets_response_t *v1_list_mr_sets_response);

#endif /* _v1_list_mr_sets_response_H_ */


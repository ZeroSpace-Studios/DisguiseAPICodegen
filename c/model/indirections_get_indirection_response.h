/*
 * indirections_get_indirection_response.h
 *
 * 
 */

#ifndef _indirections_get_indirection_response_H_
#define _indirections_get_indirection_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_get_indirection_response_t indirections_get_indirection_response_t;

#include "indirections_indirection.h"



typedef struct indirections_get_indirection_response_t {
    struct indirections_indirection_t *result; //model

} indirections_get_indirection_response_t;

indirections_get_indirection_response_t *indirections_get_indirection_response_create(
    indirections_indirection_t *result
);

void indirections_get_indirection_response_free(indirections_get_indirection_response_t *indirections_get_indirection_response);

indirections_get_indirection_response_t *indirections_get_indirection_response_parseFromJSON(cJSON *indirections_get_indirection_responseJSON);

cJSON *indirections_get_indirection_response_convertToJSON(indirections_get_indirection_response_t *indirections_get_indirection_response);

#endif /* _indirections_get_indirection_response_H_ */


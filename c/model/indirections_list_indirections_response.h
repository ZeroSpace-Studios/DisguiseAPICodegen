/*
 * indirections_list_indirections_response.h
 *
 * 
 */

#ifndef _indirections_list_indirections_response_H_
#define _indirections_list_indirections_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_list_indirections_response_t indirections_list_indirections_response_t;

#include "indirections_indirection.h"



typedef struct indirections_list_indirections_response_t {
    list_t *result; //nonprimitive container

} indirections_list_indirections_response_t;

indirections_list_indirections_response_t *indirections_list_indirections_response_create(
    list_t *result
);

void indirections_list_indirections_response_free(indirections_list_indirections_response_t *indirections_list_indirections_response);

indirections_list_indirections_response_t *indirections_list_indirections_response_parseFromJSON(cJSON *indirections_list_indirections_responseJSON);

cJSON *indirections_list_indirections_response_convertToJSON(indirections_list_indirections_response_t *indirections_list_indirections_response);

#endif /* _indirections_list_indirections_response_H_ */


/*
 * indirections_set_indirections_response.h
 *
 * 
 */

#ifndef _indirections_set_indirections_response_H_
#define _indirections_set_indirections_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_set_indirections_response_t indirections_set_indirections_response_t;

#include "set_indirections_response_failed_assignment.h"



typedef struct indirections_set_indirections_response_t {
    list_t *failed_assignments; //nonprimitive container

} indirections_set_indirections_response_t;

indirections_set_indirections_response_t *indirections_set_indirections_response_create(
    list_t *failed_assignments
);

void indirections_set_indirections_response_free(indirections_set_indirections_response_t *indirections_set_indirections_response);

indirections_set_indirections_response_t *indirections_set_indirections_response_parseFromJSON(cJSON *indirections_set_indirections_responseJSON);

cJSON *indirections_set_indirections_response_convertToJSON(indirections_set_indirections_response_t *indirections_set_indirections_response);

#endif /* _indirections_set_indirections_response_H_ */


/*
 * indirections_set_indirections_request.h
 *
 * 
 */

#ifndef _indirections_set_indirections_request_H_
#define _indirections_set_indirections_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_set_indirections_request_t indirections_set_indirections_request_t;

#include "set_indirections_request_assignment.h"



typedef struct indirections_set_indirections_request_t {
    list_t *assignments; //nonprimitive container

} indirections_set_indirections_request_t;

indirections_set_indirections_request_t *indirections_set_indirections_request_create(
    list_t *assignments
);

void indirections_set_indirections_request_free(indirections_set_indirections_request_t *indirections_set_indirections_request);

indirections_set_indirections_request_t *indirections_set_indirections_request_parseFromJSON(cJSON *indirections_set_indirections_requestJSON);

cJSON *indirections_set_indirections_request_convertToJSON(indirections_set_indirections_request_t *indirections_set_indirections_request);

#endif /* _indirections_set_indirections_request_H_ */


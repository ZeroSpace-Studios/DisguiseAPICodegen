/*
 * indirections_manual_indirection.h
 *
 * 
 */

#ifndef _indirections_manual_indirection_H_
#define _indirections_manual_indirection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_manual_indirection_t indirections_manual_indirection_t;




typedef struct indirections_manual_indirection_t {
    char *resource_uid; // string

} indirections_manual_indirection_t;

indirections_manual_indirection_t *indirections_manual_indirection_create(
    char *resource_uid
);

void indirections_manual_indirection_free(indirections_manual_indirection_t *indirections_manual_indirection);

indirections_manual_indirection_t *indirections_manual_indirection_parseFromJSON(cJSON *indirections_manual_indirectionJSON);

cJSON *indirections_manual_indirection_convertToJSON(indirections_manual_indirection_t *indirections_manual_indirection);

#endif /* _indirections_manual_indirection_H_ */


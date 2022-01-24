/*
 * indirections_indirection.h
 *
 * 
 */

#ifndef _indirections_indirection_H_
#define _indirections_indirection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_indirection_t indirections_indirection_t;

#include "indirections_list_indirection.h"
#include "indirections_manual_indirection.h"



typedef struct indirections_indirection_t {
    char *uid; // string
    char *resource_type; // string
    char *name; // string
    struct indirections_manual_indirection_t *manual_indirection; //model
    struct indirections_list_indirection_t *list_indirection; //model

} indirections_indirection_t;

indirections_indirection_t *indirections_indirection_create(
    char *uid,
    char *resource_type,
    char *name,
    indirections_manual_indirection_t *manual_indirection,
    indirections_list_indirection_t *list_indirection
);

void indirections_indirection_free(indirections_indirection_t *indirections_indirection);

indirections_indirection_t *indirections_indirection_parseFromJSON(cJSON *indirections_indirectionJSON);

cJSON *indirections_indirection_convertToJSON(indirections_indirection_t *indirections_indirection);

#endif /* _indirections_indirection_H_ */


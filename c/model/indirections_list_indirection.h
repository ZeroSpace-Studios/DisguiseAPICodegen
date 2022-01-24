/*
 * indirections_list_indirection.h
 *
 * 
 */

#ifndef _indirections_list_indirection_H_
#define _indirections_list_indirection_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct indirections_list_indirection_t indirections_list_indirection_t;




typedef struct indirections_list_indirection_t {
    long resource_index; //numeric
    list_t *resource_uids; //primitive container

} indirections_list_indirection_t;

indirections_list_indirection_t *indirections_list_indirection_create(
    long resource_index,
    list_t *resource_uids
);

void indirections_list_indirection_free(indirections_list_indirection_t *indirections_list_indirection);

indirections_list_indirection_t *indirections_list_indirection_parseFromJSON(cJSON *indirections_list_indirectionJSON);

cJSON *indirections_list_indirection_convertToJSON(indirections_list_indirection_t *indirections_list_indirection);

#endif /* _indirections_list_indirection_H_ */


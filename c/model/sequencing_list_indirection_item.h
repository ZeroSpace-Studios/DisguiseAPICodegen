/*
 * sequencing_list_indirection_item.h
 *
 * 
 */

#ifndef _sequencing_list_indirection_item_H_
#define _sequencing_list_indirection_item_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sequencing_list_indirection_item_t sequencing_list_indirection_item_t;

#include "sequencing_indirection_resource.h"



typedef struct sequencing_list_indirection_item_t {
    char *uid; // string
    char *name; // string
    char *resource_type; // string
    struct sequencing_indirection_resource_t *current_resource; //model

} sequencing_list_indirection_item_t;

sequencing_list_indirection_item_t *sequencing_list_indirection_item_create(
    char *uid,
    char *name,
    char *resource_type,
    sequencing_indirection_resource_t *current_resource
);

void sequencing_list_indirection_item_free(sequencing_list_indirection_item_t *sequencing_list_indirection_item);

sequencing_list_indirection_item_t *sequencing_list_indirection_item_parseFromJSON(cJSON *sequencing_list_indirection_itemJSON);

cJSON *sequencing_list_indirection_item_convertToJSON(sequencing_list_indirection_item_t *sequencing_list_indirection_item);

#endif /* _sequencing_list_indirection_item_H_ */


/*
 * sequencing_indirection_resource.h
 *
 * 
 */

#ifndef _sequencing_indirection_resource_H_
#define _sequencing_indirection_resource_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sequencing_indirection_resource_t sequencing_indirection_resource_t;




typedef struct sequencing_indirection_resource_t {
    char *uid; // string
    char *name; // string

} sequencing_indirection_resource_t;

sequencing_indirection_resource_t *sequencing_indirection_resource_create(
    char *uid,
    char *name
);

void sequencing_indirection_resource_free(sequencing_indirection_resource_t *sequencing_indirection_resource);

sequencing_indirection_resource_t *sequencing_indirection_resource_parseFromJSON(cJSON *sequencing_indirection_resourceJSON);

cJSON *sequencing_indirection_resource_convertToJSON(sequencing_indirection_resource_t *sequencing_indirection_resource);

#endif /* _sequencing_indirection_resource_H_ */


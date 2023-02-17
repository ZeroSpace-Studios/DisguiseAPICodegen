/*
 * sequencing_list_indirections_response.h
 *
 * 
 */

#ifndef _sequencing_list_indirections_response_H_
#define _sequencing_list_indirections_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct sequencing_list_indirections_response_t sequencing_list_indirections_response_t;

#include "rpc_status.h"
#include "sequencing_list_indirection_item.h"



typedef struct sequencing_list_indirections_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} sequencing_list_indirections_response_t;

sequencing_list_indirections_response_t *sequencing_list_indirections_response_create(
    rpc_status_t *status,
    list_t *result
);

void sequencing_list_indirections_response_free(sequencing_list_indirections_response_t *sequencing_list_indirections_response);

sequencing_list_indirections_response_t *sequencing_list_indirections_response_parseFromJSON(cJSON *sequencing_list_indirections_responseJSON);

cJSON *sequencing_list_indirections_response_convertToJSON(sequencing_list_indirections_response_t *sequencing_list_indirections_response);

#endif /* _sequencing_list_indirections_response_H_ */


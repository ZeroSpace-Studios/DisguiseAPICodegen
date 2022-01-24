#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/indirections_get_indirection_response.h"
#include "../model/indirections_list_indirections_response.h"
#include "../model/indirections_set_indirections_request.h"
#include "../model/indirections_set_indirections_response.h"


// Get single indirection
//
indirections_get_indirection_response_t*
IndirectionsAPI_indirectionsGetIndirection(apiClient_t *apiClient, char * uid );


// List all indirections
//
indirections_list_indirections_response_t*
IndirectionsAPI_indirectionsListIndirections(apiClient_t *apiClient, char * resourceType );


// Update one or more indirections
//
indirections_set_indirections_response_t*
IndirectionsAPI_indirectionsSetIndirections(apiClient_t *apiClient, indirections_set_indirections_request_t * body );


// Update one or more indirections
//
indirections_set_indirections_response_t*
IndirectionsAPI_indirectionsSetIndirections2(apiClient_t *apiClient, indirections_set_indirections_request_t * body );



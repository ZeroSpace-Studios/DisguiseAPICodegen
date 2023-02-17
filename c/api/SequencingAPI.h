#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/d3api_empty_response.h"
#include "../model/sequencing_change_indirections_request.h"
#include "../model/sequencing_list_available_resources_response.h"
#include "../model/sequencing_list_indirections_response.h"


// Trigger a change to one or more indirections
//
d3api_empty_response_t*
SequencingAPI_sequencingChangeIndirections(apiClient_t *apiClient, sequencing_change_indirections_request_t * body );


// Get the available resources for a given indirection
//
sequencing_list_available_resources_response_t*
SequencingAPI_sequencingListAvailableResources(apiClient_t *apiClient, char * uid , char * name );


// List all indirections
//
sequencing_list_indirections_response_t*
SequencingAPI_sequencingListIndirections(apiClient_t *apiClient);



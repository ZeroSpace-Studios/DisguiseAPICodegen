#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/colour_list_cdls_response.h"
#include "../model/colour_set_cdl_request.h"
#include "../model/d3api_empty_response.h"


// Returns of the list of all CDLs
//
colour_list_cdls_response_t*
ColourAPI_colourListCDLs(apiClient_t *apiClient);


// Sets a CDL
//
d3api_empty_response_t*
ColourAPI_colourSetCDL(apiClient_t *apiClient, colour_set_cdl_request_t * body );



#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/resources_get_resource_response.h"
#include "../model/resources_list_resources_response.h"


// Get single resource
//
resources_get_resource_response_t*
ResourcesAPI_resourcesGetResource(apiClient_t *apiClient, char * uid );


// List resources by type
//
resources_list_resources_response_t*
ResourcesAPI_resourcesListResources(apiClient_t *apiClient, char * type , char * search );



#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/content_get_media_metadata_response.h"
#include "../model/content_list_media_metadata_response.h"


// Get single media meta data
//
content_get_media_metadata_response_t*
ContentAPI_contentGetMediaMetadata(apiClient_t *apiClient, char * uid );


// List media meta data
//
content_list_media_metadata_response_t*
ContentAPI_contentListMediaMetadata(apiClient_t *apiClient);



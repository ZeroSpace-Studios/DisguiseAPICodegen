#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/thumbnails_get_thumbnail_response.h"


// Get thumbnail for a resource
//
thumbnails_get_thumbnail_response_t*
ThumbnailsAPI_thumbnailsGetThumbnail(apiClient_t *apiClient, char * uid , long width , long height );



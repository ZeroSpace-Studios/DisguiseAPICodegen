#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ContentAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get single media meta data
//
content_get_media_metadata_response_t*
ContentAPI_contentGetMediaMetadata(apiClient_t *apiClient, char * uid )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/content/mediametadata/{uid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/content/mediametadata/{uid}");


    // Path Params
    long sizeOfPathParams_uid = strlen(uid)+3 + strlen("{ uid }");
    if(uid == NULL) {
        goto end;
    }
    char* localVarToReplace_uid = malloc(sizeOfPathParams_uid);
    sprintf(localVarToReplace_uid, "{%s}", "uid");

    localVarPath = strReplace(localVarPath, localVarToReplace_uid, uid);


    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","A successful response.");
    }
    //nonprimitive not container
    cJSON *ContentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    content_get_media_metadata_response_t *elementToReturn = content_get_media_metadata_response_parseFromJSON(ContentAPIlocalVarJSON);
    cJSON_Delete(ContentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_uid);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List media meta data
//
content_list_media_metadata_response_t*
ContentAPI_contentListMediaMetadata(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/content/mediametadata")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/content/mediametadata");



    list_addElement(localVarHeaderType,"application/json"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    if (apiClient->response_code == 200) {
        printf("%s\n","A successful response.");
    }
    //nonprimitive not container
    cJSON *ContentAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    content_list_media_metadata_response_t *elementToReturn = content_list_media_metadata_response_parseFromJSON(ContentAPIlocalVarJSON);
    cJSON_Delete(ContentAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}


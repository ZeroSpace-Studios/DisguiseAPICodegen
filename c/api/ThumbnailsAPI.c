#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ThumbnailsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get thumbnail for a resource
//
thumbnails_get_thumbnail_response_t*
ThumbnailsAPI_thumbnailsGetThumbnail(apiClient_t *apiClient, char * uid , long width , long height )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/thumbnail/{uid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/thumbnail/{uid}");


    // Path Params
    long sizeOfPathParams_uid = strlen(uid)+3 + strlen("{ uid }");
    if(uid == NULL) {
        goto end;
    }
    char* localVarToReplace_uid = malloc(sizeOfPathParams_uid);
    sprintf(localVarToReplace_uid, "{%s}", "uid");

    localVarPath = strReplace(localVarPath, localVarToReplace_uid, uid);



    // query parameters
    char *keyQuery_width = NULL;
    long valueQuery_width ;
    keyValuePair_t *keyPairQuery_width = 0;
    if (width)
    {
        keyQuery_width = strdup("width");
        valueQuery_width = (width);
        keyPairQuery_width = keyValuePair_create(keyQuery_width, &valueQuery_width);
        list_addElement(localVarQueryParameters,keyPairQuery_width);
    }

    // query parameters
    char *keyQuery_height = NULL;
    long valueQuery_height ;
    keyValuePair_t *keyPairQuery_height = 0;
    if (height)
    {
        keyQuery_height = strdup("height");
        valueQuery_height = (height);
        keyPairQuery_height = keyValuePair_create(keyQuery_height, &valueQuery_height);
        list_addElement(localVarQueryParameters,keyPairQuery_height);
    }
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
    cJSON *ThumbnailsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    thumbnails_get_thumbnail_response_t *elementToReturn = thumbnails_get_thumbnail_response_parseFromJSON(ThumbnailsAPIlocalVarJSON);
    cJSON_Delete(ThumbnailsAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_free(localVarQueryParameters);
    
    
    list_free(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_uid);
    if(keyQuery_width){
        free(keyQuery_width);
        keyQuery_width = NULL;
    }
    if(keyPairQuery_width){
        keyValuePair_free(keyPairQuery_width);
        keyPairQuery_width = NULL;
    }
    if(keyQuery_height){
        free(keyQuery_height);
        keyQuery_height = NULL;
    }
    if(keyPairQuery_height){
        keyValuePair_free(keyPairQuery_height);
        keyPairQuery_height = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}


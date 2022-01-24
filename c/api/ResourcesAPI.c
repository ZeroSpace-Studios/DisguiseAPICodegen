#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "ResourcesAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get single resource
//
resources_get_resource_response_t*
ResourcesAPI_resourcesGetResource(apiClient_t *apiClient, char * uid )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/resources/{uid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/resources/{uid}");


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
    cJSON *ResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    resources_get_resource_response_t *elementToReturn = resources_get_resource_response_parseFromJSON(ResourcesAPIlocalVarJSON);
    cJSON_Delete(ResourcesAPIlocalVarJSON);
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

// List resources by type
//
resources_list_resources_response_t*
ResourcesAPI_resourcesListResources(apiClient_t *apiClient, char * type , char * search )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/resources")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/resources");




    // query parameters
    char *keyQuery_type = NULL;
    char * valueQuery_type = NULL;
    keyValuePair_t *keyPairQuery_type = 0;
    if (type)
    {
        keyQuery_type = strdup("type");
        valueQuery_type = strdup((type));
        keyPairQuery_type = keyValuePair_create(keyQuery_type, valueQuery_type);
        list_addElement(localVarQueryParameters,keyPairQuery_type);
    }

    // query parameters
    char *keyQuery_search = NULL;
    char * valueQuery_search = NULL;
    keyValuePair_t *keyPairQuery_search = 0;
    if (search)
    {
        keyQuery_search = strdup("search");
        valueQuery_search = strdup((search));
        keyPairQuery_search = keyValuePair_create(keyQuery_search, valueQuery_search);
        list_addElement(localVarQueryParameters,keyPairQuery_search);
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
    cJSON *ResourcesAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    resources_list_resources_response_t *elementToReturn = resources_list_resources_response_parseFromJSON(ResourcesAPIlocalVarJSON);
    cJSON_Delete(ResourcesAPIlocalVarJSON);
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
    if(keyQuery_type){
        free(keyQuery_type);
        keyQuery_type = NULL;
    }
    if(valueQuery_type){
        free(valueQuery_type);
        valueQuery_type = NULL;
    }
    if(keyPairQuery_type){
        keyValuePair_free(keyPairQuery_type);
        keyPairQuery_type = NULL;
    }
    if(keyQuery_search){
        free(keyQuery_search);
        keyQuery_search = NULL;
    }
    if(valueQuery_search){
        free(valueQuery_search);
        valueQuery_search = NULL;
    }
    if(keyPairQuery_search){
        keyValuePair_free(keyPairQuery_search);
        keyPairQuery_search = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}


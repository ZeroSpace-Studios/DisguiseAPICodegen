#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "IndirectionsAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Get single indirection
//
indirections_get_indirection_response_t*
IndirectionsAPI_indirectionsGetIndirection(apiClient_t *apiClient, char * uid )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/indirections/{uid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/indirections/{uid}");


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
    cJSON *IndirectionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    indirections_get_indirection_response_t *elementToReturn = indirections_get_indirection_response_parseFromJSON(IndirectionsAPIlocalVarJSON);
    cJSON_Delete(IndirectionsAPIlocalVarJSON);
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

// List all indirections
//
indirections_list_indirections_response_t*
IndirectionsAPI_indirectionsListIndirections(apiClient_t *apiClient, char * resourceType )
{
    list_t    *localVarQueryParameters = list_create();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/indirections")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/indirections");




    // query parameters
    char *keyQuery_resourceType = NULL;
    char * valueQuery_resourceType = NULL;
    keyValuePair_t *keyPairQuery_resourceType = 0;
    if (resourceType)
    {
        keyQuery_resourceType = strdup("resourceType");
        valueQuery_resourceType = strdup((resourceType));
        keyPairQuery_resourceType = keyValuePair_create(keyQuery_resourceType, valueQuery_resourceType);
        list_addElement(localVarQueryParameters,keyPairQuery_resourceType);
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
    cJSON *IndirectionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    indirections_list_indirections_response_t *elementToReturn = indirections_list_indirections_response_parseFromJSON(IndirectionsAPIlocalVarJSON);
    cJSON_Delete(IndirectionsAPIlocalVarJSON);
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
    if(keyQuery_resourceType){
        free(keyQuery_resourceType);
        keyQuery_resourceType = NULL;
    }
    if(valueQuery_resourceType){
        free(valueQuery_resourceType);
        valueQuery_resourceType = NULL;
    }
    if(keyPairQuery_resourceType){
        keyValuePair_free(keyPairQuery_resourceType);
        keyPairQuery_resourceType = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update one or more indirections
//
indirections_set_indirections_response_t*
IndirectionsAPI_indirectionsSetIndirections(apiClient_t *apiClient, indirections_set_indirections_request_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/indirections/set")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/indirections/set");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = indirections_set_indirections_request_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    if (apiClient->response_code == 200) {
        printf("%s\n","A successful response.");
    }
    //nonprimitive not container
    cJSON *IndirectionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    indirections_set_indirections_response_t *elementToReturn = indirections_set_indirections_response_parseFromJSON(IndirectionsAPIlocalVarJSON);
    cJSON_Delete(IndirectionsAPIlocalVarJSON);
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
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update one or more indirections
//
indirections_set_indirections_response_t*
IndirectionsAPI_indirectionsSetIndirections2(apiClient_t *apiClient, indirections_set_indirections_request_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/indirections")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/indirections");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = indirections_set_indirections_request_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "PUT");

    if (apiClient->response_code == 200) {
        printf("%s\n","A successful response.");
    }
    //nonprimitive not container
    cJSON *IndirectionsAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    indirections_set_indirections_response_t *elementToReturn = indirections_set_indirections_response_parseFromJSON(IndirectionsAPIlocalVarJSON);
    cJSON_Delete(IndirectionsAPIlocalVarJSON);
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
    list_free(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}


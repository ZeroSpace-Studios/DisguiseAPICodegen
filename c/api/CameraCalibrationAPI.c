#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "CameraCalibrationAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Add Observation
//
object_t*
CameraCalibrationAPI_cameraCalibrationAddObservation(apiClient_t *apiClient, cameracalibration_add_observation_request_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/addobservation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/addobservation");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = cameracalibration_add_observation_request_convertToJSON(body);
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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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

// Enable Observation
//
cameracalibration_enable_observation_response_t*
CameraCalibrationAPI_cameraCalibrationEnableObservation(apiClient_t *apiClient, cameracalibration_enable_observation_request_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/enableobservation")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/enableobservation");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = cameracalibration_enable_observation_request_convertToJSON(body);
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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cameracalibration_enable_observation_response_t *elementToReturn = cameracalibration_enable_observation_response_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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

// Get single MR set
//
cameracalibration_get_mr_set_response_t*
CameraCalibrationAPI_cameraCalibrationGetMRSet(apiClient_t *apiClient, char * mrsetuid )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/mrsets/{mrsetuid}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/mrsets/{mrsetuid}");


    // Path Params
    long sizeOfPathParams_mrsetuid = strlen(mrsetuid)+3 + strlen("{ mrsetuid }");
    if(mrsetuid == NULL) {
        goto end;
    }
    char* localVarToReplace_mrsetuid = malloc(sizeOfPathParams_mrsetuid);
    sprintf(localVarToReplace_mrsetuid, "{%s}", "mrsetuid");

    localVarPath = strReplace(localVarPath, localVarToReplace_mrsetuid, mrsetuid);


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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cameracalibration_get_mr_set_response_t *elementToReturn = cameracalibration_get_mr_set_response_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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
    free(localVarToReplace_mrsetuid);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get Observation progress state
//
cameracalibration_get_observation_progress_response_t*
CameraCalibrationAPI_cameraCalibrationGetObservationProgress(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/observationprogress")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/observationprogress");



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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cameracalibration_get_observation_progress_response_t *elementToReturn = cameracalibration_get_observation_progress_response_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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

// List MR sets
//
cameracalibration_list_mr_sets_response_t*
CameraCalibrationAPI_cameraCalibrationListMRSets(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/mrsets")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/mrsets");



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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    cameracalibration_list_mr_sets_response_t *elementToReturn = cameracalibration_list_mr_sets_response_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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

// Reset Observations
//
object_t*
CameraCalibrationAPI_cameraCalibrationResetAllObservations(apiClient_t *apiClient, cameracalibration_reset_all_observations_request_t * body )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = list_create();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/cameracalibration/resetallobservations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/cameracalibration/resetallobservations");




    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = cameracalibration_reset_all_observations_request_convertToJSON(body);
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
    cJSON *CameraCalibrationAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(CameraCalibrationAPIlocalVarJSON);
    cJSON_Delete(CameraCalibrationAPIlocalVarJSON);
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


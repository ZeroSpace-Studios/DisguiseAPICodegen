#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/object.h"
#include "../model/v1_add_observation_request.h"
#include "../model/v1_enable_observation_request.h"
#include "../model/v1_enable_observation_response.h"
#include "../model/v1_get_mr_set_response.h"
#include "../model/v1_get_observation_progress_response.h"
#include "../model/v1_list_mr_sets_response.h"
#include "../model/v1_reset_all_observations_request.h"


// Add Observation
//
object_t*
CameraCalibrationAPI_cameraCalibrationAddObservation(apiClient_t *apiClient, v1_add_observation_request_t * body );


// Enable Observation
//
v1_enable_observation_response_t*
CameraCalibrationAPI_cameraCalibrationEnableObservation(apiClient_t *apiClient, v1_enable_observation_request_t * body );


// Get single MR set
//
v1_get_mr_set_response_t*
CameraCalibrationAPI_cameraCalibrationGetMRSet(apiClient_t *apiClient, char * mrsetuid );


// Get Observation progress state
//
v1_get_observation_progress_response_t*
CameraCalibrationAPI_cameraCalibrationGetObservationProgress(apiClient_t *apiClient);


// List MR sets
//
v1_list_mr_sets_response_t*
CameraCalibrationAPI_cameraCalibrationListMRSets(apiClient_t *apiClient);


// Reset Observations
//
object_t*
CameraCalibrationAPI_cameraCalibrationResetAllObservations(apiClient_t *apiClient, v1_reset_all_observations_request_t * body );



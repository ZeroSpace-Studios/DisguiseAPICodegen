#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/d3api_bool_response.h"
#include "../model/d3api_empty_response.h"
#include "../model/mixedreality_capture_observation_request.h"
#include "../model/mixedreality_delete_all_observations_request.h"
#include "../model/mixedreality_delete_observations_request.h"
#include "../model/mixedreality_enable_observations_request.h"
#include "../model/mixedreality_get_cameras_response.h"
#include "../model/mixedreality_get_mr_sets_response.h"
#include "../model/mixedreality_list_spatial_calibrations_response.h"
#include "../model/mixedreality_select_camera_request.h"
#include "../model/mixedreality_select_spatial_calibration_request.h"


// Capture an observation on the given camera
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealityCaptureObservation(apiClient_t *apiClient, mixedreality_capture_observation_request_t * body );


// Gets the current capture progress, only one capture can run at once
//
d3api_bool_response_t*
MixedRealityAPI_mixedRealityCaptureProgress(apiClient_t *apiClient);


// Delete all observations for a given spatial calibration
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealityDeleteAllObservations(apiClient_t *apiClient, mixedreality_delete_all_observations_request_t * body );


// Pass a list of observation identifiers to delete
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealityDeleteObservations(apiClient_t *apiClient, mixedreality_delete_observations_request_t * body );


// Pass a list of observation identifiers to enable/disable
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealityEnableObservations(apiClient_t *apiClient, mixedreality_enable_observations_request_t * body );


// Returns camera properties of cameras on the current stage
//
mixedreality_get_cameras_response_t*
MixedRealityAPI_mixedRealityGetCameras(apiClient_t *apiClient);


// Returns mixed reality sets on the current stage
//
mixedreality_get_mr_sets_response_t*
MixedRealityAPI_mixedRealityGetMRSets(apiClient_t *apiClient);


// Returns a list of all spatial calibrations
//
mixedreality_list_spatial_calibrations_response_t*
MixedRealityAPI_mixedRealityListSpatialCalibrations(apiClient_t *apiClient);


// Sets the current camera of an MR Set
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealitySelectCamera(apiClient_t *apiClient, mixedreality_select_camera_request_t * body );


// Sets the spatial calibration currently in use by a camera
//
d3api_empty_response_t*
MixedRealityAPI_mixedRealitySelectSpatialCalibration(apiClient_t *apiClient, mixedreality_select_spatial_calibration_request_t * body );



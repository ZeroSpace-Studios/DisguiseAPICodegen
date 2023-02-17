#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/d3api_empty_response.h"
#include "../model/quickcal_line_up_current_pose_request.h"
#include "../model/quickcal_list_reference_points_response.h"
#include "../model/quickcal_reset_line_up_request.h"


// Lineup the current pose for the selected projector according to the selected reference points
//
d3api_empty_response_t*
QuickcalAPI_quickcalLineUpCurrentPose(apiClient_t *apiClient, quickcal_line_up_current_pose_request_t * body );


// Returns a list of all reference points
//
quickcal_list_reference_points_response_t*
QuickcalAPI_quickcalListReferencePoints(apiClient_t *apiClient);


// Resets the lineup of the selected projector
//
d3api_empty_response_t*
QuickcalAPI_quickcalResetLineUp(apiClient_t *apiClient, quickcal_reset_line_up_request_t * body );



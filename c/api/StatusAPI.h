#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/status_get_project_response.h"
#include "../model/status_get_session_response.h"
#include "../model/status_list_health_response.h"
#include "../model/status_list_notifications_response.h"


// Return the project information
//
status_get_project_response_t*
StatusAPI_statusGetProject(apiClient_t *apiClient);


// Return the session config
//
status_get_session_response_t*
StatusAPI_statusGetSession(apiClient_t *apiClient);


// List all health status for the machines in the network
//
status_list_health_response_t*
StatusAPI_statusListHealth(apiClient_t *apiClient);


// List all notifications for the machines in the network
//
status_list_notifications_response_t*
StatusAPI_statusListNotifications(apiClient_t *apiClient);



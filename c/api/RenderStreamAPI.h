#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/d3api_empty_response.h"
#include "../model/renderstream_failover_request.h"
#include "../model/renderstream_get_assigners_response.h"
#include "../model/renderstream_get_layer_config_response.h"
#include "../model/renderstream_get_layer_status_response.h"
#include "../model/renderstream_get_layers_response.h"
#include "../model/renderstream_get_pools_response.h"
#include "../model/renderstream_restart_layers_request.h"
#include "../model/renderstream_start_layers_request.h"
#include "../model/renderstream_stop_layers_request.h"
#include "../model/renderstream_sync_layers_request.h"


// Fail over a single machine
//
d3api_empty_response_t*
RenderStreamAPI_renderStreamFailover(apiClient_t *apiClient, renderstream_failover_request_t * body );


// Returns the RenderStream assigners list
//
renderstream_get_assigners_response_t*
RenderStreamAPI_renderStreamGetAssigners(apiClient_t *apiClient);


// Returns config information for the selected layer
//
renderstream_get_layer_config_response_t*
RenderStreamAPI_renderStreamGetLayerConfig(apiClient_t *apiClient, char * uid , char * name );


// Returns status information for the selected layer
//
renderstream_get_layer_status_response_t*
RenderStreamAPI_renderStreamGetLayerStatus(apiClient_t *apiClient, char * uid , char * name );


// Returns the RenderStream layer list
//
renderstream_get_layers_response_t*
RenderStreamAPI_renderStreamGetLayers(apiClient_t *apiClient);


// Returns the RenderStream pools list
//
renderstream_get_pools_response_t*
RenderStreamAPI_renderStreamGetPools(apiClient_t *apiClient);


// Restarts a workload for the selected layer
//
d3api_empty_response_t*
RenderStreamAPI_renderStreamRestartLayers(apiClient_t *apiClient, renderstream_restart_layers_request_t * body );


// Starts a workload for the selected layer
//
d3api_empty_response_t*
RenderStreamAPI_renderStreamStartLayers(apiClient_t *apiClient, renderstream_start_layers_request_t * body );


// Stops a workload for the selected layer
//
d3api_empty_response_t*
RenderStreamAPI_renderStreamStopLayers(apiClient_t *apiClient, renderstream_stop_layers_request_t * body );


// Syncs a workload for the selected layer
//
d3api_empty_response_t*
RenderStreamAPI_renderStreamSyncLayers(apiClient_t *apiClient, renderstream_sync_layers_request_t * body );



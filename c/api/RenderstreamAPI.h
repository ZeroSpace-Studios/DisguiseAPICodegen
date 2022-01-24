#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/object.h"
#include "../model/renderstream_failover_render_machine_response.h"
#include "../model/renderstream_failover_workload_instance_response.h"
#include "../model/renderstream_get_cluster_response.h"
#include "../model/renderstream_get_render_machine_response.h"
#include "../model/renderstream_get_workload_instance_response.h"
#include "../model/renderstream_get_workload_response.h"
#include "../model/renderstream_list_clusters_response.h"
#include "../model/renderstream_list_render_machines_response.h"
#include "../model/renderstream_list_workloads_response.h"


// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t*
RenderstreamAPI_renderstreamFailoverRenderMachine(apiClient_t *apiClient, char * name );


// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t*
RenderstreamAPI_renderstreamFailoverRenderMachine2(apiClient_t *apiClient, char * name );


// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t*
RenderstreamAPI_renderstreamFailoverWorkloadInstance(apiClient_t *apiClient, char * workloadid , long instanceindex );


// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t*
RenderstreamAPI_renderstreamFailoverWorkloadInstance2(apiClient_t *apiClient, char * workloadid , long instanceindex );


// Get single ClusterPool
//
renderstream_get_cluster_response_t*
RenderstreamAPI_renderstreamGetCluster(apiClient_t *apiClient, char * name );


// Get single RenderstreamMachine
//
renderstream_get_render_machine_response_t*
RenderstreamAPI_renderstreamGetRenderMachine(apiClient_t *apiClient, char * name );


// Get single Workload
//
renderstream_get_workload_response_t*
RenderstreamAPI_renderstreamGetWorkload(apiClient_t *apiClient, char * id );


// Get single Workload Instance
//
renderstream_get_workload_instance_response_t*
RenderstreamAPI_renderstreamGetWorkloadInstance(apiClient_t *apiClient, char * workloadid , long instanceindex );


// List all ClusterPools
//
renderstream_list_clusters_response_t*
RenderstreamAPI_renderstreamListClusters(apiClient_t *apiClient);


// List all RS machines (both current render machines and understudies)
//
renderstream_list_render_machines_response_t*
RenderstreamAPI_renderstreamListRenderMachines(apiClient_t *apiClient);


// List all RS Workloads
//
renderstream_list_workloads_response_t*
RenderstreamAPI_renderstreamListWorkloads(apiClient_t *apiClient);


// Start a workload
//
object_t*
RenderstreamAPI_renderstreamStartWorkload(apiClient_t *apiClient, char * id );


// Stop a workload
//
object_t*
RenderstreamAPI_renderstreamStopWorkload(apiClient_t *apiClient, char * id );


// Sync a workload
//
object_t*
RenderstreamAPI_renderstreamSyncWorkload(apiClient_t *apiClient, char * id );



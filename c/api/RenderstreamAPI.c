#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "RenderstreamAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t*
RenderstreamAPI_renderstreamFailoverRenderMachine(apiClient_t *apiClient, char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/failovermachine/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/failovermachine/{name}");


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_failover_render_machine_response_t *elementToReturn = renderstream_failover_render_machine_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Fail over a single RenderstreamMachine, and all its workload instances
//
renderstream_failover_render_machine_response_t*
RenderstreamAPI_renderstreamFailoverRenderMachine2(apiClient_t *apiClient, char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/failovermachine/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/failovermachine/{name}");


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_failover_render_machine_response_t *elementToReturn = renderstream_failover_render_machine_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t*
RenderstreamAPI_renderstreamFailoverWorkloadInstance(apiClient_t *apiClient, char * workloadid , long instanceindex )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/failoverinstance/{workloadid}/{instanceindex}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/failoverinstance/{workloadid}/{instanceindex}");


    // Path Params
    long sizeOfPathParams_workloadid = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ workloadid }");
    if(workloadid == NULL) {
        goto end;
    }
    char* localVarToReplace_workloadid = malloc(sizeOfPathParams_workloadid);
    sprintf(localVarToReplace_workloadid, "{%s}", "workloadid");

    localVarPath = strReplace(localVarPath, localVarToReplace_workloadid, workloadid);

    // Path Params
    long sizeOfPathParams_instanceindex = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ instanceindex }");
    if(instanceindex == 0){
        goto end;
    }
    char* localVarToReplace_instanceindex = malloc(sizeOfPathParams_instanceindex);
    snprintf(localVarToReplace_instanceindex, sizeOfPathParams_instanceindex, "{%s}", "instanceindex");

    char localVarBuff_instanceindex[256];
    intToStr(localVarBuff_instanceindex, instanceindex);

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceindex, localVarBuff_instanceindex);



    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_failover_workload_instance_response_t *elementToReturn = renderstream_failover_workload_instance_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_workloadid);
    free(localVarToReplace_instanceindex);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Fail over a single workload instance
//
renderstream_failover_workload_instance_response_t*
RenderstreamAPI_renderstreamFailoverWorkloadInstance2(apiClient_t *apiClient, char * workloadid , long instanceindex )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/failoverinstance/{workloadid}/{instanceindex}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/failoverinstance/{workloadid}/{instanceindex}");


    // Path Params
    long sizeOfPathParams_workloadid = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ workloadid }");
    if(workloadid == NULL) {
        goto end;
    }
    char* localVarToReplace_workloadid = malloc(sizeOfPathParams_workloadid);
    sprintf(localVarToReplace_workloadid, "{%s}", "workloadid");

    localVarPath = strReplace(localVarPath, localVarToReplace_workloadid, workloadid);

    // Path Params
    long sizeOfPathParams_instanceindex = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ instanceindex }");
    if(instanceindex == 0){
        goto end;
    }
    char* localVarToReplace_instanceindex = malloc(sizeOfPathParams_instanceindex);
    snprintf(localVarToReplace_instanceindex, sizeOfPathParams_instanceindex, "{%s}", "instanceindex");

    char localVarBuff_instanceindex[256];
    intToStr(localVarBuff_instanceindex, instanceindex);

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceindex, localVarBuff_instanceindex);



    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_failover_workload_instance_response_t *elementToReturn = renderstream_failover_workload_instance_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_workloadid);
    free(localVarToReplace_instanceindex);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get single ClusterPool
//
renderstream_get_cluster_response_t*
RenderstreamAPI_renderstreamGetCluster(apiClient_t *apiClient, char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/clusters/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/clusters/{name}");


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_get_cluster_response_t *elementToReturn = renderstream_get_cluster_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get single RenderstreamMachine
//
renderstream_get_render_machine_response_t*
RenderstreamAPI_renderstreamGetRenderMachine(apiClient_t *apiClient, char * name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/machines/{name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/machines/{name}");


    // Path Params
    long sizeOfPathParams_name = strlen(name)+3 + strlen("{ name }");
    if(name == NULL) {
        goto end;
    }
    char* localVarToReplace_name = malloc(sizeOfPathParams_name);
    sprintf(localVarToReplace_name, "{%s}", "name");

    localVarPath = strReplace(localVarPath, localVarToReplace_name, name);


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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_get_render_machine_response_t *elementToReturn = renderstream_get_render_machine_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get single Workload
//
renderstream_get_workload_response_t*
RenderstreamAPI_renderstreamGetWorkload(apiClient_t *apiClient, char * id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloads/{id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloads/{id}");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_get_workload_response_t *elementToReturn = renderstream_get_workload_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get single Workload Instance
//
renderstream_get_workload_instance_response_t*
RenderstreamAPI_renderstreamGetWorkloadInstance(apiClient_t *apiClient, char * workloadid , long instanceindex )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloadinstances/{workloadid}/{instanceindex}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloadinstances/{workloadid}/{instanceindex}");


    // Path Params
    long sizeOfPathParams_workloadid = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ workloadid }");
    if(workloadid == NULL) {
        goto end;
    }
    char* localVarToReplace_workloadid = malloc(sizeOfPathParams_workloadid);
    sprintf(localVarToReplace_workloadid, "{%s}", "workloadid");

    localVarPath = strReplace(localVarPath, localVarToReplace_workloadid, workloadid);

    // Path Params
    long sizeOfPathParams_instanceindex = strlen(workloadid)+3 + sizeof(instanceindex)+3 + strlen("{ instanceindex }");
    if(instanceindex == 0){
        goto end;
    }
    char* localVarToReplace_instanceindex = malloc(sizeOfPathParams_instanceindex);
    snprintf(localVarToReplace_instanceindex, sizeOfPathParams_instanceindex, "{%s}", "instanceindex");

    char localVarBuff_instanceindex[256];
    intToStr(localVarBuff_instanceindex, instanceindex);

    localVarPath = strReplace(localVarPath, localVarToReplace_instanceindex, localVarBuff_instanceindex);



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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_get_workload_instance_response_t *elementToReturn = renderstream_get_workload_instance_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_workloadid);
    free(localVarToReplace_instanceindex);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// List all ClusterPools
//
renderstream_list_clusters_response_t*
RenderstreamAPI_renderstreamListClusters(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/clusters")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/clusters");



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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_list_clusters_response_t *elementToReturn = renderstream_list_clusters_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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

// List all RS machines (both current render machines and understudies)
//
renderstream_list_render_machines_response_t*
RenderstreamAPI_renderstreamListRenderMachines(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/machines")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/machines");



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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_list_render_machines_response_t *elementToReturn = renderstream_list_render_machines_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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

// List all RS Workloads
//
renderstream_list_workloads_response_t*
RenderstreamAPI_renderstreamListWorkloads(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloads")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloads");



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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    renderstream_list_workloads_response_t *elementToReturn = renderstream_list_workloads_response_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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

// Start a workload
//
object_t*
RenderstreamAPI_renderstreamStartWorkload(apiClient_t *apiClient, char * id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloads/{id}/start")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloads/{id}/start");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Stop a workload
//
object_t*
RenderstreamAPI_renderstreamStopWorkload(apiClient_t *apiClient, char * id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloads/{id}/stop")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloads/{id}/stop");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Sync a workload
//
object_t*
RenderstreamAPI_renderstreamSyncWorkload(apiClient_t *apiClient, char * id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_create();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/renderstream/workloads/{id}/sync")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/renderstream/workloads/{id}/sync");


    // Path Params
    long sizeOfPathParams_id = strlen(id)+3 + strlen("{ id }");
    if(id == NULL) {
        goto end;
    }
    char* localVarToReplace_id = malloc(sizeOfPathParams_id);
    sprintf(localVarToReplace_id, "{%s}", "id");

    localVarPath = strReplace(localVarPath, localVarToReplace_id, id);


    list_addElement(localVarHeaderType,"application/json"); //produces
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
    cJSON *RenderstreamAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    object_t *elementToReturn = object_parseFromJSON(RenderstreamAPIlocalVarJSON);
    cJSON_Delete(RenderstreamAPIlocalVarJSON);
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
    free(localVarToReplace_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}


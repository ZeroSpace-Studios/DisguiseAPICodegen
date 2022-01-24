#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_list_clusters_response.h"



renderstream_list_clusters_response_t *renderstream_list_clusters_response_create(
    list_t *clusters
    ) {
    renderstream_list_clusters_response_t *renderstream_list_clusters_response_local_var = malloc(sizeof(renderstream_list_clusters_response_t));
    if (!renderstream_list_clusters_response_local_var) {
        return NULL;
    }
    renderstream_list_clusters_response_local_var->clusters = clusters;

    return renderstream_list_clusters_response_local_var;
}


void renderstream_list_clusters_response_free(renderstream_list_clusters_response_t *renderstream_list_clusters_response) {
    if(NULL == renderstream_list_clusters_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_list_clusters_response->clusters) {
        list_ForEach(listEntry, renderstream_list_clusters_response->clusters) {
            renderstream_cluster_info_free(listEntry->data);
        }
        list_free(renderstream_list_clusters_response->clusters);
        renderstream_list_clusters_response->clusters = NULL;
    }
    free(renderstream_list_clusters_response);
}

cJSON *renderstream_list_clusters_response_convertToJSON(renderstream_list_clusters_response_t *renderstream_list_clusters_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_list_clusters_response->clusters
    if(renderstream_list_clusters_response->clusters) { 
    cJSON *clusters = cJSON_AddArrayToObject(item, "clusters");
    if(clusters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *clustersListEntry;
    if (renderstream_list_clusters_response->clusters) {
    list_ForEach(clustersListEntry, renderstream_list_clusters_response->clusters) {
    cJSON *itemLocal = renderstream_cluster_info_convertToJSON(clustersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(clusters, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_list_clusters_response_t *renderstream_list_clusters_response_parseFromJSON(cJSON *renderstream_list_clusters_responseJSON){

    renderstream_list_clusters_response_t *renderstream_list_clusters_response_local_var = NULL;

    // renderstream_list_clusters_response->clusters
    cJSON *clusters = cJSON_GetObjectItemCaseSensitive(renderstream_list_clusters_responseJSON, "clusters");
    list_t *clustersList;
    if (clusters) { 
    cJSON *clusters_local_nonprimitive;
    if(!cJSON_IsArray(clusters)){
        goto end; //nonprimitive container
    }

    clustersList = list_create();

    cJSON_ArrayForEach(clusters_local_nonprimitive,clusters )
    {
        if(!cJSON_IsObject(clusters_local_nonprimitive)){
            goto end;
        }
        renderstream_cluster_info_t *clustersItem = renderstream_cluster_info_parseFromJSON(clusters_local_nonprimitive);

        list_addElement(clustersList, clustersItem);
    }
    }


    renderstream_list_clusters_response_local_var = renderstream_list_clusters_response_create (
        clusters ? clustersList : NULL
        );

    return renderstream_list_clusters_response_local_var;
end:
    return NULL;

}

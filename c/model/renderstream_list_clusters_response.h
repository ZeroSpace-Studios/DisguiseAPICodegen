/*
 * renderstream_list_clusters_response.h
 *
 * 
 */

#ifndef _renderstream_list_clusters_response_H_
#define _renderstream_list_clusters_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_list_clusters_response_t renderstream_list_clusters_response_t;

#include "renderstream_cluster_info.h"



typedef struct renderstream_list_clusters_response_t {
    list_t *clusters; //nonprimitive container

} renderstream_list_clusters_response_t;

renderstream_list_clusters_response_t *renderstream_list_clusters_response_create(
    list_t *clusters
);

void renderstream_list_clusters_response_free(renderstream_list_clusters_response_t *renderstream_list_clusters_response);

renderstream_list_clusters_response_t *renderstream_list_clusters_response_parseFromJSON(cJSON *renderstream_list_clusters_responseJSON);

cJSON *renderstream_list_clusters_response_convertToJSON(renderstream_list_clusters_response_t *renderstream_list_clusters_response);

#endif /* _renderstream_list_clusters_response_H_ */


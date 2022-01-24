/*
 * renderstream_cluster_info.h
 *
 * 
 */

#ifndef _renderstream_cluster_info_H_
#define _renderstream_cluster_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_cluster_info_t renderstream_cluster_info_t;

#include "renderstream_render_machine_info.h"



typedef struct renderstream_cluster_info_t {
    char *name; // string
    list_t *render_machines; //nonprimitive container
    struct renderstream_render_machine_info_t *content_source_machine; //model
    list_t *understudies; //nonprimitive container

} renderstream_cluster_info_t;

renderstream_cluster_info_t *renderstream_cluster_info_create(
    char *name,
    list_t *render_machines,
    renderstream_render_machine_info_t *content_source_machine,
    list_t *understudies
);

void renderstream_cluster_info_free(renderstream_cluster_info_t *renderstream_cluster_info);

renderstream_cluster_info_t *renderstream_cluster_info_parseFromJSON(cJSON *renderstream_cluster_infoJSON);

cJSON *renderstream_cluster_info_convertToJSON(renderstream_cluster_info_t *renderstream_cluster_info);

#endif /* _renderstream_cluster_info_H_ */


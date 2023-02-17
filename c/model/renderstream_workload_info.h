/*
 * renderstream_workload_info.h
 *
 * 
 */

#ifndef _renderstream_workload_info_H_
#define _renderstream_workload_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_workload_info_t renderstream_workload_info_t;

#include "renderstream_workload_instance_info.h"



typedef struct renderstream_workload_info_t {
    char *uid; // string
    char *name; // string
    list_t *instances; //nonprimitive container

} renderstream_workload_info_t;

renderstream_workload_info_t *renderstream_workload_info_create(
    char *uid,
    char *name,
    list_t *instances
);

void renderstream_workload_info_free(renderstream_workload_info_t *renderstream_workload_info);

renderstream_workload_info_t *renderstream_workload_info_parseFromJSON(cJSON *renderstream_workload_infoJSON);

cJSON *renderstream_workload_info_convertToJSON(renderstream_workload_info_t *renderstream_workload_info);

#endif /* _renderstream_workload_info_H_ */


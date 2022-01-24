/*
 * renderstream_failover_info.h
 *
 * 
 */

#ifndef _renderstream_failover_info_H_
#define _renderstream_failover_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_failover_info_t renderstream_failover_info_t;

#include "renderstream_stream_info.h"



typedef struct renderstream_failover_info_t {
    char *workload_id; // string
    long failed_instance_index; //numeric
    long covering_instance_index; //numeric
    char *covering_machine_name; // string
    char *error_string; // string
    list_t *streams; //nonprimitive container

} renderstream_failover_info_t;

renderstream_failover_info_t *renderstream_failover_info_create(
    char *workload_id,
    long failed_instance_index,
    long covering_instance_index,
    char *covering_machine_name,
    char *error_string,
    list_t *streams
);

void renderstream_failover_info_free(renderstream_failover_info_t *renderstream_failover_info);

renderstream_failover_info_t *renderstream_failover_info_parseFromJSON(cJSON *renderstream_failover_infoJSON);

cJSON *renderstream_failover_info_convertToJSON(renderstream_failover_info_t *renderstream_failover_info);

#endif /* _renderstream_failover_info_H_ */


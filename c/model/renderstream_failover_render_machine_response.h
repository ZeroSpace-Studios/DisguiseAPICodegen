/*
 * renderstream_failover_render_machine_response.h
 *
 * 
 */

#ifndef _renderstream_failover_render_machine_response_H_
#define _renderstream_failover_render_machine_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_failover_render_machine_response_t renderstream_failover_render_machine_response_t;

#include "renderstream_failover_info.h"



typedef struct renderstream_failover_render_machine_response_t {
    int all_instances_failedover; //boolean
    list_t *failover_mappings; //nonprimitive container

} renderstream_failover_render_machine_response_t;

renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_create(
    int all_instances_failedover,
    list_t *failover_mappings
);

void renderstream_failover_render_machine_response_free(renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response);

renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response_parseFromJSON(cJSON *renderstream_failover_render_machine_responseJSON);

cJSON *renderstream_failover_render_machine_response_convertToJSON(renderstream_failover_render_machine_response_t *renderstream_failover_render_machine_response);

#endif /* _renderstream_failover_render_machine_response_H_ */


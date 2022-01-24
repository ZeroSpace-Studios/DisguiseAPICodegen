/*
 * renderstream_list_render_machines_response.h
 *
 * 
 */

#ifndef _renderstream_list_render_machines_response_H_
#define _renderstream_list_render_machines_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_list_render_machines_response_t renderstream_list_render_machines_response_t;

#include "renderstream_render_machine_info.h"



typedef struct renderstream_list_render_machines_response_t {
    list_t *machines; //nonprimitive container

} renderstream_list_render_machines_response_t;

renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_create(
    list_t *machines
);

void renderstream_list_render_machines_response_free(renderstream_list_render_machines_response_t *renderstream_list_render_machines_response);

renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_parseFromJSON(cJSON *renderstream_list_render_machines_responseJSON);

cJSON *renderstream_list_render_machines_response_convertToJSON(renderstream_list_render_machines_response_t *renderstream_list_render_machines_response);

#endif /* _renderstream_list_render_machines_response_H_ */


/*
 * render_machine_info_status.h
 *
 * 
 */

#ifndef _render_machine_info_status_H_
#define _render_machine_info_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct render_machine_info_status_t render_machine_info_status_t;


// Enum  for render_machine_info_status

typedef enum { d3_api_render_machine_info_status__NULL = 0, d3_api_render_machine_info_status__UNKNOWN, d3_api_render_machine_info_status__OFFLINE, d3_api_render_machine_info_status__OK, d3_api_render_machine_info_status__STANDBY, d3_api_render_machine_info_status__FAILED } d3_api_render_machine_info_status__e;

char* render_machine_info_status_render_machine_info_status_ToString(d3_api_render_machine_info_status__e render_machine_info_status);

d3_api_render_machine_info_status__e render_machine_info_status_render_machine_info_status_FromString(char* render_machine_info_status);

//cJSON *render_machine_info_status_render_machine_info_status_convertToJSON(d3_api_render_machine_info_status__e render_machine_info_status);

//d3_api_render_machine_info_status__e render_machine_info_status_render_machine_info_status_parseFromJSON(cJSON *render_machine_info_statusJSON);

#endif /* _render_machine_info_status_H_ */


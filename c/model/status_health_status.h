/*
 * status_health_status.h
 *
 * 
 */

#ifndef _status_health_status_H_
#define _status_health_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_health_status_t status_health_status_t;

#include "status_health_states.h"



typedef struct status_health_status_t {
    float average_fps; //numeric
    float video_dropped_frames; //numeric
    float video_missed_frames; //numeric
    list_t *states; //nonprimitive container

} status_health_status_t;

status_health_status_t *status_health_status_create(
    float average_fps,
    float video_dropped_frames,
    float video_missed_frames,
    list_t *states
);

void status_health_status_free(status_health_status_t *status_health_status);

status_health_status_t *status_health_status_parseFromJSON(cJSON *status_health_statusJSON);

cJSON *status_health_status_convertToJSON(status_health_status_t *status_health_status);

#endif /* _status_health_status_H_ */


/*
 * v1_camera_info.h
 *
 * 
 */

#ifndef _v1_camera_info_H_
#define _v1_camera_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_camera_info_t v1_camera_info_t;

#include "v1_observation_info.h"



typedef struct v1_camera_info_t {
    char *uid; // string
    char *name; // string
    list_t *observations; //nonprimitive container

} v1_camera_info_t;

v1_camera_info_t *v1_camera_info_create(
    char *uid,
    char *name,
    list_t *observations
);

void v1_camera_info_free(v1_camera_info_t *v1_camera_info);

v1_camera_info_t *v1_camera_info_parseFromJSON(cJSON *v1_camera_infoJSON);

cJSON *v1_camera_info_convertToJSON(v1_camera_info_t *v1_camera_info);

#endif /* _v1_camera_info_H_ */


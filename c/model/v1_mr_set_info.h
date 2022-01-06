/*
 * v1_mr_set_info.h
 *
 * 
 */

#ifndef _v1_mr_set_info_H_
#define _v1_mr_set_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v1_mr_set_info_t v1_mr_set_info_t;

#include "v1_camera_info.h"



typedef struct v1_mr_set_info_t {
    char *uid; // string
    char *name; // string
    struct v1_camera_info_t *target_camera; //model

} v1_mr_set_info_t;

v1_mr_set_info_t *v1_mr_set_info_create(
    char *uid,
    char *name,
    v1_camera_info_t *target_camera
);

void v1_mr_set_info_free(v1_mr_set_info_t *v1_mr_set_info);

v1_mr_set_info_t *v1_mr_set_info_parseFromJSON(cJSON *v1_mr_set_infoJSON);

cJSON *v1_mr_set_info_convertToJSON(v1_mr_set_info_t *v1_mr_set_info);

#endif /* _v1_mr_set_info_H_ */


/*
 * mixedreality_camera_identity_info.h
 *
 * 
 */

#ifndef _mixedreality_camera_identity_info_H_
#define _mixedreality_camera_identity_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_camera_identity_info_t mixedreality_camera_identity_info_t;




typedef struct mixedreality_camera_identity_info_t {
    char *uid; // string
    char *name; // string

} mixedreality_camera_identity_info_t;

mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_create(
    char *uid,
    char *name
);

void mixedreality_camera_identity_info_free(mixedreality_camera_identity_info_t *mixedreality_camera_identity_info);

mixedreality_camera_identity_info_t *mixedreality_camera_identity_info_parseFromJSON(cJSON *mixedreality_camera_identity_infoJSON);

cJSON *mixedreality_camera_identity_info_convertToJSON(mixedreality_camera_identity_info_t *mixedreality_camera_identity_info);

#endif /* _mixedreality_camera_identity_info_H_ */


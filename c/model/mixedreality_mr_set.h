/*
 * mixedreality_mr_set.h
 *
 * 
 */

#ifndef _mixedreality_mr_set_H_
#define _mixedreality_mr_set_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_mr_set_t mixedreality_mr_set_t;

#include "mixedreality_camera_identity_info.h"



typedef struct mixedreality_mr_set_t {
    char *uid; // string
    char *name; // string
    struct mixedreality_camera_identity_info_t *current_camera; //model
    int is_camera_override; //boolean

} mixedreality_mr_set_t;

mixedreality_mr_set_t *mixedreality_mr_set_create(
    char *uid,
    char *name,
    mixedreality_camera_identity_info_t *current_camera,
    int is_camera_override
);

void mixedreality_mr_set_free(mixedreality_mr_set_t *mixedreality_mr_set);

mixedreality_mr_set_t *mixedreality_mr_set_parseFromJSON(cJSON *mixedreality_mr_setJSON);

cJSON *mixedreality_mr_set_convertToJSON(mixedreality_mr_set_t *mixedreality_mr_set);

#endif /* _mixedreality_mr_set_H_ */


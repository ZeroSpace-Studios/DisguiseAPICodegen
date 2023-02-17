/*
 * mixedreality_mr_set_info.h
 *
 * 
 */

#ifndef _mixedreality_mr_set_info_H_
#define _mixedreality_mr_set_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct mixedreality_mr_set_info_t mixedreality_mr_set_info_t;




typedef struct mixedreality_mr_set_info_t {
    char *uid; // string
    char *name; // string

} mixedreality_mr_set_info_t;

mixedreality_mr_set_info_t *mixedreality_mr_set_info_create(
    char *uid,
    char *name
);

void mixedreality_mr_set_info_free(mixedreality_mr_set_info_t *mixedreality_mr_set_info);

mixedreality_mr_set_info_t *mixedreality_mr_set_info_parseFromJSON(cJSON *mixedreality_mr_set_infoJSON);

cJSON *mixedreality_mr_set_info_convertToJSON(mixedreality_mr_set_info_t *mixedreality_mr_set_info);

#endif /* _mixedreality_mr_set_info_H_ */


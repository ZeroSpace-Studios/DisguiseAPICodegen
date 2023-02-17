/*
 * quickcal_reference_point_info.h
 *
 * 
 */

#ifndef _quickcal_reference_point_info_H_
#define _quickcal_reference_point_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickcal_reference_point_info_t quickcal_reference_point_info_t;




typedef struct quickcal_reference_point_info_t {
    char *uid; // string
    char *name; // string

} quickcal_reference_point_info_t;

quickcal_reference_point_info_t *quickcal_reference_point_info_create(
    char *uid,
    char *name
);

void quickcal_reference_point_info_free(quickcal_reference_point_info_t *quickcal_reference_point_info);

quickcal_reference_point_info_t *quickcal_reference_point_info_parseFromJSON(cJSON *quickcal_reference_point_infoJSON);

cJSON *quickcal_reference_point_info_convertToJSON(quickcal_reference_point_info_t *quickcal_reference_point_info);

#endif /* _quickcal_reference_point_info_H_ */


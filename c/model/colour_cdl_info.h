/*
 * colour_cdl_info.h
 *
 * 
 */

#ifndef _colour_cdl_info_H_
#define _colour_cdl_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct colour_cdl_info_t colour_cdl_info_t;

#include "d3api_vec3_float.h"



typedef struct colour_cdl_info_t {
    char *uid; // string
    char *name; // string
    struct d3api_vec3_float_t *slope; //model
    struct d3api_vec3_float_t *offset; //model
    struct d3api_vec3_float_t *power; //model
    float saturation; //numeric

} colour_cdl_info_t;

colour_cdl_info_t *colour_cdl_info_create(
    char *uid,
    char *name,
    d3api_vec3_float_t *slope,
    d3api_vec3_float_t *offset,
    d3api_vec3_float_t *power,
    float saturation
);

void colour_cdl_info_free(colour_cdl_info_t *colour_cdl_info);

colour_cdl_info_t *colour_cdl_info_parseFromJSON(cJSON *colour_cdl_infoJSON);

cJSON *colour_cdl_info_convertToJSON(colour_cdl_info_t *colour_cdl_info);

#endif /* _colour_cdl_info_H_ */


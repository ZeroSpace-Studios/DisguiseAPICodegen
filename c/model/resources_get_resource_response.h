/*
 * resources_get_resource_response.h
 *
 * 
 */

#ifndef _resources_get_resource_response_H_
#define _resources_get_resource_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resources_get_resource_response_t resources_get_resource_response_t;

#include "resources_resource_info.h"



typedef struct resources_get_resource_response_t {
    struct resources_resource_info_t *result; //model

} resources_get_resource_response_t;

resources_get_resource_response_t *resources_get_resource_response_create(
    resources_resource_info_t *result
);

void resources_get_resource_response_free(resources_get_resource_response_t *resources_get_resource_response);

resources_get_resource_response_t *resources_get_resource_response_parseFromJSON(cJSON *resources_get_resource_responseJSON);

cJSON *resources_get_resource_response_convertToJSON(resources_get_resource_response_t *resources_get_resource_response);

#endif /* _resources_get_resource_response_H_ */


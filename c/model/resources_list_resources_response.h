/*
 * resources_list_resources_response.h
 *
 * 
 */

#ifndef _resources_list_resources_response_H_
#define _resources_list_resources_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resources_list_resources_response_t resources_list_resources_response_t;

#include "resources_resource_info.h"



typedef struct resources_list_resources_response_t {
    list_t *result; //nonprimitive container

} resources_list_resources_response_t;

resources_list_resources_response_t *resources_list_resources_response_create(
    list_t *result
);

void resources_list_resources_response_free(resources_list_resources_response_t *resources_list_resources_response);

resources_list_resources_response_t *resources_list_resources_response_parseFromJSON(cJSON *resources_list_resources_responseJSON);

cJSON *resources_list_resources_response_convertToJSON(resources_list_resources_response_t *resources_list_resources_response);

#endif /* _resources_list_resources_response_H_ */


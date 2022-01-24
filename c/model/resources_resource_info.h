/*
 * resources_resource_info.h
 *
 * 
 */

#ifndef _resources_resource_info_H_
#define _resources_resource_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct resources_resource_info_t resources_resource_info_t;




typedef struct resources_resource_info_t {
    char *uid; // string
    char *name; // string
    char *path; // string
    char *type; // string

} resources_resource_info_t;

resources_resource_info_t *resources_resource_info_create(
    char *uid,
    char *name,
    char *path,
    char *type
);

void resources_resource_info_free(resources_resource_info_t *resources_resource_info);

resources_resource_info_t *resources_resource_info_parseFromJSON(cJSON *resources_resource_infoJSON);

cJSON *resources_resource_info_convertToJSON(resources_resource_info_t *resources_resource_info);

#endif /* _resources_resource_info_H_ */


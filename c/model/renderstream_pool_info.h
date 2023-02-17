/*
 * renderstream_pool_info.h
 *
 * 
 */

#ifndef _renderstream_pool_info_H_
#define _renderstream_pool_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_pool_info_t renderstream_pool_info_t;

#include "renderstream_machine_info.h"



typedef struct renderstream_pool_info_t {
    char *uid; // string
    char *name; // string
    list_t *machines; //nonprimitive container
    list_t *understudies; //nonprimitive container

} renderstream_pool_info_t;

renderstream_pool_info_t *renderstream_pool_info_create(
    char *uid,
    char *name,
    list_t *machines,
    list_t *understudies
);

void renderstream_pool_info_free(renderstream_pool_info_t *renderstream_pool_info);

renderstream_pool_info_t *renderstream_pool_info_parseFromJSON(cJSON *renderstream_pool_infoJSON);

cJSON *renderstream_pool_info_convertToJSON(renderstream_pool_info_t *renderstream_pool_info);

#endif /* _renderstream_pool_info_H_ */


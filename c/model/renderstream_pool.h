/*
 * renderstream_pool.h
 *
 * 
 */

#ifndef _renderstream_pool_H_
#define _renderstream_pool_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_pool_t renderstream_pool_t;




typedef struct renderstream_pool_t {
    char *uid; // string
    char *name; // string

} renderstream_pool_t;

renderstream_pool_t *renderstream_pool_create(
    char *uid,
    char *name
);

void renderstream_pool_free(renderstream_pool_t *renderstream_pool);

renderstream_pool_t *renderstream_pool_parseFromJSON(cJSON *renderstream_poolJSON);

cJSON *renderstream_pool_convertToJSON(renderstream_pool_t *renderstream_pool);

#endif /* _renderstream_pool_H_ */


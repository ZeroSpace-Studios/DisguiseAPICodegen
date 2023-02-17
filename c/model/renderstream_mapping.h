/*
 * renderstream_mapping.h
 *
 * 
 */

#ifndef _renderstream_mapping_H_
#define _renderstream_mapping_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_mapping_t renderstream_mapping_t;




typedef struct renderstream_mapping_t {
    char *uid; // string
    char *name; // string

} renderstream_mapping_t;

renderstream_mapping_t *renderstream_mapping_create(
    char *uid,
    char *name
);

void renderstream_mapping_free(renderstream_mapping_t *renderstream_mapping);

renderstream_mapping_t *renderstream_mapping_parseFromJSON(cJSON *renderstream_mappingJSON);

cJSON *renderstream_mapping_convertToJSON(renderstream_mapping_t *renderstream_mapping);

#endif /* _renderstream_mapping_H_ */


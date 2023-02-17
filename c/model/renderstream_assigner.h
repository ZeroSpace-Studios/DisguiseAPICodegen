/*
 * renderstream_assigner.h
 *
 * 
 */

#ifndef _renderstream_assigner_H_
#define _renderstream_assigner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_assigner_t renderstream_assigner_t;




typedef struct renderstream_assigner_t {
    char *uid; // string
    char *name; // string

} renderstream_assigner_t;

renderstream_assigner_t *renderstream_assigner_create(
    char *uid,
    char *name
);

void renderstream_assigner_free(renderstream_assigner_t *renderstream_assigner);

renderstream_assigner_t *renderstream_assigner_parseFromJSON(cJSON *renderstream_assignerJSON);

cJSON *renderstream_assigner_convertToJSON(renderstream_assigner_t *renderstream_assigner);

#endif /* _renderstream_assigner_H_ */


/*
 * renderstream_clipping_region.h
 *
 * 
 */

#ifndef _renderstream_clipping_region_H_
#define _renderstream_clipping_region_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_clipping_region_t renderstream_clipping_region_t;




typedef struct renderstream_clipping_region_t {
    float left; //numeric
    float right; //numeric
    float top; //numeric
    float bottom; //numeric

} renderstream_clipping_region_t;

renderstream_clipping_region_t *renderstream_clipping_region_create(
    float left,
    float right,
    float top,
    float bottom
);

void renderstream_clipping_region_free(renderstream_clipping_region_t *renderstream_clipping_region);

renderstream_clipping_region_t *renderstream_clipping_region_parseFromJSON(cJSON *renderstream_clipping_regionJSON);

cJSON *renderstream_clipping_region_convertToJSON(renderstream_clipping_region_t *renderstream_clipping_region);

#endif /* _renderstream_clipping_region_H_ */


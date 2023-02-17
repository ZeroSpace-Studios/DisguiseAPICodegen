/*
 * renderstream_asset.h
 *
 * 
 */

#ifndef _renderstream_asset_H_
#define _renderstream_asset_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_asset_t renderstream_asset_t;




typedef struct renderstream_asset_t {
    char *uid; // string
    char *name; // string

} renderstream_asset_t;

renderstream_asset_t *renderstream_asset_create(
    char *uid,
    char *name
);

void renderstream_asset_free(renderstream_asset_t *renderstream_asset);

renderstream_asset_t *renderstream_asset_parseFromJSON(cJSON *renderstream_assetJSON);

cJSON *renderstream_asset_convertToJSON(renderstream_asset_t *renderstream_asset);

#endif /* _renderstream_asset_H_ */


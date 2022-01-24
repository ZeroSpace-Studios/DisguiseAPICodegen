/*
 * renderstream_asset_info.h
 *
 * 
 */

#ifndef _renderstream_asset_info_H_
#define _renderstream_asset_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_asset_info_t renderstream_asset_info_t;




typedef struct renderstream_asset_info_t {
    char *name; // string
    char *content_source_machine_name; // string

} renderstream_asset_info_t;

renderstream_asset_info_t *renderstream_asset_info_create(
    char *name,
    char *content_source_machine_name
);

void renderstream_asset_info_free(renderstream_asset_info_t *renderstream_asset_info);

renderstream_asset_info_t *renderstream_asset_info_parseFromJSON(cJSON *renderstream_asset_infoJSON);

cJSON *renderstream_asset_info_convertToJSON(renderstream_asset_info_t *renderstream_asset_info);

#endif /* _renderstream_asset_info_H_ */


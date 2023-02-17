/*
 * renderstream_get_layer_config_result.h
 *
 * 
 */

#ifndef _renderstream_get_layer_config_result_H_
#define _renderstream_get_layer_config_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_get_layer_config_result_t renderstream_get_layer_config_result_t;

#include "renderstream_asset.h"
#include "renderstream_assigner.h"
#include "renderstream_channel_mapping_info.h"
#include "renderstream_pool.h"



typedef struct renderstream_get_layer_config_result_t {
    int framerate_fraction_divisor; //numeric
    struct renderstream_asset_t *asset; //model
    struct renderstream_pool_t *pool; //model
    list_t *channel_mappings; //nonprimitive container
    struct renderstream_assigner_t *default_assigner; //model

} renderstream_get_layer_config_result_t;

renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_create(
    int framerate_fraction_divisor,
    renderstream_asset_t *asset,
    renderstream_pool_t *pool,
    list_t *channel_mappings,
    renderstream_assigner_t *default_assigner
);

void renderstream_get_layer_config_result_free(renderstream_get_layer_config_result_t *renderstream_get_layer_config_result);

renderstream_get_layer_config_result_t *renderstream_get_layer_config_result_parseFromJSON(cJSON *renderstream_get_layer_config_resultJSON);

cJSON *renderstream_get_layer_config_result_convertToJSON(renderstream_get_layer_config_result_t *renderstream_get_layer_config_result);

#endif /* _renderstream_get_layer_config_result_H_ */


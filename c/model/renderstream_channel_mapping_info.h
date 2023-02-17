/*
 * renderstream_channel_mapping_info.h
 *
 * 
 */

#ifndef _renderstream_channel_mapping_info_H_
#define _renderstream_channel_mapping_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_channel_mapping_info_t renderstream_channel_mapping_info_t;

#include "renderstream_assigner.h"
#include "renderstream_mapping.h"



typedef struct renderstream_channel_mapping_info_t {
    char *channel; // string
    struct renderstream_mapping_t *mapping; //model
    struct renderstream_assigner_t *assigner; //model

} renderstream_channel_mapping_info_t;

renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_create(
    char *channel,
    renderstream_mapping_t *mapping,
    renderstream_assigner_t *assigner
);

void renderstream_channel_mapping_info_free(renderstream_channel_mapping_info_t *renderstream_channel_mapping_info);

renderstream_channel_mapping_info_t *renderstream_channel_mapping_info_parseFromJSON(cJSON *renderstream_channel_mapping_infoJSON);

cJSON *renderstream_channel_mapping_info_convertToJSON(renderstream_channel_mapping_info_t *renderstream_channel_mapping_info);

#endif /* _renderstream_channel_mapping_info_H_ */


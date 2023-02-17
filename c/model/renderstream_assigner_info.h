/*
 * renderstream_assigner_info.h
 *
 * 
 */

#ifndef _renderstream_assigner_info_H_
#define _renderstream_assigner_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_assigner_info_t renderstream_assigner_info_t;

#include "renderstream_network_info.h"
#include "renderstream_transport_info.h"



typedef struct renderstream_assigner_info_t {
    char *uid; // string
    char *name; // string
    struct renderstream_transport_info_t *transport; //model
    int alpha; //boolean
    int overlap_pixels; //numeric
    int padding_pixels; //numeric
    struct renderstream_network_info_t *preferred_network; //model

} renderstream_assigner_info_t;

renderstream_assigner_info_t *renderstream_assigner_info_create(
    char *uid,
    char *name,
    renderstream_transport_info_t *transport,
    int alpha,
    int overlap_pixels,
    int padding_pixels,
    renderstream_network_info_t *preferred_network
);

void renderstream_assigner_info_free(renderstream_assigner_info_t *renderstream_assigner_info);

renderstream_assigner_info_t *renderstream_assigner_info_parseFromJSON(cJSON *renderstream_assigner_infoJSON);

cJSON *renderstream_assigner_info_convertToJSON(renderstream_assigner_info_t *renderstream_assigner_info);

#endif /* _renderstream_assigner_info_H_ */


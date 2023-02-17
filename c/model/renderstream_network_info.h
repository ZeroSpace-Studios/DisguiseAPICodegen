/*
 * renderstream_network_info.h
 *
 * 
 */

#ifndef _renderstream_network_info_H_
#define _renderstream_network_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_network_info_t renderstream_network_info_t;




typedef struct renderstream_network_info_t {
    char *ip; // string
    char *name; // string

} renderstream_network_info_t;

renderstream_network_info_t *renderstream_network_info_create(
    char *ip,
    char *name
);

void renderstream_network_info_free(renderstream_network_info_t *renderstream_network_info);

renderstream_network_info_t *renderstream_network_info_parseFromJSON(cJSON *renderstream_network_infoJSON);

cJSON *renderstream_network_info_convertToJSON(renderstream_network_info_t *renderstream_network_info);

#endif /* _renderstream_network_info_H_ */


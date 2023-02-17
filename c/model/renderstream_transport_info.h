/*
 * renderstream_transport_info.h
 *
 * 
 */

#ifndef _renderstream_transport_info_H_
#define _renderstream_transport_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_transport_info_t renderstream_transport_info_t;




typedef struct renderstream_transport_info_t {
    char *type; // string
    char *format; // string
    int bit_depth; //numeric

} renderstream_transport_info_t;

renderstream_transport_info_t *renderstream_transport_info_create(
    char *type,
    char *format,
    int bit_depth
);

void renderstream_transport_info_free(renderstream_transport_info_t *renderstream_transport_info);

renderstream_transport_info_t *renderstream_transport_info_parseFromJSON(cJSON *renderstream_transport_infoJSON);

cJSON *renderstream_transport_info_convertToJSON(renderstream_transport_info_t *renderstream_transport_info);

#endif /* _renderstream_transport_info_H_ */


/*
 * renderstream_adapter_info.h
 *
 * 
 */

#ifndef _renderstream_adapter_info_H_
#define _renderstream_adapter_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_adapter_info_t renderstream_adapter_info_t;




typedef struct renderstream_adapter_info_t {
    char *name; // string
    char *ip_address; // string
    char *subnet; // string

} renderstream_adapter_info_t;

renderstream_adapter_info_t *renderstream_adapter_info_create(
    char *name,
    char *ip_address,
    char *subnet
);

void renderstream_adapter_info_free(renderstream_adapter_info_t *renderstream_adapter_info);

renderstream_adapter_info_t *renderstream_adapter_info_parseFromJSON(cJSON *renderstream_adapter_infoJSON);

cJSON *renderstream_adapter_info_convertToJSON(renderstream_adapter_info_t *renderstream_adapter_info);

#endif /* _renderstream_adapter_info_H_ */


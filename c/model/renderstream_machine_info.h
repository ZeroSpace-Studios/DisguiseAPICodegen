/*
 * renderstream_machine_info.h
 *
 * 
 */

#ifndef _renderstream_machine_info_H_
#define _renderstream_machine_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_machine_info_t renderstream_machine_info_t;

#include "renderstream_adapter_info.h"



typedef struct renderstream_machine_info_t {
    char *uid; // string
    char *name; // string
    char *preferred_sync_adapter; // string
    list_t *adapters; //nonprimitive container

} renderstream_machine_info_t;

renderstream_machine_info_t *renderstream_machine_info_create(
    char *uid,
    char *name,
    char *preferred_sync_adapter,
    list_t *adapters
);

void renderstream_machine_info_free(renderstream_machine_info_t *renderstream_machine_info);

renderstream_machine_info_t *renderstream_machine_info_parseFromJSON(cJSON *renderstream_machine_infoJSON);

cJSON *renderstream_machine_info_convertToJSON(renderstream_machine_info_t *renderstream_machine_info);

#endif /* _renderstream_machine_info_H_ */


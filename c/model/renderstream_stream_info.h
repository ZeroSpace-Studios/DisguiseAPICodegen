/*
 * renderstream_stream_info.h
 *
 * 
 */

#ifndef _renderstream_stream_info_H_
#define _renderstream_stream_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_stream_info_t renderstream_stream_info_t;

#include "renderstream_stream_status.h"



typedef struct renderstream_stream_info_t {
    char *uid; // string
    char *name; // string
    char *source_machine; // string
    char *receiver_machine; // string
    struct renderstream_stream_status_t *status; //model
    char *status_string; // string

} renderstream_stream_info_t;

renderstream_stream_info_t *renderstream_stream_info_create(
    char *uid,
    char *name,
    char *source_machine,
    char *receiver_machine,
    renderstream_stream_status_t *status,
    char *status_string
);

void renderstream_stream_info_free(renderstream_stream_info_t *renderstream_stream_info);

renderstream_stream_info_t *renderstream_stream_info_parseFromJSON(cJSON *renderstream_stream_infoJSON);

cJSON *renderstream_stream_info_convertToJSON(renderstream_stream_info_t *renderstream_stream_info);

#endif /* _renderstream_stream_info_H_ */


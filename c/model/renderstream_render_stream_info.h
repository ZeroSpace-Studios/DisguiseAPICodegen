/*
 * renderstream_render_stream_info.h
 *
 * 
 */

#ifndef _renderstream_render_stream_info_H_
#define _renderstream_render_stream_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_render_stream_info_t renderstream_render_stream_info_t;




typedef struct renderstream_render_stream_info_t {
    char *uid; // string
    char *name; // string

} renderstream_render_stream_info_t;

renderstream_render_stream_info_t *renderstream_render_stream_info_create(
    char *uid,
    char *name
);

void renderstream_render_stream_info_free(renderstream_render_stream_info_t *renderstream_render_stream_info);

renderstream_render_stream_info_t *renderstream_render_stream_info_parseFromJSON(cJSON *renderstream_render_stream_infoJSON);

cJSON *renderstream_render_stream_info_convertToJSON(renderstream_render_stream_info_t *renderstream_render_stream_info);

#endif /* _renderstream_render_stream_info_H_ */


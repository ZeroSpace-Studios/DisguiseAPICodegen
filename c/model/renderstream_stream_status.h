/*
 * renderstream_stream_status.h
 *
 * 
 */

#ifndef _renderstream_stream_status_H_
#define _renderstream_stream_status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_stream_status_t renderstream_stream_status_t;




typedef struct renderstream_stream_status_t {
    int subscription_wanted; //boolean
    int subscribe_successful; //boolean
    double t_last_dropped; //numeric
    double t_last_error; //numeric
    char *last_error_message; // string

} renderstream_stream_status_t;

renderstream_stream_status_t *renderstream_stream_status_create(
    int subscription_wanted,
    int subscribe_successful,
    double t_last_dropped,
    double t_last_error,
    char *last_error_message
);

void renderstream_stream_status_free(renderstream_stream_status_t *renderstream_stream_status);

renderstream_stream_status_t *renderstream_stream_status_parseFromJSON(cJSON *renderstream_stream_statusJSON);

cJSON *renderstream_stream_status_convertToJSON(renderstream_stream_status_t *renderstream_stream_status);

#endif /* _renderstream_stream_status_H_ */


/*
 * renderstream_reference_info.h
 *
 * 
 */

#ifndef _renderstream_reference_info_H_
#define _renderstream_reference_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct renderstream_reference_info_t renderstream_reference_info_t;




typedef struct renderstream_reference_info_t {
    double t_now; //numeric

} renderstream_reference_info_t;

renderstream_reference_info_t *renderstream_reference_info_create(
    double t_now
);

void renderstream_reference_info_free(renderstream_reference_info_t *renderstream_reference_info);

renderstream_reference_info_t *renderstream_reference_info_parseFromJSON(cJSON *renderstream_reference_infoJSON);

cJSON *renderstream_reference_info_convertToJSON(renderstream_reference_info_t *renderstream_reference_info);

#endif /* _renderstream_reference_info_H_ */


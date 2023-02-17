/*
 * quickcal_reset_line_up_request.h
 *
 * 
 */

#ifndef _quickcal_reset_line_up_request_H_
#define _quickcal_reset_line_up_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickcal_reset_line_up_request_t quickcal_reset_line_up_request_t;

#include "d3api_locator.h"



typedef struct quickcal_reset_line_up_request_t {
    struct d3api_locator_t *projector; //model

} quickcal_reset_line_up_request_t;

quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_create(
    d3api_locator_t *projector
);

void quickcal_reset_line_up_request_free(quickcal_reset_line_up_request_t *quickcal_reset_line_up_request);

quickcal_reset_line_up_request_t *quickcal_reset_line_up_request_parseFromJSON(cJSON *quickcal_reset_line_up_requestJSON);

cJSON *quickcal_reset_line_up_request_convertToJSON(quickcal_reset_line_up_request_t *quickcal_reset_line_up_request);

#endif /* _quickcal_reset_line_up_request_H_ */


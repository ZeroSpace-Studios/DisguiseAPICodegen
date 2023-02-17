/*
 * colour_set_cdl_request.h
 *
 * 
 */

#ifndef _colour_set_cdl_request_H_
#define _colour_set_cdl_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct colour_set_cdl_request_t colour_set_cdl_request_t;

#include "colour_cdl_info.h"



typedef struct colour_set_cdl_request_t {
    struct colour_cdl_info_t *cdl; //model

} colour_set_cdl_request_t;

colour_set_cdl_request_t *colour_set_cdl_request_create(
    colour_cdl_info_t *cdl
);

void colour_set_cdl_request_free(colour_set_cdl_request_t *colour_set_cdl_request);

colour_set_cdl_request_t *colour_set_cdl_request_parseFromJSON(cJSON *colour_set_cdl_requestJSON);

cJSON *colour_set_cdl_request_convertToJSON(colour_set_cdl_request_t *colour_set_cdl_request);

#endif /* _colour_set_cdl_request_H_ */


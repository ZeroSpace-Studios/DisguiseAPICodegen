/*
 * transport_set_brightness_info.h
 *
 * 
 */

#ifndef _transport_set_brightness_info_H_
#define _transport_set_brightness_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_set_brightness_info_t transport_set_brightness_info_t;

#include "d3api_locator.h"



typedef struct transport_set_brightness_info_t {
    struct d3api_locator_t *transport; //model
    double brightness; //numeric

} transport_set_brightness_info_t;

transport_set_brightness_info_t *transport_set_brightness_info_create(
    d3api_locator_t *transport,
    double brightness
);

void transport_set_brightness_info_free(transport_set_brightness_info_t *transport_set_brightness_info);

transport_set_brightness_info_t *transport_set_brightness_info_parseFromJSON(cJSON *transport_set_brightness_infoJSON);

cJSON *transport_set_brightness_info_convertToJSON(transport_set_brightness_info_t *transport_set_brightness_info);

#endif /* _transport_set_brightness_info_H_ */


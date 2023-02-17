/*
 * transport_set_volume_info.h
 *
 * 
 */

#ifndef _transport_set_volume_info_H_
#define _transport_set_volume_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_set_volume_info_t transport_set_volume_info_t;

#include "d3api_locator.h"



typedef struct transport_set_volume_info_t {
    struct d3api_locator_t *transport; //model
    double volume; //numeric

} transport_set_volume_info_t;

transport_set_volume_info_t *transport_set_volume_info_create(
    d3api_locator_t *transport,
    double volume
);

void transport_set_volume_info_free(transport_set_volume_info_t *transport_set_volume_info);

transport_set_volume_info_t *transport_set_volume_info_parseFromJSON(cJSON *transport_set_volume_infoJSON);

cJSON *transport_set_volume_info_convertToJSON(transport_set_volume_info_t *transport_set_volume_info);

#endif /* _transport_set_volume_info_H_ */


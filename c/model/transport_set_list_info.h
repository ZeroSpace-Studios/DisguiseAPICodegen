/*
 * transport_set_list_info.h
 *
 * 
 */

#ifndef _transport_set_list_info_H_
#define _transport_set_list_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_set_list_info_t transport_set_list_info_t;

#include "transport_track_info.h"



typedef struct transport_set_list_info_t {
    char *uid; // string
    char *name; // string
    list_t *tracks; //nonprimitive container

} transport_set_list_info_t;

transport_set_list_info_t *transport_set_list_info_create(
    char *uid,
    char *name,
    list_t *tracks
);

void transport_set_list_info_free(transport_set_list_info_t *transport_set_list_info);

transport_set_list_info_t *transport_set_list_info_parseFromJSON(cJSON *transport_set_list_infoJSON);

cJSON *transport_set_list_info_convertToJSON(transport_set_list_info_t *transport_set_list_info);

#endif /* _transport_set_list_info_H_ */


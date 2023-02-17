/*
 * transport_list_tracks_response.h
 *
 * 
 */

#ifndef _transport_list_tracks_response_H_
#define _transport_list_tracks_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_list_tracks_response_t transport_list_tracks_response_t;

#include "rpc_status.h"
#include "transport_track_info.h"



typedef struct transport_list_tracks_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} transport_list_tracks_response_t;

transport_list_tracks_response_t *transport_list_tracks_response_create(
    rpc_status_t *status,
    list_t *result
);

void transport_list_tracks_response_free(transport_list_tracks_response_t *transport_list_tracks_response);

transport_list_tracks_response_t *transport_list_tracks_response_parseFromJSON(cJSON *transport_list_tracks_responseJSON);

cJSON *transport_list_tracks_response_convertToJSON(transport_list_tracks_response_t *transport_list_tracks_response);

#endif /* _transport_list_tracks_response_H_ */


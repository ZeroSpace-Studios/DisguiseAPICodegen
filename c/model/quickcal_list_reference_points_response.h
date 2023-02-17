/*
 * quickcal_list_reference_points_response.h
 *
 * 
 */

#ifndef _quickcal_list_reference_points_response_H_
#define _quickcal_list_reference_points_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct quickcal_list_reference_points_response_t quickcal_list_reference_points_response_t;

#include "quickcal_reference_point_info.h"
#include "rpc_status.h"



typedef struct quickcal_list_reference_points_response_t {
    struct rpc_status_t *status; //model
    list_t *result; //nonprimitive container

} quickcal_list_reference_points_response_t;

quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_create(
    rpc_status_t *status,
    list_t *result
);

void quickcal_list_reference_points_response_free(quickcal_list_reference_points_response_t *quickcal_list_reference_points_response);

quickcal_list_reference_points_response_t *quickcal_list_reference_points_response_parseFromJSON(cJSON *quickcal_list_reference_points_responseJSON);

cJSON *quickcal_list_reference_points_response_convertToJSON(quickcal_list_reference_points_response_t *quickcal_list_reference_points_response);

#endif /* _quickcal_list_reference_points_response_H_ */


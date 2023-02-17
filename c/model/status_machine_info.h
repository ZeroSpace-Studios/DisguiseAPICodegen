/*
 * status_machine_info.h
 *
 * 
 */

#ifndef _status_machine_info_H_
#define _status_machine_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_machine_info_t status_machine_info_t;

#include "machine_info_machine_type.h"

// Enum  for status_machine_info

typedef enum  { d3_api_status_machine_info__NULL = 0, d3_api_status_machine_info__Unknown, d3_api_status_machine_info__Designer, d3_api_status_machine_info__V2_5, d3_api_status_machine_info__Pro4x2, d3_api_status_machine_info__Pro4x4, d3_api_status_machine_info__Plus2x2, d3_api_status_machine_info__Pro4x4NoVfcs, d3_api_status_machine_info__Node, d3_api_status_machine_info__Pro2x4, d3_api_status_machine_info__Gx1, d3_api_status_machine_info__Gx2, d3_api_status_machine_info__SoloV1, d3_api_status_machine_info__Vx4, d3_api_status_machine_info__Gx2c, d3_api_status_machine_info__Rx, d3_api_status_machine_info__RxII, d3_api_status_machine_info__Vx1, d3_api_status_machine_info__Vx2, d3_api_status_machine_info__Vx4Plus, d3_api_status_machine_info__Gx3 } d3_api_status_machine_info__e;

char* status_machine_info_type_ToString(d3_api_status_machine_info__e type);

d3_api_status_machine_info__e status_machine_info_type_FromString(char* type);



typedef struct status_machine_info_t {
    char *uid; // string
    char *name; // string
    char *hostname; // string

} status_machine_info_t;

status_machine_info_t *status_machine_info_create(
    char *uid,
    char *name,
    char *hostname,
);

void status_machine_info_free(status_machine_info_t *status_machine_info);

status_machine_info_t *status_machine_info_parseFromJSON(cJSON *status_machine_infoJSON);

cJSON *status_machine_info_convertToJSON(status_machine_info_t *status_machine_info);

#endif /* _status_machine_info_H_ */


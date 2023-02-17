/*
 * status_d3_version_info.h
 *
 * 
 */

#ifndef _status_d3_version_info_H_
#define _status_d3_version_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_d3_version_info_t status_d3_version_info_t;




typedef struct status_d3_version_info_t {
    long major; //numeric
    long minor; //numeric
    long hotfix; //numeric
    long revision; //numeric

} status_d3_version_info_t;

status_d3_version_info_t *status_d3_version_info_create(
    long major,
    long minor,
    long hotfix,
    long revision
);

void status_d3_version_info_free(status_d3_version_info_t *status_d3_version_info);

status_d3_version_info_t *status_d3_version_info_parseFromJSON(cJSON *status_d3_version_infoJSON);

cJSON *status_d3_version_info_convertToJSON(status_d3_version_info_t *status_d3_version_info);

#endif /* _status_d3_version_info_H_ */


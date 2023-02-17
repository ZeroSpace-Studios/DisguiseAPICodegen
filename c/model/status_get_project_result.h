/*
 * status_get_project_result.h
 *
 * 
 */

#ifndef _status_get_project_result_H_
#define _status_get_project_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_get_project_result_t status_get_project_result_t;

#include "status_d3_version_info.h"



typedef struct status_get_project_result_t {
    char *project_path; // string
    struct status_d3_version_info_t *version; //model

} status_get_project_result_t;

status_get_project_result_t *status_get_project_result_create(
    char *project_path,
    status_d3_version_info_t *version
);

void status_get_project_result_free(status_get_project_result_t *status_get_project_result);

status_get_project_result_t *status_get_project_result_parseFromJSON(cJSON *status_get_project_resultJSON);

cJSON *status_get_project_result_convertToJSON(status_get_project_result_t *status_get_project_result);

#endif /* _status_get_project_result_H_ */


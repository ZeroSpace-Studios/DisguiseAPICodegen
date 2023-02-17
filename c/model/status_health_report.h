/*
 * status_health_report.h
 *
 * 
 */

#ifndef _status_health_report_H_
#define _status_health_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_health_report_t status_health_report_t;

#include "status_health_status.h"
#include "statusd3_machine.h"



typedef struct status_health_report_t {
    struct statusd3_machine_t *machine; //model
    struct statusd3_machine_t *running_as_machine; //model
    struct status_health_status_t *status; //model

} status_health_report_t;

status_health_report_t *status_health_report_create(
    statusd3_machine_t *machine,
    statusd3_machine_t *running_as_machine,
    status_health_status_t *status
);

void status_health_report_free(status_health_report_t *status_health_report);

status_health_report_t *status_health_report_parseFromJSON(cJSON *status_health_reportJSON);

cJSON *status_health_report_convertToJSON(status_health_report_t *status_health_report);

#endif /* _status_health_report_H_ */


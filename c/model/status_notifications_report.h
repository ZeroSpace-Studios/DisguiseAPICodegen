/*
 * status_notifications_report.h
 *
 * 
 */

#ifndef _status_notifications_report_H_
#define _status_notifications_report_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_notifications_report_t status_notifications_report_t;

#include "status_notification.h"
#include "statusd3_machine.h"



typedef struct status_notifications_report_t {
    struct statusd3_machine_t *machine; //model
    list_t *notifications; //nonprimitive container

} status_notifications_report_t;

status_notifications_report_t *status_notifications_report_create(
    statusd3_machine_t *machine,
    list_t *notifications
);

void status_notifications_report_free(status_notifications_report_t *status_notifications_report);

status_notifications_report_t *status_notifications_report_parseFromJSON(cJSON *status_notifications_reportJSON);

cJSON *status_notifications_report_convertToJSON(status_notifications_report_t *status_notifications_report);

#endif /* _status_notifications_report_H_ */


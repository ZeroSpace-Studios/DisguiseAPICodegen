/*
 * status_notification.h
 *
 * 
 */

#ifndef _status_notification_H_
#define _status_notification_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_notification_t status_notification_t;




typedef struct status_notification_t {
    char *summary; // string
    char *detail; // string

} status_notification_t;

status_notification_t *status_notification_create(
    char *summary,
    char *detail
);

void status_notification_free(status_notification_t *status_notification);

status_notification_t *status_notification_parseFromJSON(cJSON *status_notificationJSON);

cJSON *status_notification_convertToJSON(status_notification_t *status_notification);

#endif /* _status_notification_H_ */


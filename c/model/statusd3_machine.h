/*
 * statusd3_machine.h
 *
 * 
 */

#ifndef _statusd3_machine_H_
#define _statusd3_machine_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct statusd3_machine_t statusd3_machine_t;




typedef struct statusd3_machine_t {
    char *uid; // string
    char *name; // string
    char *hostname; // string

} statusd3_machine_t;

statusd3_machine_t *statusd3_machine_create(
    char *uid,
    char *name,
    char *hostname
);

void statusd3_machine_free(statusd3_machine_t *statusd3_machine);

statusd3_machine_t *statusd3_machine_parseFromJSON(cJSON *statusd3_machineJSON);

cJSON *statusd3_machine_convertToJSON(statusd3_machine_t *statusd3_machine);

#endif /* _statusd3_machine_H_ */


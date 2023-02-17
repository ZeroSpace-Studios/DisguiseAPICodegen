/*
 * d3api_locator.h
 *
 * 
 */

#ifndef _d3api_locator_H_
#define _d3api_locator_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct d3api_locator_t d3api_locator_t;




typedef struct d3api_locator_t {
    char *uid; // string
    char *name; // string

} d3api_locator_t;

d3api_locator_t *d3api_locator_create(
    char *uid,
    char *name
);

void d3api_locator_free(d3api_locator_t *d3api_locator);

d3api_locator_t *d3api_locator_parseFromJSON(cJSON *d3api_locatorJSON);

cJSON *d3api_locator_convertToJSON(d3api_locator_t *d3api_locator);

#endif /* _d3api_locator_H_ */


/*
 * transport_section_info.h
 *
 * 
 */

#ifndef _transport_section_info_H_
#define _transport_section_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_section_info_t transport_section_info_t;




typedef struct transport_section_info_t {
    double time; //numeric
    char *index; // string

} transport_section_info_t;

transport_section_info_t *transport_section_info_create(
    double time,
    char *index
);

void transport_section_info_free(transport_section_info_t *transport_section_info);

transport_section_info_t *transport_section_info_parseFromJSON(cJSON *transport_section_infoJSON);

cJSON *transport_section_info_convertToJSON(transport_section_info_t *transport_section_info);

#endif /* _transport_section_info_H_ */


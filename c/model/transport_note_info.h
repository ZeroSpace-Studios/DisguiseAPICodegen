/*
 * transport_note_info.h
 *
 * 
 */

#ifndef _transport_note_info_H_
#define _transport_note_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_note_info_t transport_note_info_t;




typedef struct transport_note_info_t {
    double time; //numeric
    char *text; // string

} transport_note_info_t;

transport_note_info_t *transport_note_info_create(
    double time,
    char *text
);

void transport_note_info_free(transport_note_info_t *transport_note_info);

transport_note_info_t *transport_note_info_parseFromJSON(cJSON *transport_note_infoJSON);

cJSON *transport_note_info_convertToJSON(transport_note_info_t *transport_note_info);

#endif /* _transport_note_info_H_ */


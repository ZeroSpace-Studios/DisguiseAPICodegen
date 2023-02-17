/*
 * transport_annotation_info.h
 *
 * 
 */

#ifndef _transport_annotation_info_H_
#define _transport_annotation_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_annotation_info_t transport_annotation_info_t;

#include "transport_note_info.h"
#include "transport_section_info.h"
#include "transport_tag_info.h"



typedef struct transport_annotation_info_t {
    list_t *notes; //nonprimitive container
    list_t *tags; //nonprimitive container
    list_t *sections; //nonprimitive container

} transport_annotation_info_t;

transport_annotation_info_t *transport_annotation_info_create(
    list_t *notes,
    list_t *tags,
    list_t *sections
);

void transport_annotation_info_free(transport_annotation_info_t *transport_annotation_info);

transport_annotation_info_t *transport_annotation_info_parseFromJSON(cJSON *transport_annotation_infoJSON);

cJSON *transport_annotation_info_convertToJSON(transport_annotation_info_t *transport_annotation_info);

#endif /* _transport_annotation_info_H_ */


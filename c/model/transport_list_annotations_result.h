/*
 * transport_list_annotations_result.h
 *
 * 
 */

#ifndef _transport_list_annotations_result_H_
#define _transport_list_annotations_result_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct transport_list_annotations_result_t transport_list_annotations_result_t;

#include "transport_annotation_info.h"



typedef struct transport_list_annotations_result_t {
    char *uid; // string
    char *name; // string
    struct transport_annotation_info_t *annotations; //model

} transport_list_annotations_result_t;

transport_list_annotations_result_t *transport_list_annotations_result_create(
    char *uid,
    char *name,
    transport_annotation_info_t *annotations
);

void transport_list_annotations_result_free(transport_list_annotations_result_t *transport_list_annotations_result);

transport_list_annotations_result_t *transport_list_annotations_result_parseFromJSON(cJSON *transport_list_annotations_resultJSON);

cJSON *transport_list_annotations_result_convertToJSON(transport_list_annotations_result_t *transport_list_annotations_result);

#endif /* _transport_list_annotations_result_H_ */


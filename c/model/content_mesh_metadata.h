/*
 * content_mesh_metadata.h
 *
 * 
 */

#ifndef _content_mesh_metadata_H_
#define _content_mesh_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_mesh_metadata_t content_mesh_metadata_t;

#include "content_vector3.h"



typedef struct content_mesh_metadata_t {
    long n_vertices; //numeric
    long n_triangles; //numeric
    struct content_vector3_t *centroid; //model
    struct content_vector3_t *extents_min; //model
    struct content_vector3_t *extents_max; //model

} content_mesh_metadata_t;

content_mesh_metadata_t *content_mesh_metadata_create(
    long n_vertices,
    long n_triangles,
    content_vector3_t *centroid,
    content_vector3_t *extents_min,
    content_vector3_t *extents_max
);

void content_mesh_metadata_free(content_mesh_metadata_t *content_mesh_metadata);

content_mesh_metadata_t *content_mesh_metadata_parseFromJSON(cJSON *content_mesh_metadataJSON);

cJSON *content_mesh_metadata_convertToJSON(content_mesh_metadata_t *content_mesh_metadata);

#endif /* _content_mesh_metadata_H_ */


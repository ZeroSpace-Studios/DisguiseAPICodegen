#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "content_mesh_metadata.h"



content_mesh_metadata_t *content_mesh_metadata_create(
    long n_vertices,
    long n_triangles,
    content_vector3_t *centroid,
    content_vector3_t *extents_min,
    content_vector3_t *extents_max
    ) {
    content_mesh_metadata_t *content_mesh_metadata_local_var = malloc(sizeof(content_mesh_metadata_t));
    if (!content_mesh_metadata_local_var) {
        return NULL;
    }
    content_mesh_metadata_local_var->n_vertices = n_vertices;
    content_mesh_metadata_local_var->n_triangles = n_triangles;
    content_mesh_metadata_local_var->centroid = centroid;
    content_mesh_metadata_local_var->extents_min = extents_min;
    content_mesh_metadata_local_var->extents_max = extents_max;

    return content_mesh_metadata_local_var;
}


void content_mesh_metadata_free(content_mesh_metadata_t *content_mesh_metadata) {
    if(NULL == content_mesh_metadata){
        return ;
    }
    listEntry_t *listEntry;
    if (content_mesh_metadata->centroid) {
        content_vector3_free(content_mesh_metadata->centroid);
        content_mesh_metadata->centroid = NULL;
    }
    if (content_mesh_metadata->extents_min) {
        content_vector3_free(content_mesh_metadata->extents_min);
        content_mesh_metadata->extents_min = NULL;
    }
    if (content_mesh_metadata->extents_max) {
        content_vector3_free(content_mesh_metadata->extents_max);
        content_mesh_metadata->extents_max = NULL;
    }
    free(content_mesh_metadata);
}

cJSON *content_mesh_metadata_convertToJSON(content_mesh_metadata_t *content_mesh_metadata) {
    cJSON *item = cJSON_CreateObject();

    // content_mesh_metadata->n_vertices
    if(content_mesh_metadata->n_vertices) { 
    if(cJSON_AddNumberToObject(item, "nVertices", content_mesh_metadata->n_vertices) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_mesh_metadata->n_triangles
    if(content_mesh_metadata->n_triangles) { 
    if(cJSON_AddNumberToObject(item, "nTriangles", content_mesh_metadata->n_triangles) == NULL) {
    goto fail; //Numeric
    }
     } 


    // content_mesh_metadata->centroid
    if(content_mesh_metadata->centroid) { 
    cJSON *centroid_local_JSON = content_vector3_convertToJSON(content_mesh_metadata->centroid);
    if(centroid_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "centroid", centroid_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_mesh_metadata->extents_min
    if(content_mesh_metadata->extents_min) { 
    cJSON *extents_min_local_JSON = content_vector3_convertToJSON(content_mesh_metadata->extents_min);
    if(extents_min_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extentsMin", extents_min_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // content_mesh_metadata->extents_max
    if(content_mesh_metadata->extents_max) { 
    cJSON *extents_max_local_JSON = content_vector3_convertToJSON(content_mesh_metadata->extents_max);
    if(extents_max_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "extentsMax", extents_max_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

content_mesh_metadata_t *content_mesh_metadata_parseFromJSON(cJSON *content_mesh_metadataJSON){

    content_mesh_metadata_t *content_mesh_metadata_local_var = NULL;

    // content_mesh_metadata->n_vertices
    cJSON *n_vertices = cJSON_GetObjectItemCaseSensitive(content_mesh_metadataJSON, "nVertices");
    if (n_vertices) { 
    if(!cJSON_IsNumber(n_vertices))
    {
    goto end; //Numeric
    }
    }

    // content_mesh_metadata->n_triangles
    cJSON *n_triangles = cJSON_GetObjectItemCaseSensitive(content_mesh_metadataJSON, "nTriangles");
    if (n_triangles) { 
    if(!cJSON_IsNumber(n_triangles))
    {
    goto end; //Numeric
    }
    }

    // content_mesh_metadata->centroid
    cJSON *centroid = cJSON_GetObjectItemCaseSensitive(content_mesh_metadataJSON, "centroid");
    content_vector3_t *centroid_local_nonprim = NULL;
    if (centroid) { 
    centroid_local_nonprim = content_vector3_parseFromJSON(centroid); //nonprimitive
    }

    // content_mesh_metadata->extents_min
    cJSON *extents_min = cJSON_GetObjectItemCaseSensitive(content_mesh_metadataJSON, "extentsMin");
    content_vector3_t *extents_min_local_nonprim = NULL;
    if (extents_min) { 
    extents_min_local_nonprim = content_vector3_parseFromJSON(extents_min); //nonprimitive
    }

    // content_mesh_metadata->extents_max
    cJSON *extents_max = cJSON_GetObjectItemCaseSensitive(content_mesh_metadataJSON, "extentsMax");
    content_vector3_t *extents_max_local_nonprim = NULL;
    if (extents_max) { 
    extents_max_local_nonprim = content_vector3_parseFromJSON(extents_max); //nonprimitive
    }


    content_mesh_metadata_local_var = content_mesh_metadata_create (
        n_vertices ? n_vertices->valuedouble : 0,
        n_triangles ? n_triangles->valuedouble : 0,
        centroid ? centroid_local_nonprim : NULL,
        extents_min ? extents_min_local_nonprim : NULL,
        extents_max ? extents_max_local_nonprim : NULL
        );

    return content_mesh_metadata_local_var;
end:
    if (centroid_local_nonprim) {
        content_vector3_free(centroid_local_nonprim);
        centroid_local_nonprim = NULL;
    }
    if (extents_min_local_nonprim) {
        content_vector3_free(extents_min_local_nonprim);
        extents_min_local_nonprim = NULL;
    }
    if (extents_max_local_nonprim) {
        content_vector3_free(extents_max_local_nonprim);
        extents_max_local_nonprim = NULL;
    }
    return NULL;

}

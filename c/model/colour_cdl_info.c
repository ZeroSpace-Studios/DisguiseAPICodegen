#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "colour_cdl_info.h"



colour_cdl_info_t *colour_cdl_info_create(
    char *uid,
    char *name,
    d3api_vec3_float_t *slope,
    d3api_vec3_float_t *offset,
    d3api_vec3_float_t *power,
    float saturation
    ) {
    colour_cdl_info_t *colour_cdl_info_local_var = malloc(sizeof(colour_cdl_info_t));
    if (!colour_cdl_info_local_var) {
        return NULL;
    }
    colour_cdl_info_local_var->uid = uid;
    colour_cdl_info_local_var->name = name;
    colour_cdl_info_local_var->slope = slope;
    colour_cdl_info_local_var->offset = offset;
    colour_cdl_info_local_var->power = power;
    colour_cdl_info_local_var->saturation = saturation;

    return colour_cdl_info_local_var;
}


void colour_cdl_info_free(colour_cdl_info_t *colour_cdl_info) {
    if(NULL == colour_cdl_info){
        return ;
    }
    listEntry_t *listEntry;
    if (colour_cdl_info->uid) {
        free(colour_cdl_info->uid);
        colour_cdl_info->uid = NULL;
    }
    if (colour_cdl_info->name) {
        free(colour_cdl_info->name);
        colour_cdl_info->name = NULL;
    }
    if (colour_cdl_info->slope) {
        d3api_vec3_float_free(colour_cdl_info->slope);
        colour_cdl_info->slope = NULL;
    }
    if (colour_cdl_info->offset) {
        d3api_vec3_float_free(colour_cdl_info->offset);
        colour_cdl_info->offset = NULL;
    }
    if (colour_cdl_info->power) {
        d3api_vec3_float_free(colour_cdl_info->power);
        colour_cdl_info->power = NULL;
    }
    free(colour_cdl_info);
}

cJSON *colour_cdl_info_convertToJSON(colour_cdl_info_t *colour_cdl_info) {
    cJSON *item = cJSON_CreateObject();

    // colour_cdl_info->uid
    if(colour_cdl_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", colour_cdl_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // colour_cdl_info->name
    if(colour_cdl_info->name) { 
    if(cJSON_AddStringToObject(item, "name", colour_cdl_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // colour_cdl_info->slope
    if(colour_cdl_info->slope) { 
    cJSON *slope_local_JSON = d3api_vec3_float_convertToJSON(colour_cdl_info->slope);
    if(slope_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "slope", slope_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // colour_cdl_info->offset
    if(colour_cdl_info->offset) { 
    cJSON *offset_local_JSON = d3api_vec3_float_convertToJSON(colour_cdl_info->offset);
    if(offset_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "offset", offset_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // colour_cdl_info->power
    if(colour_cdl_info->power) { 
    cJSON *power_local_JSON = d3api_vec3_float_convertToJSON(colour_cdl_info->power);
    if(power_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "power", power_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // colour_cdl_info->saturation
    if(colour_cdl_info->saturation) { 
    if(cJSON_AddNumberToObject(item, "saturation", colour_cdl_info->saturation) == NULL) {
    goto fail; //Numeric
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

colour_cdl_info_t *colour_cdl_info_parseFromJSON(cJSON *colour_cdl_infoJSON){

    colour_cdl_info_t *colour_cdl_info_local_var = NULL;

    // colour_cdl_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // colour_cdl_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // colour_cdl_info->slope
    cJSON *slope = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "slope");
    d3api_vec3_float_t *slope_local_nonprim = NULL;
    if (slope) { 
    slope_local_nonprim = d3api_vec3_float_parseFromJSON(slope); //nonprimitive
    }

    // colour_cdl_info->offset
    cJSON *offset = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "offset");
    d3api_vec3_float_t *offset_local_nonprim = NULL;
    if (offset) { 
    offset_local_nonprim = d3api_vec3_float_parseFromJSON(offset); //nonprimitive
    }

    // colour_cdl_info->power
    cJSON *power = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "power");
    d3api_vec3_float_t *power_local_nonprim = NULL;
    if (power) { 
    power_local_nonprim = d3api_vec3_float_parseFromJSON(power); //nonprimitive
    }

    // colour_cdl_info->saturation
    cJSON *saturation = cJSON_GetObjectItemCaseSensitive(colour_cdl_infoJSON, "saturation");
    if (saturation) { 
    if(!cJSON_IsNumber(saturation))
    {
    goto end; //Numeric
    }
    }


    colour_cdl_info_local_var = colour_cdl_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        slope ? slope_local_nonprim : NULL,
        offset ? offset_local_nonprim : NULL,
        power ? power_local_nonprim : NULL,
        saturation ? saturation->valuedouble : 0
        );

    return colour_cdl_info_local_var;
end:
    if (slope_local_nonprim) {
        d3api_vec3_float_free(slope_local_nonprim);
        slope_local_nonprim = NULL;
    }
    if (offset_local_nonprim) {
        d3api_vec3_float_free(offset_local_nonprim);
        offset_local_nonprim = NULL;
    }
    if (power_local_nonprim) {
        d3api_vec3_float_free(power_local_nonprim);
        power_local_nonprim = NULL;
    }
    return NULL;

}

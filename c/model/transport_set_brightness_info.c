#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_set_brightness_info.h"



transport_set_brightness_info_t *transport_set_brightness_info_create(
    d3api_locator_t *transport,
    double brightness
    ) {
    transport_set_brightness_info_t *transport_set_brightness_info_local_var = malloc(sizeof(transport_set_brightness_info_t));
    if (!transport_set_brightness_info_local_var) {
        return NULL;
    }
    transport_set_brightness_info_local_var->transport = transport;
    transport_set_brightness_info_local_var->brightness = brightness;

    return transport_set_brightness_info_local_var;
}


void transport_set_brightness_info_free(transport_set_brightness_info_t *transport_set_brightness_info) {
    if(NULL == transport_set_brightness_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_set_brightness_info->transport) {
        d3api_locator_free(transport_set_brightness_info->transport);
        transport_set_brightness_info->transport = NULL;
    }
    free(transport_set_brightness_info);
}

cJSON *transport_set_brightness_info_convertToJSON(transport_set_brightness_info_t *transport_set_brightness_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_set_brightness_info->transport
    if(transport_set_brightness_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_set_brightness_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_set_brightness_info->brightness
    if(transport_set_brightness_info->brightness) { 
    if(cJSON_AddNumberToObject(item, "brightness", transport_set_brightness_info->brightness) == NULL) {
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

transport_set_brightness_info_t *transport_set_brightness_info_parseFromJSON(cJSON *transport_set_brightness_infoJSON){

    transport_set_brightness_info_t *transport_set_brightness_info_local_var = NULL;

    // transport_set_brightness_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_set_brightness_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_set_brightness_info->brightness
    cJSON *brightness = cJSON_GetObjectItemCaseSensitive(transport_set_brightness_infoJSON, "brightness");
    if (brightness) { 
    if(!cJSON_IsNumber(brightness))
    {
    goto end; //Numeric
    }
    }


    transport_set_brightness_info_local_var = transport_set_brightness_info_create (
        transport ? transport_local_nonprim : NULL,
        brightness ? brightness->valuedouble : 0
        );

    return transport_set_brightness_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

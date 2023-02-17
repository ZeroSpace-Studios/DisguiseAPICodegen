#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_set_volume_info.h"



transport_set_volume_info_t *transport_set_volume_info_create(
    d3api_locator_t *transport,
    double volume
    ) {
    transport_set_volume_info_t *transport_set_volume_info_local_var = malloc(sizeof(transport_set_volume_info_t));
    if (!transport_set_volume_info_local_var) {
        return NULL;
    }
    transport_set_volume_info_local_var->transport = transport;
    transport_set_volume_info_local_var->volume = volume;

    return transport_set_volume_info_local_var;
}


void transport_set_volume_info_free(transport_set_volume_info_t *transport_set_volume_info) {
    if(NULL == transport_set_volume_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_set_volume_info->transport) {
        d3api_locator_free(transport_set_volume_info->transport);
        transport_set_volume_info->transport = NULL;
    }
    free(transport_set_volume_info);
}

cJSON *transport_set_volume_info_convertToJSON(transport_set_volume_info_t *transport_set_volume_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_set_volume_info->transport
    if(transport_set_volume_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_set_volume_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_set_volume_info->volume
    if(transport_set_volume_info->volume) { 
    if(cJSON_AddNumberToObject(item, "volume", transport_set_volume_info->volume) == NULL) {
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

transport_set_volume_info_t *transport_set_volume_info_parseFromJSON(cJSON *transport_set_volume_infoJSON){

    transport_set_volume_info_t *transport_set_volume_info_local_var = NULL;

    // transport_set_volume_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_set_volume_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_set_volume_info->volume
    cJSON *volume = cJSON_GetObjectItemCaseSensitive(transport_set_volume_infoJSON, "volume");
    if (volume) { 
    if(!cJSON_IsNumber(volume))
    {
    goto end; //Numeric
    }
    }


    transport_set_volume_info_local_var = transport_set_volume_info_create (
        transport ? transport_local_nonprim : NULL,
        volume ? volume->valuedouble : 0
        );

    return transport_set_volume_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

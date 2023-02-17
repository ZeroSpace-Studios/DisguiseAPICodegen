#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_set_engaged_info.h"



transport_set_engaged_info_t *transport_set_engaged_info_create(
    d3api_locator_t *transport,
    int engaged
    ) {
    transport_set_engaged_info_t *transport_set_engaged_info_local_var = malloc(sizeof(transport_set_engaged_info_t));
    if (!transport_set_engaged_info_local_var) {
        return NULL;
    }
    transport_set_engaged_info_local_var->transport = transport;
    transport_set_engaged_info_local_var->engaged = engaged;

    return transport_set_engaged_info_local_var;
}


void transport_set_engaged_info_free(transport_set_engaged_info_t *transport_set_engaged_info) {
    if(NULL == transport_set_engaged_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_set_engaged_info->transport) {
        d3api_locator_free(transport_set_engaged_info->transport);
        transport_set_engaged_info->transport = NULL;
    }
    free(transport_set_engaged_info);
}

cJSON *transport_set_engaged_info_convertToJSON(transport_set_engaged_info_t *transport_set_engaged_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_set_engaged_info->transport
    if(transport_set_engaged_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_set_engaged_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_set_engaged_info->engaged
    if(transport_set_engaged_info->engaged) { 
    if(cJSON_AddBoolToObject(item, "engaged", transport_set_engaged_info->engaged) == NULL) {
    goto fail; //Bool
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_set_engaged_info_t *transport_set_engaged_info_parseFromJSON(cJSON *transport_set_engaged_infoJSON){

    transport_set_engaged_info_t *transport_set_engaged_info_local_var = NULL;

    // transport_set_engaged_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_set_engaged_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_set_engaged_info->engaged
    cJSON *engaged = cJSON_GetObjectItemCaseSensitive(transport_set_engaged_infoJSON, "engaged");
    if (engaged) { 
    if(!cJSON_IsBool(engaged))
    {
    goto end; //Bool
    }
    }


    transport_set_engaged_info_local_var = transport_set_engaged_info_create (
        transport ? transport_local_nonprim : NULL,
        engaged ? engaged->valueint : 0
        );

    return transport_set_engaged_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

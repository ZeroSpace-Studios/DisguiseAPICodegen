#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_set_volume_request.h"



transport_set_volume_request_t *transport_set_volume_request_create(
    list_t *transports
    ) {
    transport_set_volume_request_t *transport_set_volume_request_local_var = malloc(sizeof(transport_set_volume_request_t));
    if (!transport_set_volume_request_local_var) {
        return NULL;
    }
    transport_set_volume_request_local_var->transports = transports;

    return transport_set_volume_request_local_var;
}


void transport_set_volume_request_free(transport_set_volume_request_t *transport_set_volume_request) {
    if(NULL == transport_set_volume_request){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_set_volume_request->transports) {
        list_ForEach(listEntry, transport_set_volume_request->transports) {
            transport_set_volume_info_free(listEntry->data);
        }
        list_free(transport_set_volume_request->transports);
        transport_set_volume_request->transports = NULL;
    }
    free(transport_set_volume_request);
}

cJSON *transport_set_volume_request_convertToJSON(transport_set_volume_request_t *transport_set_volume_request) {
    cJSON *item = cJSON_CreateObject();

    // transport_set_volume_request->transports
    if(transport_set_volume_request->transports) { 
    cJSON *transports = cJSON_AddArrayToObject(item, "transports");
    if(transports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transportsListEntry;
    if (transport_set_volume_request->transports) {
    list_ForEach(transportsListEntry, transport_set_volume_request->transports) {
    cJSON *itemLocal = transport_set_volume_info_convertToJSON(transportsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(transports, itemLocal);
    }
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_set_volume_request_t *transport_set_volume_request_parseFromJSON(cJSON *transport_set_volume_requestJSON){

    transport_set_volume_request_t *transport_set_volume_request_local_var = NULL;

    // transport_set_volume_request->transports
    cJSON *transports = cJSON_GetObjectItemCaseSensitive(transport_set_volume_requestJSON, "transports");
    list_t *transportsList;
    if (transports) { 
    cJSON *transports_local_nonprimitive;
    if(!cJSON_IsArray(transports)){
        goto end; //nonprimitive container
    }

    transportsList = list_create();

    cJSON_ArrayForEach(transports_local_nonprimitive,transports )
    {
        if(!cJSON_IsObject(transports_local_nonprimitive)){
            goto end;
        }
        transport_set_volume_info_t *transportsItem = transport_set_volume_info_parseFromJSON(transports_local_nonprimitive);

        list_addElement(transportsList, transportsItem);
    }
    }


    transport_set_volume_request_local_var = transport_set_volume_request_create (
        transports ? transportsList : NULL
        );

    return transport_set_volume_request_local_var;
end:
    return NULL;

}

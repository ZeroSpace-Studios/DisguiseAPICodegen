#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_go_to_frame_request.h"



transport_go_to_frame_request_t *transport_go_to_frame_request_create(
    list_t *transports
    ) {
    transport_go_to_frame_request_t *transport_go_to_frame_request_local_var = malloc(sizeof(transport_go_to_frame_request_t));
    if (!transport_go_to_frame_request_local_var) {
        return NULL;
    }
    transport_go_to_frame_request_local_var->transports = transports;

    return transport_go_to_frame_request_local_var;
}


void transport_go_to_frame_request_free(transport_go_to_frame_request_t *transport_go_to_frame_request) {
    if(NULL == transport_go_to_frame_request){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_go_to_frame_request->transports) {
        list_ForEach(listEntry, transport_go_to_frame_request->transports) {
            transport_go_to_frame_info_free(listEntry->data);
        }
        list_free(transport_go_to_frame_request->transports);
        transport_go_to_frame_request->transports = NULL;
    }
    free(transport_go_to_frame_request);
}

cJSON *transport_go_to_frame_request_convertToJSON(transport_go_to_frame_request_t *transport_go_to_frame_request) {
    cJSON *item = cJSON_CreateObject();

    // transport_go_to_frame_request->transports
    if(transport_go_to_frame_request->transports) { 
    cJSON *transports = cJSON_AddArrayToObject(item, "transports");
    if(transports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transportsListEntry;
    if (transport_go_to_frame_request->transports) {
    list_ForEach(transportsListEntry, transport_go_to_frame_request->transports) {
    cJSON *itemLocal = transport_go_to_frame_info_convertToJSON(transportsListEntry->data);
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

transport_go_to_frame_request_t *transport_go_to_frame_request_parseFromJSON(cJSON *transport_go_to_frame_requestJSON){

    transport_go_to_frame_request_t *transport_go_to_frame_request_local_var = NULL;

    // transport_go_to_frame_request->transports
    cJSON *transports = cJSON_GetObjectItemCaseSensitive(transport_go_to_frame_requestJSON, "transports");
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
        transport_go_to_frame_info_t *transportsItem = transport_go_to_frame_info_parseFromJSON(transports_local_nonprimitive);

        list_addElement(transportsList, transportsItem);
    }
    }


    transport_go_to_frame_request_local_var = transport_go_to_frame_request_create (
        transports ? transportsList : NULL
        );

    return transport_go_to_frame_request_local_var;
end:
    return NULL;

}

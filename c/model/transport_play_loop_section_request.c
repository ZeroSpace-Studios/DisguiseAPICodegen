#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_play_loop_section_request.h"



transport_play_loop_section_request_t *transport_play_loop_section_request_create(
    list_t *transports
    ) {
    transport_play_loop_section_request_t *transport_play_loop_section_request_local_var = malloc(sizeof(transport_play_loop_section_request_t));
    if (!transport_play_loop_section_request_local_var) {
        return NULL;
    }
    transport_play_loop_section_request_local_var->transports = transports;

    return transport_play_loop_section_request_local_var;
}


void transport_play_loop_section_request_free(transport_play_loop_section_request_t *transport_play_loop_section_request) {
    if(NULL == transport_play_loop_section_request){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_play_loop_section_request->transports) {
        list_ForEach(listEntry, transport_play_loop_section_request->transports) {
            d3api_locator_free(listEntry->data);
        }
        list_free(transport_play_loop_section_request->transports);
        transport_play_loop_section_request->transports = NULL;
    }
    free(transport_play_loop_section_request);
}

cJSON *transport_play_loop_section_request_convertToJSON(transport_play_loop_section_request_t *transport_play_loop_section_request) {
    cJSON *item = cJSON_CreateObject();

    // transport_play_loop_section_request->transports
    if(transport_play_loop_section_request->transports) { 
    cJSON *transports = cJSON_AddArrayToObject(item, "transports");
    if(transports == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *transportsListEntry;
    if (transport_play_loop_section_request->transports) {
    list_ForEach(transportsListEntry, transport_play_loop_section_request->transports) {
    cJSON *itemLocal = d3api_locator_convertToJSON(transportsListEntry->data);
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

transport_play_loop_section_request_t *transport_play_loop_section_request_parseFromJSON(cJSON *transport_play_loop_section_requestJSON){

    transport_play_loop_section_request_t *transport_play_loop_section_request_local_var = NULL;

    // transport_play_loop_section_request->transports
    cJSON *transports = cJSON_GetObjectItemCaseSensitive(transport_play_loop_section_requestJSON, "transports");
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
        d3api_locator_t *transportsItem = d3api_locator_parseFromJSON(transports_local_nonprimitive);

        list_addElement(transportsList, transportsItem);
    }
    }


    transport_play_loop_section_request_local_var = transport_play_loop_section_request_create (
        transports ? transportsList : NULL
        );

    return transport_play_loop_section_request_local_var;
end:
    return NULL;

}
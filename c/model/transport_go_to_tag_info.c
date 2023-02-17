#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_go_to_tag_info.h"


char* typetransport_go_to_tag_info_ToString(d3_api_transport_go_to_tag_info__e type) {
    char* typeArray[] =  { "NULL", "TagType_Unknown", "TC", "MIDI", "CUE" };
	return typeArray[type];
}

d3_api_transport_go_to_tag_info__e typetransport_go_to_tag_info_FromString(char* type){
    int stringToReturn = 0;
    char *typeArray[] =  { "NULL", "TagType_Unknown", "TC", "MIDI", "CUE" };
    size_t sizeofArray = sizeof(typeArray) / sizeof(typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(type, typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* playmodetransport_go_to_tag_info_ToString(d3_api_transport_go_to_tag_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_go_to_tag_info__e playmodetransport_go_to_tag_info_FromString(char* playmode){
    int stringToReturn = 0;
    char *playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
    size_t sizeofArray = sizeof(playmodeArray) / sizeof(playmodeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(playmode, playmodeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

transport_go_to_tag_info_t *transport_go_to_tag_info_create(
    d3api_locator_t *transport,
    char *value,
    int allow_global_jump,
    ) {
    transport_go_to_tag_info_t *transport_go_to_tag_info_local_var = malloc(sizeof(transport_go_to_tag_info_t));
    if (!transport_go_to_tag_info_local_var) {
        return NULL;
    }
    transport_go_to_tag_info_local_var->transport = transport;
    transport_go_to_tag_info_local_var->type = type;
    transport_go_to_tag_info_local_var->value = value;
    transport_go_to_tag_info_local_var->allow_global_jump = allow_global_jump;
    transport_go_to_tag_info_local_var->playmode = playmode;

    return transport_go_to_tag_info_local_var;
}


void transport_go_to_tag_info_free(transport_go_to_tag_info_t *transport_go_to_tag_info) {
    if(NULL == transport_go_to_tag_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_go_to_tag_info->transport) {
        d3api_locator_free(transport_go_to_tag_info->transport);
        transport_go_to_tag_info->transport = NULL;
    }
    if (transport_go_to_tag_info->value) {
        free(transport_go_to_tag_info->value);
        transport_go_to_tag_info->value = NULL;
    }
    free(transport_go_to_tag_info);
}

cJSON *transport_go_to_tag_info_convertToJSON(transport_go_to_tag_info_t *transport_go_to_tag_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_go_to_tag_info->transport
    if(transport_go_to_tag_info->transport) { 
    cJSON *transport_local_JSON = d3api_locator_convertToJSON(transport_go_to_tag_info->transport);
    if(transport_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "transport", transport_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // transport_go_to_tag_info->type
    
    


    // transport_go_to_tag_info->value
    if(transport_go_to_tag_info->value) { 
    if(cJSON_AddStringToObject(item, "value", transport_go_to_tag_info->value) == NULL) {
    goto fail; //String
    }
     } 


    // transport_go_to_tag_info->allow_global_jump
    if(transport_go_to_tag_info->allow_global_jump) { 
    if(cJSON_AddBoolToObject(item, "allowGlobalJump", transport_go_to_tag_info->allow_global_jump) == NULL) {
    goto fail; //Bool
    }
     } 


    // transport_go_to_tag_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_go_to_tag_info_t *transport_go_to_tag_info_parseFromJSON(cJSON *transport_go_to_tag_infoJSON){

    transport_go_to_tag_info_t *transport_go_to_tag_info_local_var = NULL;

    // transport_go_to_tag_info->transport
    cJSON *transport = cJSON_GetObjectItemCaseSensitive(transport_go_to_tag_infoJSON, "transport");
    d3api_locator_t *transport_local_nonprim = NULL;
    if (transport) { 
    transport_local_nonprim = d3api_locator_parseFromJSON(transport); //nonprimitive
    }

    // transport_go_to_tag_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(transport_go_to_tag_infoJSON, "type");
    }

    // transport_go_to_tag_info->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(transport_go_to_tag_infoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }

    // transport_go_to_tag_info->allow_global_jump
    cJSON *allow_global_jump = cJSON_GetObjectItemCaseSensitive(transport_go_to_tag_infoJSON, "allowGlobalJump");
    if (allow_global_jump) { 
    if(!cJSON_IsBool(allow_global_jump))
    {
    goto end; //Bool
    }
    }

    // transport_go_to_tag_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_go_to_tag_infoJSON, "playmode");
    }


    transport_go_to_tag_info_local_var = transport_go_to_tag_info_create (
        transport ? transport_local_nonprim : NULL,
        value ? strdup(value->valuestring) : NULL,
        allow_global_jump ? allow_global_jump->valueint : 0,
        );

    return transport_go_to_tag_info_local_var;
end:
    if (transport_local_nonprim) {
        d3api_locator_free(transport_local_nonprim);
        transport_local_nonprim = NULL;
    }
    return NULL;

}

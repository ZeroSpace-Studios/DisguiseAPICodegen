#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_tag_info.h"


char* typetransport_tag_info_ToString(d3_api_transport_tag_info__e type) {
    char* typeArray[] =  { "NULL", "TagType_Unknown", "TC", "MIDI", "CUE" };
	return typeArray[type];
}

d3_api_transport_tag_info__e typetransport_tag_info_FromString(char* type){
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

transport_tag_info_t *transport_tag_info_create(
    double time,
    char *value
    ) {
    transport_tag_info_t *transport_tag_info_local_var = malloc(sizeof(transport_tag_info_t));
    if (!transport_tag_info_local_var) {
        return NULL;
    }
    transport_tag_info_local_var->time = time;
    transport_tag_info_local_var->type = type;
    transport_tag_info_local_var->value = value;

    return transport_tag_info_local_var;
}


void transport_tag_info_free(transport_tag_info_t *transport_tag_info) {
    if(NULL == transport_tag_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_tag_info->value) {
        free(transport_tag_info->value);
        transport_tag_info->value = NULL;
    }
    free(transport_tag_info);
}

cJSON *transport_tag_info_convertToJSON(transport_tag_info_t *transport_tag_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_tag_info->time
    if(transport_tag_info->time) { 
    if(cJSON_AddNumberToObject(item, "time", transport_tag_info->time) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_tag_info->type
    
    


    // transport_tag_info->value
    if(transport_tag_info->value) { 
    if(cJSON_AddStringToObject(item, "value", transport_tag_info->value) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_tag_info_t *transport_tag_info_parseFromJSON(cJSON *transport_tag_infoJSON){

    transport_tag_info_t *transport_tag_info_local_var = NULL;

    // transport_tag_info->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(transport_tag_infoJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }

    // transport_tag_info->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(transport_tag_infoJSON, "type");
    }

    // transport_tag_info->value
    cJSON *value = cJSON_GetObjectItemCaseSensitive(transport_tag_infoJSON, "value");
    if (value) { 
    if(!cJSON_IsString(value))
    {
    goto end; //String
    }
    }


    transport_tag_info_local_var = transport_tag_info_create (
        time ? time->valuedouble : 0,
        value ? strdup(value->valuestring) : NULL
        );

    return transport_tag_info_local_var;
end:
    return NULL;

}

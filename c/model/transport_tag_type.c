#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_tag_type.h"


char* transport_tag_type_transport_tag_type_ToString(d3_api_transport_tag_type__e transport_tag_type) {
    char *transport_tag_typeArray[] =  { "NULL", "TagType_Unknown", "TC", "MIDI", "CUE" };
    return transport_tag_typeArray[transport_tag_type];
}

d3_api_transport_tag_type__e transport_tag_type_transport_tag_type_FromString(char* transport_tag_type) {
    int stringToReturn = 0;
    char *transport_tag_typeArray[] =  { "NULL", "TagType_Unknown", "TC", "MIDI", "CUE" };
    size_t sizeofArray = sizeof(transport_tag_typeArray) / sizeof(transport_tag_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(transport_tag_type, transport_tag_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *transport_tag_type_transport_tag_type_convertToJSON(d3_api_transport_tag_type__e transport_tag_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "transport_tag_type", transport_tag_type_transport_tag_type_ToString(transport_tag_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_transport_tag_type__e transport_tag_type_transport_tag_type_parseFromJSON(cJSON *transport_tag_typeJSON) {
    d3_api_transport_tag_type__e *transport_tag_type = NULL;
    d3_api_transport_tag_type__e transport_tag_typeVariable;
    cJSON *transport_tag_typeVar = cJSON_GetObjectItemCaseSensitive(transport_tag_typeJSON, "transport_tag_type");
    if(!cJSON_IsString(transport_tag_typeVar) || (transport_tag_typeVar->valuestring == NULL)){
        goto end;
    }
    transport_tag_typeVariable = transport_tag_type_transport_tag_type_FromString(transport_tag_typeVar->valuestring);
    return transport_tag_typeVariable;
end:
    return 0;
}

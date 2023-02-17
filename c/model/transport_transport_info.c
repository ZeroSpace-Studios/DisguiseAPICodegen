#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_transport_info.h"


char* playmodetransport_transport_info_ToString(d3_api_transport_transport_info__e playmode) {
    char* playmodeArray[] =  { "NULL", "NotSet", "Play", "PlaySection", "Loop", "Stop", "Unknown" };
	return playmodeArray[playmode];
}

d3_api_transport_transport_info__e playmodetransport_transport_info_FromString(char* playmode){
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

transport_transport_info_t *transport_transport_info_create(
    char *uid,
    char *name,
    int engaged,
    double volume,
    double brightness,
    ) {
    transport_transport_info_t *transport_transport_info_local_var = malloc(sizeof(transport_transport_info_t));
    if (!transport_transport_info_local_var) {
        return NULL;
    }
    transport_transport_info_local_var->uid = uid;
    transport_transport_info_local_var->name = name;
    transport_transport_info_local_var->engaged = engaged;
    transport_transport_info_local_var->volume = volume;
    transport_transport_info_local_var->brightness = brightness;
    transport_transport_info_local_var->playmode = playmode;

    return transport_transport_info_local_var;
}


void transport_transport_info_free(transport_transport_info_t *transport_transport_info) {
    if(NULL == transport_transport_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_transport_info->uid) {
        free(transport_transport_info->uid);
        transport_transport_info->uid = NULL;
    }
    if (transport_transport_info->name) {
        free(transport_transport_info->name);
        transport_transport_info->name = NULL;
    }
    free(transport_transport_info);
}

cJSON *transport_transport_info_convertToJSON(transport_transport_info_t *transport_transport_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_transport_info->uid
    if(transport_transport_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", transport_transport_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // transport_transport_info->name
    if(transport_transport_info->name) { 
    if(cJSON_AddStringToObject(item, "name", transport_transport_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // transport_transport_info->engaged
    if(transport_transport_info->engaged) { 
    if(cJSON_AddBoolToObject(item, "engaged", transport_transport_info->engaged) == NULL) {
    goto fail; //Bool
    }
     } 


    // transport_transport_info->volume
    if(transport_transport_info->volume) { 
    if(cJSON_AddNumberToObject(item, "volume", transport_transport_info->volume) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_transport_info->brightness
    if(transport_transport_info->brightness) { 
    if(cJSON_AddNumberToObject(item, "brightness", transport_transport_info->brightness) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_transport_info->playmode
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_transport_info_t *transport_transport_info_parseFromJSON(cJSON *transport_transport_infoJSON){

    transport_transport_info_t *transport_transport_info_local_var = NULL;

    // transport_transport_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // transport_transport_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // transport_transport_info->engaged
    cJSON *engaged = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "engaged");
    if (engaged) { 
    if(!cJSON_IsBool(engaged))
    {
    goto end; //Bool
    }
    }

    // transport_transport_info->volume
    cJSON *volume = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "volume");
    if (volume) { 
    if(!cJSON_IsNumber(volume))
    {
    goto end; //Numeric
    }
    }

    // transport_transport_info->brightness
    cJSON *brightness = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "brightness");
    if (brightness) { 
    if(!cJSON_IsNumber(brightness))
    {
    goto end; //Numeric
    }
    }

    // transport_transport_info->playmode
    cJSON *playmode = cJSON_GetObjectItemCaseSensitive(transport_transport_infoJSON, "playmode");
    }


    transport_transport_info_local_var = transport_transport_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        engaged ? engaged->valueint : 0,
        volume ? volume->valuedouble : 0,
        brightness ? brightness->valuedouble : 0,
        );

    return transport_transport_info_local_var;
end:
    return NULL;

}

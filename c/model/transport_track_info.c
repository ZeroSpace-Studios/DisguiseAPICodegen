#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_track_info.h"


char* crossfadetransport_track_info_ToString(d3_api_transport_track_info__e crossfade) {
    char* crossfadeArray[] =  { "NULL", "Unknown", "Off", "Fade", "TrackSection" };
	return crossfadeArray[crossfade];
}

d3_api_transport_track_info__e crossfadetransport_track_info_FromString(char* crossfade){
    int stringToReturn = 0;
    char *crossfadeArray[] =  { "NULL", "Unknown", "Off", "Fade", "TrackSection" };
    size_t sizeofArray = sizeof(crossfadeArray) / sizeof(crossfadeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(crossfade, crossfadeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

transport_track_info_t *transport_track_info_create(
    char *uid,
    char *name,
    double length,
    ) {
    transport_track_info_t *transport_track_info_local_var = malloc(sizeof(transport_track_info_t));
    if (!transport_track_info_local_var) {
        return NULL;
    }
    transport_track_info_local_var->uid = uid;
    transport_track_info_local_var->name = name;
    transport_track_info_local_var->length = length;
    transport_track_info_local_var->crossfade = crossfade;

    return transport_track_info_local_var;
}


void transport_track_info_free(transport_track_info_t *transport_track_info) {
    if(NULL == transport_track_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_track_info->uid) {
        free(transport_track_info->uid);
        transport_track_info->uid = NULL;
    }
    if (transport_track_info->name) {
        free(transport_track_info->name);
        transport_track_info->name = NULL;
    }
    free(transport_track_info);
}

cJSON *transport_track_info_convertToJSON(transport_track_info_t *transport_track_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_track_info->uid
    if(transport_track_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", transport_track_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // transport_track_info->name
    if(transport_track_info->name) { 
    if(cJSON_AddStringToObject(item, "name", transport_track_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // transport_track_info->length
    if(transport_track_info->length) { 
    if(cJSON_AddNumberToObject(item, "length", transport_track_info->length) == NULL) {
    goto fail; //Numeric
    }
     } 


    // transport_track_info->crossfade
    
    

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

transport_track_info_t *transport_track_info_parseFromJSON(cJSON *transport_track_infoJSON){

    transport_track_info_t *transport_track_info_local_var = NULL;

    // transport_track_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(transport_track_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // transport_track_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transport_track_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // transport_track_info->length
    cJSON *length = cJSON_GetObjectItemCaseSensitive(transport_track_infoJSON, "length");
    if (length) { 
    if(!cJSON_IsNumber(length))
    {
    goto end; //Numeric
    }
    }

    // transport_track_info->crossfade
    cJSON *crossfade = cJSON_GetObjectItemCaseSensitive(transport_track_infoJSON, "crossfade");
    }


    transport_track_info_local_var = transport_track_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        length ? length->valuedouble : 0,
        );

    return transport_track_info_local_var;
end:
    return NULL;

}

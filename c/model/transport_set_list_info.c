#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_set_list_info.h"



transport_set_list_info_t *transport_set_list_info_create(
    char *uid,
    char *name,
    list_t *tracks
    ) {
    transport_set_list_info_t *transport_set_list_info_local_var = malloc(sizeof(transport_set_list_info_t));
    if (!transport_set_list_info_local_var) {
        return NULL;
    }
    transport_set_list_info_local_var->uid = uid;
    transport_set_list_info_local_var->name = name;
    transport_set_list_info_local_var->tracks = tracks;

    return transport_set_list_info_local_var;
}


void transport_set_list_info_free(transport_set_list_info_t *transport_set_list_info) {
    if(NULL == transport_set_list_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_set_list_info->uid) {
        free(transport_set_list_info->uid);
        transport_set_list_info->uid = NULL;
    }
    if (transport_set_list_info->name) {
        free(transport_set_list_info->name);
        transport_set_list_info->name = NULL;
    }
    if (transport_set_list_info->tracks) {
        list_ForEach(listEntry, transport_set_list_info->tracks) {
            transport_track_info_free(listEntry->data);
        }
        list_free(transport_set_list_info->tracks);
        transport_set_list_info->tracks = NULL;
    }
    free(transport_set_list_info);
}

cJSON *transport_set_list_info_convertToJSON(transport_set_list_info_t *transport_set_list_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_set_list_info->uid
    if(transport_set_list_info->uid) { 
    if(cJSON_AddStringToObject(item, "uid", transport_set_list_info->uid) == NULL) {
    goto fail; //String
    }
     } 


    // transport_set_list_info->name
    if(transport_set_list_info->name) { 
    if(cJSON_AddStringToObject(item, "name", transport_set_list_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // transport_set_list_info->tracks
    if(transport_set_list_info->tracks) { 
    cJSON *tracks = cJSON_AddArrayToObject(item, "tracks");
    if(tracks == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tracksListEntry;
    if (transport_set_list_info->tracks) {
    list_ForEach(tracksListEntry, transport_set_list_info->tracks) {
    cJSON *itemLocal = transport_track_info_convertToJSON(tracksListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tracks, itemLocal);
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

transport_set_list_info_t *transport_set_list_info_parseFromJSON(cJSON *transport_set_list_infoJSON){

    transport_set_list_info_t *transport_set_list_info_local_var = NULL;

    // transport_set_list_info->uid
    cJSON *uid = cJSON_GetObjectItemCaseSensitive(transport_set_list_infoJSON, "uid");
    if (uid) { 
    if(!cJSON_IsString(uid))
    {
    goto end; //String
    }
    }

    // transport_set_list_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(transport_set_list_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // transport_set_list_info->tracks
    cJSON *tracks = cJSON_GetObjectItemCaseSensitive(transport_set_list_infoJSON, "tracks");
    list_t *tracksList;
    if (tracks) { 
    cJSON *tracks_local_nonprimitive;
    if(!cJSON_IsArray(tracks)){
        goto end; //nonprimitive container
    }

    tracksList = list_create();

    cJSON_ArrayForEach(tracks_local_nonprimitive,tracks )
    {
        if(!cJSON_IsObject(tracks_local_nonprimitive)){
            goto end;
        }
        transport_track_info_t *tracksItem = transport_track_info_parseFromJSON(tracks_local_nonprimitive);

        list_addElement(tracksList, tracksItem);
    }
    }


    transport_set_list_info_local_var = transport_set_list_info_create (
        uid ? strdup(uid->valuestring) : NULL,
        name ? strdup(name->valuestring) : NULL,
        tracks ? tracksList : NULL
        );

    return transport_set_list_info_local_var;
end:
    return NULL;

}

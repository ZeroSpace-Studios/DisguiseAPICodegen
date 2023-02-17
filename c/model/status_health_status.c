#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "status_health_status.h"



status_health_status_t *status_health_status_create(
    float average_fps,
    float video_dropped_frames,
    float video_missed_frames,
    list_t *states
    ) {
    status_health_status_t *status_health_status_local_var = malloc(sizeof(status_health_status_t));
    if (!status_health_status_local_var) {
        return NULL;
    }
    status_health_status_local_var->average_fps = average_fps;
    status_health_status_local_var->video_dropped_frames = video_dropped_frames;
    status_health_status_local_var->video_missed_frames = video_missed_frames;
    status_health_status_local_var->states = states;

    return status_health_status_local_var;
}


void status_health_status_free(status_health_status_t *status_health_status) {
    if(NULL == status_health_status){
        return ;
    }
    listEntry_t *listEntry;
    if (status_health_status->states) {
        list_ForEach(listEntry, status_health_status->states) {
            status_health_states_free(listEntry->data);
        }
        list_free(status_health_status->states);
        status_health_status->states = NULL;
    }
    free(status_health_status);
}

cJSON *status_health_status_convertToJSON(status_health_status_t *status_health_status) {
    cJSON *item = cJSON_CreateObject();

    // status_health_status->average_fps
    if(status_health_status->average_fps) { 
    if(cJSON_AddNumberToObject(item, "averageFPS", status_health_status->average_fps) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_health_status->video_dropped_frames
    if(status_health_status->video_dropped_frames) { 
    if(cJSON_AddNumberToObject(item, "videoDroppedFrames", status_health_status->video_dropped_frames) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_health_status->video_missed_frames
    if(status_health_status->video_missed_frames) { 
    if(cJSON_AddNumberToObject(item, "videoMissedFrames", status_health_status->video_missed_frames) == NULL) {
    goto fail; //Numeric
    }
     } 


    // status_health_status->states
    if(status_health_status->states) { 
    cJSON *states = cJSON_AddArrayToObject(item, "states");
    if(states == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *statesListEntry;
    if (status_health_status->states) {
    list_ForEach(statesListEntry, status_health_status->states) {
    cJSON *itemLocal = status_health_states_convertToJSON(statesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(states, itemLocal);
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

status_health_status_t *status_health_status_parseFromJSON(cJSON *status_health_statusJSON){

    status_health_status_t *status_health_status_local_var = NULL;

    // status_health_status->average_fps
    cJSON *average_fps = cJSON_GetObjectItemCaseSensitive(status_health_statusJSON, "averageFPS");
    if (average_fps) { 
    if(!cJSON_IsNumber(average_fps))
    {
    goto end; //Numeric
    }
    }

    // status_health_status->video_dropped_frames
    cJSON *video_dropped_frames = cJSON_GetObjectItemCaseSensitive(status_health_statusJSON, "videoDroppedFrames");
    if (video_dropped_frames) { 
    if(!cJSON_IsNumber(video_dropped_frames))
    {
    goto end; //Numeric
    }
    }

    // status_health_status->video_missed_frames
    cJSON *video_missed_frames = cJSON_GetObjectItemCaseSensitive(status_health_statusJSON, "videoMissedFrames");
    if (video_missed_frames) { 
    if(!cJSON_IsNumber(video_missed_frames))
    {
    goto end; //Numeric
    }
    }

    // status_health_status->states
    cJSON *states = cJSON_GetObjectItemCaseSensitive(status_health_statusJSON, "states");
    list_t *statesList;
    if (states) { 
    cJSON *states_local_nonprimitive;
    if(!cJSON_IsArray(states)){
        goto end; //nonprimitive container
    }

    statesList = list_create();

    cJSON_ArrayForEach(states_local_nonprimitive,states )
    {
        if(!cJSON_IsObject(states_local_nonprimitive)){
            goto end;
        }
        status_health_states_t *statesItem = status_health_states_parseFromJSON(states_local_nonprimitive);

        list_addElement(statesList, statesItem);
    }
    }


    status_health_status_local_var = status_health_status_create (
        average_fps ? average_fps->valuedouble : 0,
        video_dropped_frames ? video_dropped_frames->valuedouble : 0,
        video_missed_frames ? video_missed_frames->valuedouble : 0,
        states ? statesList : NULL
        );

    return status_health_status_local_var;
end:
    return NULL;

}

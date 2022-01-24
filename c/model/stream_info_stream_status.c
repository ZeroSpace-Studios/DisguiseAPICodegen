#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "stream_info_stream_status.h"


char* stream_info_stream_status_stream_info_stream_status_ToString(d3_api_stream_info_stream_status__e stream_info_stream_status) {
    char *stream_info_stream_statusArray[] =  { "NULL", "None", "Good", "DroppingFrames", "BadStream", "NoStream", "Offline" };
    return stream_info_stream_statusArray[stream_info_stream_status];
}

d3_api_stream_info_stream_status__e stream_info_stream_status_stream_info_stream_status_FromString(char* stream_info_stream_status) {
    int stringToReturn = 0;
    char *stream_info_stream_statusArray[] =  { "NULL", "None", "Good", "DroppingFrames", "BadStream", "NoStream", "Offline" };
    size_t sizeofArray = sizeof(stream_info_stream_statusArray) / sizeof(stream_info_stream_statusArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(stream_info_stream_status, stream_info_stream_statusArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *stream_info_stream_status_stream_info_stream_status_convertToJSON(d3_api_stream_info_stream_status__e stream_info_stream_status) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "stream_info_stream_status", stream_info_stream_status_stream_info_stream_status_ToString(stream_info_stream_status)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_stream_info_stream_status__e stream_info_stream_status_stream_info_stream_status_parseFromJSON(cJSON *stream_info_stream_statusJSON) {
    d3_api_stream_info_stream_status__e *stream_info_stream_status = NULL;
    d3_api_stream_info_stream_status__e stream_info_stream_statusVariable;
    cJSON *stream_info_stream_statusVar = cJSON_GetObjectItemCaseSensitive(stream_info_stream_statusJSON, "stream_info_stream_status");
    if(!cJSON_IsString(stream_info_stream_statusVar) || (stream_info_stream_statusVar->valuestring == NULL)){
        goto end;
    }
    stream_info_stream_statusVariable = stream_info_stream_status_stream_info_stream_status_FromString(stream_info_stream_statusVar->valuestring);
    return stream_info_stream_statusVariable;
end:
    return 0;
}

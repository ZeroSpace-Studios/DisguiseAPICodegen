#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "mixedreality_observation_type.h"


char* mixedreality_observation_type_mixedreality_observation_type_ToString(d3_api_mixedreality_observation_type__e mixedreality_observation_type) {
    char *mixedreality_observation_typeArray[] =  { "NULL", "Primary", "Secondary" };
    return mixedreality_observation_typeArray[mixedreality_observation_type];
}

d3_api_mixedreality_observation_type__e mixedreality_observation_type_mixedreality_observation_type_FromString(char* mixedreality_observation_type) {
    int stringToReturn = 0;
    char *mixedreality_observation_typeArray[] =  { "NULL", "Primary", "Secondary" };
    size_t sizeofArray = sizeof(mixedreality_observation_typeArray) / sizeof(mixedreality_observation_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(mixedreality_observation_type, mixedreality_observation_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *mixedreality_observation_type_mixedreality_observation_type_convertToJSON(d3_api_mixedreality_observation_type__e mixedreality_observation_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "mixedreality_observation_type", mixedreality_observation_type_mixedreality_observation_type_ToString(mixedreality_observation_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_mixedreality_observation_type__e mixedreality_observation_type_mixedreality_observation_type_parseFromJSON(cJSON *mixedreality_observation_typeJSON) {
    d3_api_mixedreality_observation_type__e *mixedreality_observation_type = NULL;
    d3_api_mixedreality_observation_type__e mixedreality_observation_typeVariable;
    cJSON *mixedreality_observation_typeVar = cJSON_GetObjectItemCaseSensitive(mixedreality_observation_typeJSON, "mixedreality_observation_type");
    if(!cJSON_IsString(mixedreality_observation_typeVar) || (mixedreality_observation_typeVar->valuestring == NULL)){
        goto end;
    }
    mixedreality_observation_typeVariable = mixedreality_observation_type_mixedreality_observation_type_FromString(mixedreality_observation_typeVar->valuestring);
    return mixedreality_observation_typeVariable;
end:
    return 0;
}

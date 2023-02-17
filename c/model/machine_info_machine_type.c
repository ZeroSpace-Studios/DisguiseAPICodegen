#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "machine_info_machine_type.h"


char* machine_info_machine_type_machine_info_machine_type_ToString(d3_api_machine_info_machine_type__e machine_info_machine_type) {
    char *machine_info_machine_typeArray[] =  { "NULL", "Unknown", "Designer", "V2_5", "Pro4x2", "Pro4x4", "Plus2x2", "Pro4x4NoVfcs", "Node", "Pro2x4", "Gx1", "Gx2", "SoloV1", "Vx4", "Gx2c", "Rx", "RxII", "Vx1", "Vx2", "Vx4Plus", "Gx3" };
    return machine_info_machine_typeArray[machine_info_machine_type];
}

d3_api_machine_info_machine_type__e machine_info_machine_type_machine_info_machine_type_FromString(char* machine_info_machine_type) {
    int stringToReturn = 0;
    char *machine_info_machine_typeArray[] =  { "NULL", "Unknown", "Designer", "V2_5", "Pro4x2", "Pro4x4", "Plus2x2", "Pro4x4NoVfcs", "Node", "Pro2x4", "Gx1", "Gx2", "SoloV1", "Vx4", "Gx2c", "Rx", "RxII", "Vx1", "Vx2", "Vx4Plus", "Gx3" };
    size_t sizeofArray = sizeof(machine_info_machine_typeArray) / sizeof(machine_info_machine_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(machine_info_machine_type, machine_info_machine_typeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *machine_info_machine_type_machine_info_machine_type_convertToJSON(d3_api_machine_info_machine_type__e machine_info_machine_type) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "machine_info_machine_type", machine_info_machine_type_machine_info_machine_type_ToString(machine_info_machine_type)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

d3_api_machine_info_machine_type__e machine_info_machine_type_machine_info_machine_type_parseFromJSON(cJSON *machine_info_machine_typeJSON) {
    d3_api_machine_info_machine_type__e *machine_info_machine_type = NULL;
    d3_api_machine_info_machine_type__e machine_info_machine_typeVariable;
    cJSON *machine_info_machine_typeVar = cJSON_GetObjectItemCaseSensitive(machine_info_machine_typeJSON, "machine_info_machine_type");
    if(!cJSON_IsString(machine_info_machine_typeVar) || (machine_info_machine_typeVar->valuestring == NULL)){
        goto end;
    }
    machine_info_machine_typeVariable = machine_info_machine_type_machine_info_machine_type_FromString(machine_info_machine_typeVar->valuestring);
    return machine_info_machine_typeVariable;
end:
    return 0;
}

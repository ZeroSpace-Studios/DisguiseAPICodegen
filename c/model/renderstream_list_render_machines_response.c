#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_list_render_machines_response.h"



renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_create(
    list_t *machines
    ) {
    renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_local_var = malloc(sizeof(renderstream_list_render_machines_response_t));
    if (!renderstream_list_render_machines_response_local_var) {
        return NULL;
    }
    renderstream_list_render_machines_response_local_var->machines = machines;

    return renderstream_list_render_machines_response_local_var;
}


void renderstream_list_render_machines_response_free(renderstream_list_render_machines_response_t *renderstream_list_render_machines_response) {
    if(NULL == renderstream_list_render_machines_response){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_list_render_machines_response->machines) {
        list_ForEach(listEntry, renderstream_list_render_machines_response->machines) {
            renderstream_render_machine_info_free(listEntry->data);
        }
        list_free(renderstream_list_render_machines_response->machines);
        renderstream_list_render_machines_response->machines = NULL;
    }
    free(renderstream_list_render_machines_response);
}

cJSON *renderstream_list_render_machines_response_convertToJSON(renderstream_list_render_machines_response_t *renderstream_list_render_machines_response) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_list_render_machines_response->machines
    if(renderstream_list_render_machines_response->machines) { 
    cJSON *machines = cJSON_AddArrayToObject(item, "machines");
    if(machines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *machinesListEntry;
    if (renderstream_list_render_machines_response->machines) {
    list_ForEach(machinesListEntry, renderstream_list_render_machines_response->machines) {
    cJSON *itemLocal = renderstream_render_machine_info_convertToJSON(machinesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(machines, itemLocal);
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

renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_parseFromJSON(cJSON *renderstream_list_render_machines_responseJSON){

    renderstream_list_render_machines_response_t *renderstream_list_render_machines_response_local_var = NULL;

    // renderstream_list_render_machines_response->machines
    cJSON *machines = cJSON_GetObjectItemCaseSensitive(renderstream_list_render_machines_responseJSON, "machines");
    list_t *machinesList;
    if (machines) { 
    cJSON *machines_local_nonprimitive;
    if(!cJSON_IsArray(machines)){
        goto end; //nonprimitive container
    }

    machinesList = list_create();

    cJSON_ArrayForEach(machines_local_nonprimitive,machines )
    {
        if(!cJSON_IsObject(machines_local_nonprimitive)){
            goto end;
        }
        renderstream_render_machine_info_t *machinesItem = renderstream_render_machine_info_parseFromJSON(machines_local_nonprimitive);

        list_addElement(machinesList, machinesItem);
    }
    }


    renderstream_list_render_machines_response_local_var = renderstream_list_render_machines_response_create (
        machines ? machinesList : NULL
        );

    return renderstream_list_render_machines_response_local_var;
end:
    return NULL;

}

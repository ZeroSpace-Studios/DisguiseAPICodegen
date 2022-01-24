#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_cluster_info.h"



renderstream_cluster_info_t *renderstream_cluster_info_create(
    char *name,
    list_t *render_machines,
    renderstream_render_machine_info_t *content_source_machine,
    list_t *understudies
    ) {
    renderstream_cluster_info_t *renderstream_cluster_info_local_var = malloc(sizeof(renderstream_cluster_info_t));
    if (!renderstream_cluster_info_local_var) {
        return NULL;
    }
    renderstream_cluster_info_local_var->name = name;
    renderstream_cluster_info_local_var->render_machines = render_machines;
    renderstream_cluster_info_local_var->content_source_machine = content_source_machine;
    renderstream_cluster_info_local_var->understudies = understudies;

    return renderstream_cluster_info_local_var;
}


void renderstream_cluster_info_free(renderstream_cluster_info_t *renderstream_cluster_info) {
    if(NULL == renderstream_cluster_info){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_cluster_info->name) {
        free(renderstream_cluster_info->name);
        renderstream_cluster_info->name = NULL;
    }
    if (renderstream_cluster_info->render_machines) {
        list_ForEach(listEntry, renderstream_cluster_info->render_machines) {
            renderstream_render_machine_info_free(listEntry->data);
        }
        list_free(renderstream_cluster_info->render_machines);
        renderstream_cluster_info->render_machines = NULL;
    }
    if (renderstream_cluster_info->content_source_machine) {
        renderstream_render_machine_info_free(renderstream_cluster_info->content_source_machine);
        renderstream_cluster_info->content_source_machine = NULL;
    }
    if (renderstream_cluster_info->understudies) {
        list_ForEach(listEntry, renderstream_cluster_info->understudies) {
            renderstream_render_machine_info_free(listEntry->data);
        }
        list_free(renderstream_cluster_info->understudies);
        renderstream_cluster_info->understudies = NULL;
    }
    free(renderstream_cluster_info);
}

cJSON *renderstream_cluster_info_convertToJSON(renderstream_cluster_info_t *renderstream_cluster_info) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_cluster_info->name
    if(renderstream_cluster_info->name) { 
    if(cJSON_AddStringToObject(item, "name", renderstream_cluster_info->name) == NULL) {
    goto fail; //String
    }
     } 


    // renderstream_cluster_info->render_machines
    if(renderstream_cluster_info->render_machines) { 
    cJSON *render_machines = cJSON_AddArrayToObject(item, "renderMachines");
    if(render_machines == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *render_machinesListEntry;
    if (renderstream_cluster_info->render_machines) {
    list_ForEach(render_machinesListEntry, renderstream_cluster_info->render_machines) {
    cJSON *itemLocal = renderstream_render_machine_info_convertToJSON(render_machinesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(render_machines, itemLocal);
    }
    }
     } 


    // renderstream_cluster_info->content_source_machine
    if(renderstream_cluster_info->content_source_machine) { 
    cJSON *content_source_machine_local_JSON = renderstream_render_machine_info_convertToJSON(renderstream_cluster_info->content_source_machine);
    if(content_source_machine_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "contentSourceMachine", content_source_machine_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
     } 


    // renderstream_cluster_info->understudies
    if(renderstream_cluster_info->understudies) { 
    cJSON *understudies = cJSON_AddArrayToObject(item, "understudies");
    if(understudies == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *understudiesListEntry;
    if (renderstream_cluster_info->understudies) {
    list_ForEach(understudiesListEntry, renderstream_cluster_info->understudies) {
    cJSON *itemLocal = renderstream_render_machine_info_convertToJSON(understudiesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(understudies, itemLocal);
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

renderstream_cluster_info_t *renderstream_cluster_info_parseFromJSON(cJSON *renderstream_cluster_infoJSON){

    renderstream_cluster_info_t *renderstream_cluster_info_local_var = NULL;

    // renderstream_cluster_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(renderstream_cluster_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }
    }

    // renderstream_cluster_info->render_machines
    cJSON *render_machines = cJSON_GetObjectItemCaseSensitive(renderstream_cluster_infoJSON, "renderMachines");
    list_t *render_machinesList;
    if (render_machines) { 
    cJSON *render_machines_local_nonprimitive;
    if(!cJSON_IsArray(render_machines)){
        goto end; //nonprimitive container
    }

    render_machinesList = list_create();

    cJSON_ArrayForEach(render_machines_local_nonprimitive,render_machines )
    {
        if(!cJSON_IsObject(render_machines_local_nonprimitive)){
            goto end;
        }
        renderstream_render_machine_info_t *render_machinesItem = renderstream_render_machine_info_parseFromJSON(render_machines_local_nonprimitive);

        list_addElement(render_machinesList, render_machinesItem);
    }
    }

    // renderstream_cluster_info->content_source_machine
    cJSON *content_source_machine = cJSON_GetObjectItemCaseSensitive(renderstream_cluster_infoJSON, "contentSourceMachine");
    renderstream_render_machine_info_t *content_source_machine_local_nonprim = NULL;
    if (content_source_machine) { 
    content_source_machine_local_nonprim = renderstream_render_machine_info_parseFromJSON(content_source_machine); //nonprimitive
    }

    // renderstream_cluster_info->understudies
    cJSON *understudies = cJSON_GetObjectItemCaseSensitive(renderstream_cluster_infoJSON, "understudies");
    list_t *understudiesList;
    if (understudies) { 
    cJSON *understudies_local_nonprimitive;
    if(!cJSON_IsArray(understudies)){
        goto end; //nonprimitive container
    }

    understudiesList = list_create();

    cJSON_ArrayForEach(understudies_local_nonprimitive,understudies )
    {
        if(!cJSON_IsObject(understudies_local_nonprimitive)){
            goto end;
        }
        renderstream_render_machine_info_t *understudiesItem = renderstream_render_machine_info_parseFromJSON(understudies_local_nonprimitive);

        list_addElement(understudiesList, understudiesItem);
    }
    }


    renderstream_cluster_info_local_var = renderstream_cluster_info_create (
        name ? strdup(name->valuestring) : NULL,
        render_machines ? render_machinesList : NULL,
        content_source_machine ? content_source_machine_local_nonprim : NULL,
        understudies ? understudiesList : NULL
        );

    return renderstream_cluster_info_local_var;
end:
    if (content_source_machine_local_nonprim) {
        renderstream_render_machine_info_free(content_source_machine_local_nonprim);
        content_source_machine_local_nonprim = NULL;
    }
    return NULL;

}

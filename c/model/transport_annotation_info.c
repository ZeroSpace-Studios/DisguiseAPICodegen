#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "transport_annotation_info.h"



transport_annotation_info_t *transport_annotation_info_create(
    list_t *notes,
    list_t *tags,
    list_t *sections
    ) {
    transport_annotation_info_t *transport_annotation_info_local_var = malloc(sizeof(transport_annotation_info_t));
    if (!transport_annotation_info_local_var) {
        return NULL;
    }
    transport_annotation_info_local_var->notes = notes;
    transport_annotation_info_local_var->tags = tags;
    transport_annotation_info_local_var->sections = sections;

    return transport_annotation_info_local_var;
}


void transport_annotation_info_free(transport_annotation_info_t *transport_annotation_info) {
    if(NULL == transport_annotation_info){
        return ;
    }
    listEntry_t *listEntry;
    if (transport_annotation_info->notes) {
        list_ForEach(listEntry, transport_annotation_info->notes) {
            transport_note_info_free(listEntry->data);
        }
        list_free(transport_annotation_info->notes);
        transport_annotation_info->notes = NULL;
    }
    if (transport_annotation_info->tags) {
        list_ForEach(listEntry, transport_annotation_info->tags) {
            transport_tag_info_free(listEntry->data);
        }
        list_free(transport_annotation_info->tags);
        transport_annotation_info->tags = NULL;
    }
    if (transport_annotation_info->sections) {
        list_ForEach(listEntry, transport_annotation_info->sections) {
            transport_section_info_free(listEntry->data);
        }
        list_free(transport_annotation_info->sections);
        transport_annotation_info->sections = NULL;
    }
    free(transport_annotation_info);
}

cJSON *transport_annotation_info_convertToJSON(transport_annotation_info_t *transport_annotation_info) {
    cJSON *item = cJSON_CreateObject();

    // transport_annotation_info->notes
    if(transport_annotation_info->notes) { 
    cJSON *notes = cJSON_AddArrayToObject(item, "notes");
    if(notes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *notesListEntry;
    if (transport_annotation_info->notes) {
    list_ForEach(notesListEntry, transport_annotation_info->notes) {
    cJSON *itemLocal = transport_note_info_convertToJSON(notesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(notes, itemLocal);
    }
    }
     } 


    // transport_annotation_info->tags
    if(transport_annotation_info->tags) { 
    cJSON *tags = cJSON_AddArrayToObject(item, "tags");
    if(tags == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tagsListEntry;
    if (transport_annotation_info->tags) {
    list_ForEach(tagsListEntry, transport_annotation_info->tags) {
    cJSON *itemLocal = transport_tag_info_convertToJSON(tagsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tags, itemLocal);
    }
    }
     } 


    // transport_annotation_info->sections
    if(transport_annotation_info->sections) { 
    cJSON *sections = cJSON_AddArrayToObject(item, "sections");
    if(sections == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *sectionsListEntry;
    if (transport_annotation_info->sections) {
    list_ForEach(sectionsListEntry, transport_annotation_info->sections) {
    cJSON *itemLocal = transport_section_info_convertToJSON(sectionsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(sections, itemLocal);
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

transport_annotation_info_t *transport_annotation_info_parseFromJSON(cJSON *transport_annotation_infoJSON){

    transport_annotation_info_t *transport_annotation_info_local_var = NULL;

    // transport_annotation_info->notes
    cJSON *notes = cJSON_GetObjectItemCaseSensitive(transport_annotation_infoJSON, "notes");
    list_t *notesList;
    if (notes) { 
    cJSON *notes_local_nonprimitive;
    if(!cJSON_IsArray(notes)){
        goto end; //nonprimitive container
    }

    notesList = list_create();

    cJSON_ArrayForEach(notes_local_nonprimitive,notes )
    {
        if(!cJSON_IsObject(notes_local_nonprimitive)){
            goto end;
        }
        transport_note_info_t *notesItem = transport_note_info_parseFromJSON(notes_local_nonprimitive);

        list_addElement(notesList, notesItem);
    }
    }

    // transport_annotation_info->tags
    cJSON *tags = cJSON_GetObjectItemCaseSensitive(transport_annotation_infoJSON, "tags");
    list_t *tagsList;
    if (tags) { 
    cJSON *tags_local_nonprimitive;
    if(!cJSON_IsArray(tags)){
        goto end; //nonprimitive container
    }

    tagsList = list_create();

    cJSON_ArrayForEach(tags_local_nonprimitive,tags )
    {
        if(!cJSON_IsObject(tags_local_nonprimitive)){
            goto end;
        }
        transport_tag_info_t *tagsItem = transport_tag_info_parseFromJSON(tags_local_nonprimitive);

        list_addElement(tagsList, tagsItem);
    }
    }

    // transport_annotation_info->sections
    cJSON *sections = cJSON_GetObjectItemCaseSensitive(transport_annotation_infoJSON, "sections");
    list_t *sectionsList;
    if (sections) { 
    cJSON *sections_local_nonprimitive;
    if(!cJSON_IsArray(sections)){
        goto end; //nonprimitive container
    }

    sectionsList = list_create();

    cJSON_ArrayForEach(sections_local_nonprimitive,sections )
    {
        if(!cJSON_IsObject(sections_local_nonprimitive)){
            goto end;
        }
        transport_section_info_t *sectionsItem = transport_section_info_parseFromJSON(sections_local_nonprimitive);

        list_addElement(sectionsList, sectionsItem);
    }
    }


    transport_annotation_info_local_var = transport_annotation_info_create (
        notes ? notesList : NULL,
        tags ? tagsList : NULL,
        sections ? sectionsList : NULL
        );

    return transport_annotation_info_local_var;
end:
    return NULL;

}

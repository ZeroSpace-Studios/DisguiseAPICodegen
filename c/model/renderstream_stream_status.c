#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "renderstream_stream_status.h"



renderstream_stream_status_t *renderstream_stream_status_create(
    int subscription_wanted,
    int subscribe_successful,
    double t_last_dropped,
    double t_last_error,
    char *last_error_message
    ) {
    renderstream_stream_status_t *renderstream_stream_status_local_var = malloc(sizeof(renderstream_stream_status_t));
    if (!renderstream_stream_status_local_var) {
        return NULL;
    }
    renderstream_stream_status_local_var->subscription_wanted = subscription_wanted;
    renderstream_stream_status_local_var->subscribe_successful = subscribe_successful;
    renderstream_stream_status_local_var->t_last_dropped = t_last_dropped;
    renderstream_stream_status_local_var->t_last_error = t_last_error;
    renderstream_stream_status_local_var->last_error_message = last_error_message;

    return renderstream_stream_status_local_var;
}


void renderstream_stream_status_free(renderstream_stream_status_t *renderstream_stream_status) {
    if(NULL == renderstream_stream_status){
        return ;
    }
    listEntry_t *listEntry;
    if (renderstream_stream_status->last_error_message) {
        free(renderstream_stream_status->last_error_message);
        renderstream_stream_status->last_error_message = NULL;
    }
    free(renderstream_stream_status);
}

cJSON *renderstream_stream_status_convertToJSON(renderstream_stream_status_t *renderstream_stream_status) {
    cJSON *item = cJSON_CreateObject();

    // renderstream_stream_status->subscription_wanted
    if(renderstream_stream_status->subscription_wanted) { 
    if(cJSON_AddBoolToObject(item, "subscriptionWanted", renderstream_stream_status->subscription_wanted) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_stream_status->subscribe_successful
    if(renderstream_stream_status->subscribe_successful) { 
    if(cJSON_AddBoolToObject(item, "subscribeSuccessful", renderstream_stream_status->subscribe_successful) == NULL) {
    goto fail; //Bool
    }
     } 


    // renderstream_stream_status->t_last_dropped
    if(renderstream_stream_status->t_last_dropped) { 
    if(cJSON_AddNumberToObject(item, "tLastDropped", renderstream_stream_status->t_last_dropped) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_stream_status->t_last_error
    if(renderstream_stream_status->t_last_error) { 
    if(cJSON_AddNumberToObject(item, "tLastError", renderstream_stream_status->t_last_error) == NULL) {
    goto fail; //Numeric
    }
     } 


    // renderstream_stream_status->last_error_message
    if(renderstream_stream_status->last_error_message) { 
    if(cJSON_AddStringToObject(item, "lastErrorMessage", renderstream_stream_status->last_error_message) == NULL) {
    goto fail; //String
    }
     } 

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

renderstream_stream_status_t *renderstream_stream_status_parseFromJSON(cJSON *renderstream_stream_statusJSON){

    renderstream_stream_status_t *renderstream_stream_status_local_var = NULL;

    // renderstream_stream_status->subscription_wanted
    cJSON *subscription_wanted = cJSON_GetObjectItemCaseSensitive(renderstream_stream_statusJSON, "subscriptionWanted");
    if (subscription_wanted) { 
    if(!cJSON_IsBool(subscription_wanted))
    {
    goto end; //Bool
    }
    }

    // renderstream_stream_status->subscribe_successful
    cJSON *subscribe_successful = cJSON_GetObjectItemCaseSensitive(renderstream_stream_statusJSON, "subscribeSuccessful");
    if (subscribe_successful) { 
    if(!cJSON_IsBool(subscribe_successful))
    {
    goto end; //Bool
    }
    }

    // renderstream_stream_status->t_last_dropped
    cJSON *t_last_dropped = cJSON_GetObjectItemCaseSensitive(renderstream_stream_statusJSON, "tLastDropped");
    if (t_last_dropped) { 
    if(!cJSON_IsNumber(t_last_dropped))
    {
    goto end; //Numeric
    }
    }

    // renderstream_stream_status->t_last_error
    cJSON *t_last_error = cJSON_GetObjectItemCaseSensitive(renderstream_stream_statusJSON, "tLastError");
    if (t_last_error) { 
    if(!cJSON_IsNumber(t_last_error))
    {
    goto end; //Numeric
    }
    }

    // renderstream_stream_status->last_error_message
    cJSON *last_error_message = cJSON_GetObjectItemCaseSensitive(renderstream_stream_statusJSON, "lastErrorMessage");
    if (last_error_message) { 
    if(!cJSON_IsString(last_error_message))
    {
    goto end; //String
    }
    }


    renderstream_stream_status_local_var = renderstream_stream_status_create (
        subscription_wanted ? subscription_wanted->valueint : 0,
        subscribe_successful ? subscribe_successful->valueint : 0,
        t_last_dropped ? t_last_dropped->valuedouble : 0,
        t_last_error ? t_last_error->valuedouble : 0,
        last_error_message ? strdup(last_error_message->valuestring) : NULL
        );

    return renderstream_stream_status_local_var;
end:
    return NULL;

}

/*
 * content_audio_metadata.h
 *
 * 
 */

#ifndef _content_audio_metadata_H_
#define _content_audio_metadata_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct content_audio_metadata_t content_audio_metadata_t;




typedef struct content_audio_metadata_t {
    long sample_rate; //numeric
    long n_channels; //numeric
    long n_samples; //numeric
    char *codec_name; // string
    char *codec_info; // string

} content_audio_metadata_t;

content_audio_metadata_t *content_audio_metadata_create(
    long sample_rate,
    long n_channels,
    long n_samples,
    char *codec_name,
    char *codec_info
);

void content_audio_metadata_free(content_audio_metadata_t *content_audio_metadata);

content_audio_metadata_t *content_audio_metadata_parseFromJSON(cJSON *content_audio_metadataJSON);

cJSON *content_audio_metadata_convertToJSON(content_audio_metadata_t *content_audio_metadata);

#endif /* _content_audio_metadata_H_ */


#ifndef content_media_metadata_TEST
#define content_media_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_media_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_media_metadata.h"
content_media_metadata_t* instantiate_content_media_metadata(int include_optional);

#include "test_content_video_metadata.c"
#include "test_content_audio_metadata.c"
#include "test_content_mesh_metadata.c"


content_media_metadata_t* instantiate_content_media_metadata(int include_optional) {
  content_media_metadata_t* content_media_metadata = NULL;
  if (include_optional) {
    content_media_metadata = content_media_metadata_create(
      "0",
       // false, not to have infinite recursion
      instantiate_content_video_metadata(0),
       // false, not to have infinite recursion
      instantiate_content_audio_metadata(0),
       // false, not to have infinite recursion
      instantiate_content_mesh_metadata(0)
    );
  } else {
    content_media_metadata = content_media_metadata_create(
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return content_media_metadata;
}


#ifdef content_media_metadata_MAIN

void test_content_media_metadata(int include_optional) {
    content_media_metadata_t* content_media_metadata_1 = instantiate_content_media_metadata(include_optional);

	cJSON* jsoncontent_media_metadata_1 = content_media_metadata_convertToJSON(content_media_metadata_1);
	printf("content_media_metadata :\n%s\n", cJSON_Print(jsoncontent_media_metadata_1));
	content_media_metadata_t* content_media_metadata_2 = content_media_metadata_parseFromJSON(jsoncontent_media_metadata_1);
	cJSON* jsoncontent_media_metadata_2 = content_media_metadata_convertToJSON(content_media_metadata_2);
	printf("repeating content_media_metadata:\n%s\n", cJSON_Print(jsoncontent_media_metadata_2));
}

int main() {
  test_content_media_metadata(1);
  test_content_media_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_media_metadata_MAIN
#endif // content_media_metadata_TEST

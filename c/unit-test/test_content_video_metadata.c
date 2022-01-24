#ifndef content_video_metadata_TEST
#define content_video_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_video_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_video_metadata.h"
content_video_metadata_t* instantiate_content_video_metadata(int include_optional);

#include "test_content_image_sequence_metadata.c"


content_video_metadata_t* instantiate_content_video_metadata(int include_optional) {
  content_video_metadata_t* content_video_metadata = NULL;
  if (include_optional) {
    content_video_metadata = content_video_metadata_create(
       // false, not to have infinite recursion
      instantiate_content_image_sequence_metadata(0),
      1,
      1,
      1.337
    );
  } else {
    content_video_metadata = content_video_metadata_create(
      NULL,
      1,
      1,
      1.337
    );
  }

  return content_video_metadata;
}


#ifdef content_video_metadata_MAIN

void test_content_video_metadata(int include_optional) {
    content_video_metadata_t* content_video_metadata_1 = instantiate_content_video_metadata(include_optional);

	cJSON* jsoncontent_video_metadata_1 = content_video_metadata_convertToJSON(content_video_metadata_1);
	printf("content_video_metadata :\n%s\n", cJSON_Print(jsoncontent_video_metadata_1));
	content_video_metadata_t* content_video_metadata_2 = content_video_metadata_parseFromJSON(jsoncontent_video_metadata_1);
	cJSON* jsoncontent_video_metadata_2 = content_video_metadata_convertToJSON(content_video_metadata_2);
	printf("repeating content_video_metadata:\n%s\n", cJSON_Print(jsoncontent_video_metadata_2));
}

int main() {
  test_content_video_metadata(1);
  test_content_video_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_video_metadata_MAIN
#endif // content_video_metadata_TEST

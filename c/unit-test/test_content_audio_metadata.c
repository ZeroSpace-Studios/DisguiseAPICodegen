#ifndef content_audio_metadata_TEST
#define content_audio_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_audio_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_audio_metadata.h"
content_audio_metadata_t* instantiate_content_audio_metadata(int include_optional);



content_audio_metadata_t* instantiate_content_audio_metadata(int include_optional) {
  content_audio_metadata_t* content_audio_metadata = NULL;
  if (include_optional) {
    content_audio_metadata = content_audio_metadata_create(
      56,
      56,
      56,
      "0",
      "0"
    );
  } else {
    content_audio_metadata = content_audio_metadata_create(
      56,
      56,
      56,
      "0",
      "0"
    );
  }

  return content_audio_metadata;
}


#ifdef content_audio_metadata_MAIN

void test_content_audio_metadata(int include_optional) {
    content_audio_metadata_t* content_audio_metadata_1 = instantiate_content_audio_metadata(include_optional);

	cJSON* jsoncontent_audio_metadata_1 = content_audio_metadata_convertToJSON(content_audio_metadata_1);
	printf("content_audio_metadata :\n%s\n", cJSON_Print(jsoncontent_audio_metadata_1));
	content_audio_metadata_t* content_audio_metadata_2 = content_audio_metadata_parseFromJSON(jsoncontent_audio_metadata_1);
	cJSON* jsoncontent_audio_metadata_2 = content_audio_metadata_convertToJSON(content_audio_metadata_2);
	printf("repeating content_audio_metadata:\n%s\n", cJSON_Print(jsoncontent_audio_metadata_2));
}

int main() {
  test_content_audio_metadata(1);
  test_content_audio_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_audio_metadata_MAIN
#endif // content_audio_metadata_TEST

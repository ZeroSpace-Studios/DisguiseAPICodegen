#ifndef content_image_metadata_TEST
#define content_image_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_image_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_image_metadata.h"
content_image_metadata_t* instantiate_content_image_metadata(int include_optional);

#include "test_content_resolution.c"


content_image_metadata_t* instantiate_content_image_metadata(int include_optional) {
  content_image_metadata_t* content_image_metadata = NULL;
  if (include_optional) {
    content_image_metadata = content_image_metadata_create(
       // false, not to have infinite recursion
      instantiate_content_resolution(0),
      56,
      "0",
      1
    );
  } else {
    content_image_metadata = content_image_metadata_create(
      NULL,
      56,
      "0",
      1
    );
  }

  return content_image_metadata;
}


#ifdef content_image_metadata_MAIN

void test_content_image_metadata(int include_optional) {
    content_image_metadata_t* content_image_metadata_1 = instantiate_content_image_metadata(include_optional);

	cJSON* jsoncontent_image_metadata_1 = content_image_metadata_convertToJSON(content_image_metadata_1);
	printf("content_image_metadata :\n%s\n", cJSON_Print(jsoncontent_image_metadata_1));
	content_image_metadata_t* content_image_metadata_2 = content_image_metadata_parseFromJSON(jsoncontent_image_metadata_1);
	cJSON* jsoncontent_image_metadata_2 = content_image_metadata_convertToJSON(content_image_metadata_2);
	printf("repeating content_image_metadata:\n%s\n", cJSON_Print(jsoncontent_image_metadata_2));
}

int main() {
  test_content_image_metadata(1);
  test_content_image_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_image_metadata_MAIN
#endif // content_image_metadata_TEST

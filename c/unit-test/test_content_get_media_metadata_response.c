#ifndef content_get_media_metadata_response_TEST
#define content_get_media_metadata_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_get_media_metadata_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_get_media_metadata_response.h"
content_get_media_metadata_response_t* instantiate_content_get_media_metadata_response(int include_optional);

#include "test_content_media_metadata.c"


content_get_media_metadata_response_t* instantiate_content_get_media_metadata_response(int include_optional) {
  content_get_media_metadata_response_t* content_get_media_metadata_response = NULL;
  if (include_optional) {
    content_get_media_metadata_response = content_get_media_metadata_response_create(
       // false, not to have infinite recursion
      instantiate_content_media_metadata(0)
    );
  } else {
    content_get_media_metadata_response = content_get_media_metadata_response_create(
      NULL
    );
  }

  return content_get_media_metadata_response;
}


#ifdef content_get_media_metadata_response_MAIN

void test_content_get_media_metadata_response(int include_optional) {
    content_get_media_metadata_response_t* content_get_media_metadata_response_1 = instantiate_content_get_media_metadata_response(include_optional);

	cJSON* jsoncontent_get_media_metadata_response_1 = content_get_media_metadata_response_convertToJSON(content_get_media_metadata_response_1);
	printf("content_get_media_metadata_response :\n%s\n", cJSON_Print(jsoncontent_get_media_metadata_response_1));
	content_get_media_metadata_response_t* content_get_media_metadata_response_2 = content_get_media_metadata_response_parseFromJSON(jsoncontent_get_media_metadata_response_1);
	cJSON* jsoncontent_get_media_metadata_response_2 = content_get_media_metadata_response_convertToJSON(content_get_media_metadata_response_2);
	printf("repeating content_get_media_metadata_response:\n%s\n", cJSON_Print(jsoncontent_get_media_metadata_response_2));
}

int main() {
  test_content_get_media_metadata_response(1);
  test_content_get_media_metadata_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_get_media_metadata_response_MAIN
#endif // content_get_media_metadata_response_TEST

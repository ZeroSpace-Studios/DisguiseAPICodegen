#ifndef content_list_media_metadata_response_TEST
#define content_list_media_metadata_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_list_media_metadata_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_list_media_metadata_response.h"
content_list_media_metadata_response_t* instantiate_content_list_media_metadata_response(int include_optional);



content_list_media_metadata_response_t* instantiate_content_list_media_metadata_response(int include_optional) {
  content_list_media_metadata_response_t* content_list_media_metadata_response = NULL;
  if (include_optional) {
    content_list_media_metadata_response = content_list_media_metadata_response_create(
      list_create()
    );
  } else {
    content_list_media_metadata_response = content_list_media_metadata_response_create(
      list_create()
    );
  }

  return content_list_media_metadata_response;
}


#ifdef content_list_media_metadata_response_MAIN

void test_content_list_media_metadata_response(int include_optional) {
    content_list_media_metadata_response_t* content_list_media_metadata_response_1 = instantiate_content_list_media_metadata_response(include_optional);

	cJSON* jsoncontent_list_media_metadata_response_1 = content_list_media_metadata_response_convertToJSON(content_list_media_metadata_response_1);
	printf("content_list_media_metadata_response :\n%s\n", cJSON_Print(jsoncontent_list_media_metadata_response_1));
	content_list_media_metadata_response_t* content_list_media_metadata_response_2 = content_list_media_metadata_response_parseFromJSON(jsoncontent_list_media_metadata_response_1);
	cJSON* jsoncontent_list_media_metadata_response_2 = content_list_media_metadata_response_convertToJSON(content_list_media_metadata_response_2);
	printf("repeating content_list_media_metadata_response:\n%s\n", cJSON_Print(jsoncontent_list_media_metadata_response_2));
}

int main() {
  test_content_list_media_metadata_response(1);
  test_content_list_media_metadata_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_list_media_metadata_response_MAIN
#endif // content_list_media_metadata_response_TEST

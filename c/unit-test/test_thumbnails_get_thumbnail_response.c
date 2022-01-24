#ifndef thumbnails_get_thumbnail_response_TEST
#define thumbnails_get_thumbnail_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define thumbnails_get_thumbnail_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/thumbnails_get_thumbnail_response.h"
thumbnails_get_thumbnail_response_t* instantiate_thumbnails_get_thumbnail_response(int include_optional);



thumbnails_get_thumbnail_response_t* instantiate_thumbnails_get_thumbnail_response(int include_optional) {
  thumbnails_get_thumbnail_response_t* thumbnails_get_thumbnail_response = NULL;
  if (include_optional) {
    thumbnails_get_thumbnail_response = thumbnails_get_thumbnail_response_create(
      "0"
    );
  } else {
    thumbnails_get_thumbnail_response = thumbnails_get_thumbnail_response_create(
      "0"
    );
  }

  return thumbnails_get_thumbnail_response;
}


#ifdef thumbnails_get_thumbnail_response_MAIN

void test_thumbnails_get_thumbnail_response(int include_optional) {
    thumbnails_get_thumbnail_response_t* thumbnails_get_thumbnail_response_1 = instantiate_thumbnails_get_thumbnail_response(include_optional);

	cJSON* jsonthumbnails_get_thumbnail_response_1 = thumbnails_get_thumbnail_response_convertToJSON(thumbnails_get_thumbnail_response_1);
	printf("thumbnails_get_thumbnail_response :\n%s\n", cJSON_Print(jsonthumbnails_get_thumbnail_response_1));
	thumbnails_get_thumbnail_response_t* thumbnails_get_thumbnail_response_2 = thumbnails_get_thumbnail_response_parseFromJSON(jsonthumbnails_get_thumbnail_response_1);
	cJSON* jsonthumbnails_get_thumbnail_response_2 = thumbnails_get_thumbnail_response_convertToJSON(thumbnails_get_thumbnail_response_2);
	printf("repeating thumbnails_get_thumbnail_response:\n%s\n", cJSON_Print(jsonthumbnails_get_thumbnail_response_2));
}

int main() {
  test_thumbnails_get_thumbnail_response(1);
  test_thumbnails_get_thumbnail_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // thumbnails_get_thumbnail_response_MAIN
#endif // thumbnails_get_thumbnail_response_TEST

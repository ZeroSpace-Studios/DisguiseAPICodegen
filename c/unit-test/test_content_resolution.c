#ifndef content_resolution_TEST
#define content_resolution_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_resolution_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_resolution.h"
content_resolution_t* instantiate_content_resolution(int include_optional);



content_resolution_t* instantiate_content_resolution(int include_optional) {
  content_resolution_t* content_resolution = NULL;
  if (include_optional) {
    content_resolution = content_resolution_create(
      56,
      56
    );
  } else {
    content_resolution = content_resolution_create(
      56,
      56
    );
  }

  return content_resolution;
}


#ifdef content_resolution_MAIN

void test_content_resolution(int include_optional) {
    content_resolution_t* content_resolution_1 = instantiate_content_resolution(include_optional);

	cJSON* jsoncontent_resolution_1 = content_resolution_convertToJSON(content_resolution_1);
	printf("content_resolution :\n%s\n", cJSON_Print(jsoncontent_resolution_1));
	content_resolution_t* content_resolution_2 = content_resolution_parseFromJSON(jsoncontent_resolution_1);
	cJSON* jsoncontent_resolution_2 = content_resolution_convertToJSON(content_resolution_2);
	printf("repeating content_resolution:\n%s\n", cJSON_Print(jsoncontent_resolution_2));
}

int main() {
  test_content_resolution(1);
  test_content_resolution(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_resolution_MAIN
#endif // content_resolution_TEST

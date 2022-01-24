#ifndef content_vector3_TEST
#define content_vector3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_vector3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_vector3.h"
content_vector3_t* instantiate_content_vector3(int include_optional);



content_vector3_t* instantiate_content_vector3(int include_optional) {
  content_vector3_t* content_vector3 = NULL;
  if (include_optional) {
    content_vector3 = content_vector3_create(
      1.337,
      1.337,
      1.337
    );
  } else {
    content_vector3 = content_vector3_create(
      1.337,
      1.337,
      1.337
    );
  }

  return content_vector3;
}


#ifdef content_vector3_MAIN

void test_content_vector3(int include_optional) {
    content_vector3_t* content_vector3_1 = instantiate_content_vector3(include_optional);

	cJSON* jsoncontent_vector3_1 = content_vector3_convertToJSON(content_vector3_1);
	printf("content_vector3 :\n%s\n", cJSON_Print(jsoncontent_vector3_1));
	content_vector3_t* content_vector3_2 = content_vector3_parseFromJSON(jsoncontent_vector3_1);
	cJSON* jsoncontent_vector3_2 = content_vector3_convertToJSON(content_vector3_2);
	printf("repeating content_vector3:\n%s\n", cJSON_Print(jsoncontent_vector3_2));
}

int main() {
  test_content_vector3(1);
  test_content_vector3(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_vector3_MAIN
#endif // content_vector3_TEST

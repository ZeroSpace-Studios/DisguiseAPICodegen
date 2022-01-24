#ifndef resources_list_resources_response_TEST
#define resources_list_resources_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resources_list_resources_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resources_list_resources_response.h"
resources_list_resources_response_t* instantiate_resources_list_resources_response(int include_optional);



resources_list_resources_response_t* instantiate_resources_list_resources_response(int include_optional) {
  resources_list_resources_response_t* resources_list_resources_response = NULL;
  if (include_optional) {
    resources_list_resources_response = resources_list_resources_response_create(
      list_create()
    );
  } else {
    resources_list_resources_response = resources_list_resources_response_create(
      list_create()
    );
  }

  return resources_list_resources_response;
}


#ifdef resources_list_resources_response_MAIN

void test_resources_list_resources_response(int include_optional) {
    resources_list_resources_response_t* resources_list_resources_response_1 = instantiate_resources_list_resources_response(include_optional);

	cJSON* jsonresources_list_resources_response_1 = resources_list_resources_response_convertToJSON(resources_list_resources_response_1);
	printf("resources_list_resources_response :\n%s\n", cJSON_Print(jsonresources_list_resources_response_1));
	resources_list_resources_response_t* resources_list_resources_response_2 = resources_list_resources_response_parseFromJSON(jsonresources_list_resources_response_1);
	cJSON* jsonresources_list_resources_response_2 = resources_list_resources_response_convertToJSON(resources_list_resources_response_2);
	printf("repeating resources_list_resources_response:\n%s\n", cJSON_Print(jsonresources_list_resources_response_2));
}

int main() {
  test_resources_list_resources_response(1);
  test_resources_list_resources_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // resources_list_resources_response_MAIN
#endif // resources_list_resources_response_TEST

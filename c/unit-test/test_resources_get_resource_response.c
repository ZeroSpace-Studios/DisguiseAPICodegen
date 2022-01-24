#ifndef resources_get_resource_response_TEST
#define resources_get_resource_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resources_get_resource_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resources_get_resource_response.h"
resources_get_resource_response_t* instantiate_resources_get_resource_response(int include_optional);

#include "test_resources_resource_info.c"


resources_get_resource_response_t* instantiate_resources_get_resource_response(int include_optional) {
  resources_get_resource_response_t* resources_get_resource_response = NULL;
  if (include_optional) {
    resources_get_resource_response = resources_get_resource_response_create(
       // false, not to have infinite recursion
      instantiate_resources_resource_info(0)
    );
  } else {
    resources_get_resource_response = resources_get_resource_response_create(
      NULL
    );
  }

  return resources_get_resource_response;
}


#ifdef resources_get_resource_response_MAIN

void test_resources_get_resource_response(int include_optional) {
    resources_get_resource_response_t* resources_get_resource_response_1 = instantiate_resources_get_resource_response(include_optional);

	cJSON* jsonresources_get_resource_response_1 = resources_get_resource_response_convertToJSON(resources_get_resource_response_1);
	printf("resources_get_resource_response :\n%s\n", cJSON_Print(jsonresources_get_resource_response_1));
	resources_get_resource_response_t* resources_get_resource_response_2 = resources_get_resource_response_parseFromJSON(jsonresources_get_resource_response_1);
	cJSON* jsonresources_get_resource_response_2 = resources_get_resource_response_convertToJSON(resources_get_resource_response_2);
	printf("repeating resources_get_resource_response:\n%s\n", cJSON_Print(jsonresources_get_resource_response_2));
}

int main() {
  test_resources_get_resource_response(1);
  test_resources_get_resource_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // resources_get_resource_response_MAIN
#endif // resources_get_resource_response_TEST

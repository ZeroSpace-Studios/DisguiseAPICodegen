#ifndef resources_resource_info_TEST
#define resources_resource_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define resources_resource_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/resources_resource_info.h"
resources_resource_info_t* instantiate_resources_resource_info(int include_optional);



resources_resource_info_t* instantiate_resources_resource_info(int include_optional) {
  resources_resource_info_t* resources_resource_info = NULL;
  if (include_optional) {
    resources_resource_info = resources_resource_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    resources_resource_info = resources_resource_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return resources_resource_info;
}


#ifdef resources_resource_info_MAIN

void test_resources_resource_info(int include_optional) {
    resources_resource_info_t* resources_resource_info_1 = instantiate_resources_resource_info(include_optional);

	cJSON* jsonresources_resource_info_1 = resources_resource_info_convertToJSON(resources_resource_info_1);
	printf("resources_resource_info :\n%s\n", cJSON_Print(jsonresources_resource_info_1));
	resources_resource_info_t* resources_resource_info_2 = resources_resource_info_parseFromJSON(jsonresources_resource_info_1);
	cJSON* jsonresources_resource_info_2 = resources_resource_info_convertToJSON(resources_resource_info_2);
	printf("repeating resources_resource_info:\n%s\n", cJSON_Print(jsonresources_resource_info_2));
}

int main() {
  test_resources_resource_info(1);
  test_resources_resource_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // resources_resource_info_MAIN
#endif // resources_resource_info_TEST

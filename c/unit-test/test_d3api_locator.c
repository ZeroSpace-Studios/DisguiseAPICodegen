#ifndef d3api_locator_TEST
#define d3api_locator_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define d3api_locator_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/d3api_locator.h"
d3api_locator_t* instantiate_d3api_locator(int include_optional);



d3api_locator_t* instantiate_d3api_locator(int include_optional) {
  d3api_locator_t* d3api_locator = NULL;
  if (include_optional) {
    d3api_locator = d3api_locator_create(
      "0",
      "0"
    );
  } else {
    d3api_locator = d3api_locator_create(
      "0",
      "0"
    );
  }

  return d3api_locator;
}


#ifdef d3api_locator_MAIN

void test_d3api_locator(int include_optional) {
    d3api_locator_t* d3api_locator_1 = instantiate_d3api_locator(include_optional);

	cJSON* jsond3api_locator_1 = d3api_locator_convertToJSON(d3api_locator_1);
	printf("d3api_locator :\n%s\n", cJSON_Print(jsond3api_locator_1));
	d3api_locator_t* d3api_locator_2 = d3api_locator_parseFromJSON(jsond3api_locator_1);
	cJSON* jsond3api_locator_2 = d3api_locator_convertToJSON(d3api_locator_2);
	printf("repeating d3api_locator:\n%s\n", cJSON_Print(jsond3api_locator_2));
}

int main() {
  test_d3api_locator(1);
  test_d3api_locator(0);

  printf("Hello world \n");
  return 0;
}

#endif // d3api_locator_MAIN
#endif // d3api_locator_TEST

#ifndef quickcal_reset_line_up_request_TEST
#define quickcal_reset_line_up_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickcal_reset_line_up_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickcal_reset_line_up_request.h"
quickcal_reset_line_up_request_t* instantiate_quickcal_reset_line_up_request(int include_optional);

#include "test_d3api_locator.c"


quickcal_reset_line_up_request_t* instantiate_quickcal_reset_line_up_request(int include_optional) {
  quickcal_reset_line_up_request_t* quickcal_reset_line_up_request = NULL;
  if (include_optional) {
    quickcal_reset_line_up_request = quickcal_reset_line_up_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    quickcal_reset_line_up_request = quickcal_reset_line_up_request_create(
      NULL
    );
  }

  return quickcal_reset_line_up_request;
}


#ifdef quickcal_reset_line_up_request_MAIN

void test_quickcal_reset_line_up_request(int include_optional) {
    quickcal_reset_line_up_request_t* quickcal_reset_line_up_request_1 = instantiate_quickcal_reset_line_up_request(include_optional);

	cJSON* jsonquickcal_reset_line_up_request_1 = quickcal_reset_line_up_request_convertToJSON(quickcal_reset_line_up_request_1);
	printf("quickcal_reset_line_up_request :\n%s\n", cJSON_Print(jsonquickcal_reset_line_up_request_1));
	quickcal_reset_line_up_request_t* quickcal_reset_line_up_request_2 = quickcal_reset_line_up_request_parseFromJSON(jsonquickcal_reset_line_up_request_1);
	cJSON* jsonquickcal_reset_line_up_request_2 = quickcal_reset_line_up_request_convertToJSON(quickcal_reset_line_up_request_2);
	printf("repeating quickcal_reset_line_up_request:\n%s\n", cJSON_Print(jsonquickcal_reset_line_up_request_2));
}

int main() {
  test_quickcal_reset_line_up_request(1);
  test_quickcal_reset_line_up_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickcal_reset_line_up_request_MAIN
#endif // quickcal_reset_line_up_request_TEST

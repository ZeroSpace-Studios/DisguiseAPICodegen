#ifndef mixedreality_select_camera_request_TEST
#define mixedreality_select_camera_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_select_camera_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_select_camera_request.h"
mixedreality_select_camera_request_t* instantiate_mixedreality_select_camera_request(int include_optional);

#include "test_d3api_locator.c"
#include "test_d3api_locator.c"


mixedreality_select_camera_request_t* instantiate_mixedreality_select_camera_request(int include_optional) {
  mixedreality_select_camera_request_t* mixedreality_select_camera_request = NULL;
  if (include_optional) {
    mixedreality_select_camera_request = mixedreality_select_camera_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    mixedreality_select_camera_request = mixedreality_select_camera_request_create(
      NULL,
      NULL
    );
  }

  return mixedreality_select_camera_request;
}


#ifdef mixedreality_select_camera_request_MAIN

void test_mixedreality_select_camera_request(int include_optional) {
    mixedreality_select_camera_request_t* mixedreality_select_camera_request_1 = instantiate_mixedreality_select_camera_request(include_optional);

	cJSON* jsonmixedreality_select_camera_request_1 = mixedreality_select_camera_request_convertToJSON(mixedreality_select_camera_request_1);
	printf("mixedreality_select_camera_request :\n%s\n", cJSON_Print(jsonmixedreality_select_camera_request_1));
	mixedreality_select_camera_request_t* mixedreality_select_camera_request_2 = mixedreality_select_camera_request_parseFromJSON(jsonmixedreality_select_camera_request_1);
	cJSON* jsonmixedreality_select_camera_request_2 = mixedreality_select_camera_request_convertToJSON(mixedreality_select_camera_request_2);
	printf("repeating mixedreality_select_camera_request:\n%s\n", cJSON_Print(jsonmixedreality_select_camera_request_2));
}

int main() {
  test_mixedreality_select_camera_request(1);
  test_mixedreality_select_camera_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_select_camera_request_MAIN
#endif // mixedreality_select_camera_request_TEST

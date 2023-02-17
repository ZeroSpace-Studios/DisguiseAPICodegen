#ifndef mixedreality_capture_observation_request_TEST
#define mixedreality_capture_observation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_capture_observation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_capture_observation_request.h"
mixedreality_capture_observation_request_t* instantiate_mixedreality_capture_observation_request(int include_optional);

#include "test_d3api_locator.c"
#include "test_d3api_locator.c"


mixedreality_capture_observation_request_t* instantiate_mixedreality_capture_observation_request(int include_optional) {
  mixedreality_capture_observation_request_t* mixedreality_capture_observation_request = NULL;
  if (include_optional) {
    mixedreality_capture_observation_request = mixedreality_capture_observation_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    mixedreality_capture_observation_request = mixedreality_capture_observation_request_create(
      NULL,
      NULL
    );
  }

  return mixedreality_capture_observation_request;
}


#ifdef mixedreality_capture_observation_request_MAIN

void test_mixedreality_capture_observation_request(int include_optional) {
    mixedreality_capture_observation_request_t* mixedreality_capture_observation_request_1 = instantiate_mixedreality_capture_observation_request(include_optional);

	cJSON* jsonmixedreality_capture_observation_request_1 = mixedreality_capture_observation_request_convertToJSON(mixedreality_capture_observation_request_1);
	printf("mixedreality_capture_observation_request :\n%s\n", cJSON_Print(jsonmixedreality_capture_observation_request_1));
	mixedreality_capture_observation_request_t* mixedreality_capture_observation_request_2 = mixedreality_capture_observation_request_parseFromJSON(jsonmixedreality_capture_observation_request_1);
	cJSON* jsonmixedreality_capture_observation_request_2 = mixedreality_capture_observation_request_convertToJSON(mixedreality_capture_observation_request_2);
	printf("repeating mixedreality_capture_observation_request:\n%s\n", cJSON_Print(jsonmixedreality_capture_observation_request_2));
}

int main() {
  test_mixedreality_capture_observation_request(1);
  test_mixedreality_capture_observation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_capture_observation_request_MAIN
#endif // mixedreality_capture_observation_request_TEST

#ifndef mixedreality_delete_all_observations_request_TEST
#define mixedreality_delete_all_observations_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_delete_all_observations_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_delete_all_observations_request.h"
mixedreality_delete_all_observations_request_t* instantiate_mixedreality_delete_all_observations_request(int include_optional);

#include "test_d3api_locator.c"


mixedreality_delete_all_observations_request_t* instantiate_mixedreality_delete_all_observations_request(int include_optional) {
  mixedreality_delete_all_observations_request_t* mixedreality_delete_all_observations_request = NULL;
  if (include_optional) {
    mixedreality_delete_all_observations_request = mixedreality_delete_all_observations_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    mixedreality_delete_all_observations_request = mixedreality_delete_all_observations_request_create(
      NULL
    );
  }

  return mixedreality_delete_all_observations_request;
}


#ifdef mixedreality_delete_all_observations_request_MAIN

void test_mixedreality_delete_all_observations_request(int include_optional) {
    mixedreality_delete_all_observations_request_t* mixedreality_delete_all_observations_request_1 = instantiate_mixedreality_delete_all_observations_request(include_optional);

	cJSON* jsonmixedreality_delete_all_observations_request_1 = mixedreality_delete_all_observations_request_convertToJSON(mixedreality_delete_all_observations_request_1);
	printf("mixedreality_delete_all_observations_request :\n%s\n", cJSON_Print(jsonmixedreality_delete_all_observations_request_1));
	mixedreality_delete_all_observations_request_t* mixedreality_delete_all_observations_request_2 = mixedreality_delete_all_observations_request_parseFromJSON(jsonmixedreality_delete_all_observations_request_1);
	cJSON* jsonmixedreality_delete_all_observations_request_2 = mixedreality_delete_all_observations_request_convertToJSON(mixedreality_delete_all_observations_request_2);
	printf("repeating mixedreality_delete_all_observations_request:\n%s\n", cJSON_Print(jsonmixedreality_delete_all_observations_request_2));
}

int main() {
  test_mixedreality_delete_all_observations_request(1);
  test_mixedreality_delete_all_observations_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_delete_all_observations_request_MAIN
#endif // mixedreality_delete_all_observations_request_TEST

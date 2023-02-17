#ifndef mixedreality_enable_observations_request_TEST
#define mixedreality_enable_observations_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_enable_observations_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_enable_observations_request.h"
mixedreality_enable_observations_request_t* instantiate_mixedreality_enable_observations_request(int include_optional);



mixedreality_enable_observations_request_t* instantiate_mixedreality_enable_observations_request(int include_optional) {
  mixedreality_enable_observations_request_t* mixedreality_enable_observations_request = NULL;
  if (include_optional) {
    mixedreality_enable_observations_request = mixedreality_enable_observations_request_create(
      list_create()
    );
  } else {
    mixedreality_enable_observations_request = mixedreality_enable_observations_request_create(
      list_create()
    );
  }

  return mixedreality_enable_observations_request;
}


#ifdef mixedreality_enable_observations_request_MAIN

void test_mixedreality_enable_observations_request(int include_optional) {
    mixedreality_enable_observations_request_t* mixedreality_enable_observations_request_1 = instantiate_mixedreality_enable_observations_request(include_optional);

	cJSON* jsonmixedreality_enable_observations_request_1 = mixedreality_enable_observations_request_convertToJSON(mixedreality_enable_observations_request_1);
	printf("mixedreality_enable_observations_request :\n%s\n", cJSON_Print(jsonmixedreality_enable_observations_request_1));
	mixedreality_enable_observations_request_t* mixedreality_enable_observations_request_2 = mixedreality_enable_observations_request_parseFromJSON(jsonmixedreality_enable_observations_request_1);
	cJSON* jsonmixedreality_enable_observations_request_2 = mixedreality_enable_observations_request_convertToJSON(mixedreality_enable_observations_request_2);
	printf("repeating mixedreality_enable_observations_request:\n%s\n", cJSON_Print(jsonmixedreality_enable_observations_request_2));
}

int main() {
  test_mixedreality_enable_observations_request(1);
  test_mixedreality_enable_observations_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_enable_observations_request_MAIN
#endif // mixedreality_enable_observations_request_TEST

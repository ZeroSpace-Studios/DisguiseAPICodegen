#ifndef mixedreality_enable_observation_params_TEST
#define mixedreality_enable_observation_params_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_enable_observation_params_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_enable_observation_params.h"
mixedreality_enable_observation_params_t* instantiate_mixedreality_enable_observation_params(int include_optional);



mixedreality_enable_observation_params_t* instantiate_mixedreality_enable_observation_params(int include_optional) {
  mixedreality_enable_observation_params_t* mixedreality_enable_observation_params = NULL;
  if (include_optional) {
    mixedreality_enable_observation_params = mixedreality_enable_observation_params_create(
      "0",
      1
    );
  } else {
    mixedreality_enable_observation_params = mixedreality_enable_observation_params_create(
      "0",
      1
    );
  }

  return mixedreality_enable_observation_params;
}


#ifdef mixedreality_enable_observation_params_MAIN

void test_mixedreality_enable_observation_params(int include_optional) {
    mixedreality_enable_observation_params_t* mixedreality_enable_observation_params_1 = instantiate_mixedreality_enable_observation_params(include_optional);

	cJSON* jsonmixedreality_enable_observation_params_1 = mixedreality_enable_observation_params_convertToJSON(mixedreality_enable_observation_params_1);
	printf("mixedreality_enable_observation_params :\n%s\n", cJSON_Print(jsonmixedreality_enable_observation_params_1));
	mixedreality_enable_observation_params_t* mixedreality_enable_observation_params_2 = mixedreality_enable_observation_params_parseFromJSON(jsonmixedreality_enable_observation_params_1);
	cJSON* jsonmixedreality_enable_observation_params_2 = mixedreality_enable_observation_params_convertToJSON(mixedreality_enable_observation_params_2);
	printf("repeating mixedreality_enable_observation_params:\n%s\n", cJSON_Print(jsonmixedreality_enable_observation_params_2));
}

int main() {
  test_mixedreality_enable_observation_params(1);
  test_mixedreality_enable_observation_params(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_enable_observation_params_MAIN
#endif // mixedreality_enable_observation_params_TEST

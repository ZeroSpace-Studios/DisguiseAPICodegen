#ifndef mixedreality_observation_type_TEST
#define mixedreality_observation_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_observation_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_observation_type.h"
mixedreality_observation_type_t* instantiate_mixedreality_observation_type(int include_optional);



mixedreality_observation_type_t* instantiate_mixedreality_observation_type(int include_optional) {
  mixedreality_observation_type_t* mixedreality_observation_type = NULL;
  if (include_optional) {
    mixedreality_observation_type = mixedreality_observation_type_create(
    );
  } else {
    mixedreality_observation_type = mixedreality_observation_type_create(
    );
  }

  return mixedreality_observation_type;
}


#ifdef mixedreality_observation_type_MAIN

void test_mixedreality_observation_type(int include_optional) {
    mixedreality_observation_type_t* mixedreality_observation_type_1 = instantiate_mixedreality_observation_type(include_optional);

	cJSON* jsonmixedreality_observation_type_1 = mixedreality_observation_type_convertToJSON(mixedreality_observation_type_1);
	printf("mixedreality_observation_type :\n%s\n", cJSON_Print(jsonmixedreality_observation_type_1));
	mixedreality_observation_type_t* mixedreality_observation_type_2 = mixedreality_observation_type_parseFromJSON(jsonmixedreality_observation_type_1);
	cJSON* jsonmixedreality_observation_type_2 = mixedreality_observation_type_convertToJSON(mixedreality_observation_type_2);
	printf("repeating mixedreality_observation_type:\n%s\n", cJSON_Print(jsonmixedreality_observation_type_2));
}

int main() {
  test_mixedreality_observation_type(1);
  test_mixedreality_observation_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_observation_type_MAIN
#endif // mixedreality_observation_type_TEST

#ifndef mixedreality_observation_info_TEST
#define mixedreality_observation_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_observation_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_observation_info.h"
mixedreality_observation_info_t* instantiate_mixedreality_observation_info(int include_optional);

#include "test_mixedreality_pose.c"
#include "test_mixedreality_pose.c"


mixedreality_observation_info_t* instantiate_mixedreality_observation_info(int include_optional) {
  mixedreality_observation_info_t* mixedreality_observation_info = NULL;
  if (include_optional) {
    mixedreality_observation_info = mixedreality_observation_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_mixedreality_pose(0),
       // false, not to have infinite recursion
      instantiate_mixedreality_pose(0),
      1,
      1.337,
      1.337,
      d3_api_mixedreality_observation_info__"Primary",
      1.337
    );
  } else {
    mixedreality_observation_info = mixedreality_observation_info_create(
      "0",
      "0",
      NULL,
      NULL,
      1,
      1.337,
      1.337,
      d3_api_mixedreality_observation_info__"Primary",
      1.337
    );
  }

  return mixedreality_observation_info;
}


#ifdef mixedreality_observation_info_MAIN

void test_mixedreality_observation_info(int include_optional) {
    mixedreality_observation_info_t* mixedreality_observation_info_1 = instantiate_mixedreality_observation_info(include_optional);

	cJSON* jsonmixedreality_observation_info_1 = mixedreality_observation_info_convertToJSON(mixedreality_observation_info_1);
	printf("mixedreality_observation_info :\n%s\n", cJSON_Print(jsonmixedreality_observation_info_1));
	mixedreality_observation_info_t* mixedreality_observation_info_2 = mixedreality_observation_info_parseFromJSON(jsonmixedreality_observation_info_1);
	cJSON* jsonmixedreality_observation_info_2 = mixedreality_observation_info_convertToJSON(mixedreality_observation_info_2);
	printf("repeating mixedreality_observation_info:\n%s\n", cJSON_Print(jsonmixedreality_observation_info_2));
}

int main() {
  test_mixedreality_observation_info(1);
  test_mixedreality_observation_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_observation_info_MAIN
#endif // mixedreality_observation_info_TEST

#ifndef mixedreality_pose_TEST
#define mixedreality_pose_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_pose_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_pose.h"
mixedreality_pose_t* instantiate_mixedreality_pose(int include_optional);

#include "test_d3api_vec3_float.c"
#include "test_d3api_vec3_float.c"


mixedreality_pose_t* instantiate_mixedreality_pose(int include_optional) {
  mixedreality_pose_t* mixedreality_pose = NULL;
  if (include_optional) {
    mixedreality_pose = mixedreality_pose_create(
       // false, not to have infinite recursion
      instantiate_d3api_vec3_float(0),
       // false, not to have infinite recursion
      instantiate_d3api_vec3_float(0)
    );
  } else {
    mixedreality_pose = mixedreality_pose_create(
      NULL,
      NULL
    );
  }

  return mixedreality_pose;
}


#ifdef mixedreality_pose_MAIN

void test_mixedreality_pose(int include_optional) {
    mixedreality_pose_t* mixedreality_pose_1 = instantiate_mixedreality_pose(include_optional);

	cJSON* jsonmixedreality_pose_1 = mixedreality_pose_convertToJSON(mixedreality_pose_1);
	printf("mixedreality_pose :\n%s\n", cJSON_Print(jsonmixedreality_pose_1));
	mixedreality_pose_t* mixedreality_pose_2 = mixedreality_pose_parseFromJSON(jsonmixedreality_pose_1);
	cJSON* jsonmixedreality_pose_2 = mixedreality_pose_convertToJSON(mixedreality_pose_2);
	printf("repeating mixedreality_pose:\n%s\n", cJSON_Print(jsonmixedreality_pose_2));
}

int main() {
  test_mixedreality_pose(1);
  test_mixedreality_pose(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_pose_MAIN
#endif // mixedreality_pose_TEST

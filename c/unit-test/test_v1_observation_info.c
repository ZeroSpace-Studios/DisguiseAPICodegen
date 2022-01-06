#ifndef v1_observation_info_TEST
#define v1_observation_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_observation_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_observation_info.h"
v1_observation_info_t* instantiate_v1_observation_info(int include_optional);

#include "test_v1_float3.c"
#include "test_v1_float3.c"


v1_observation_info_t* instantiate_v1_observation_info(int include_optional) {
  v1_observation_info_t* v1_observation_info = NULL;
  if (include_optional) {
    v1_observation_info = v1_observation_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v1_float3(0),
       // false, not to have infinite recursion
      instantiate_v1_float3(0),
      1.337,
      1.337,
      1,
      1
    );
  } else {
    v1_observation_info = v1_observation_info_create(
      "0",
      "0",
      NULL,
      NULL,
      1.337,
      1.337,
      1,
      1
    );
  }

  return v1_observation_info;
}


#ifdef v1_observation_info_MAIN

void test_v1_observation_info(int include_optional) {
    v1_observation_info_t* v1_observation_info_1 = instantiate_v1_observation_info(include_optional);

	cJSON* jsonv1_observation_info_1 = v1_observation_info_convertToJSON(v1_observation_info_1);
	printf("v1_observation_info :\n%s\n", cJSON_Print(jsonv1_observation_info_1));
	v1_observation_info_t* v1_observation_info_2 = v1_observation_info_parseFromJSON(jsonv1_observation_info_1);
	cJSON* jsonv1_observation_info_2 = v1_observation_info_convertToJSON(v1_observation_info_2);
	printf("repeating v1_observation_info:\n%s\n", cJSON_Print(jsonv1_observation_info_2));
}

int main() {
  test_v1_observation_info(1);
  test_v1_observation_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_observation_info_MAIN
#endif // v1_observation_info_TEST

#ifndef cameracalibration_observation_info_TEST
#define cameracalibration_observation_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_observation_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_observation_info.h"
cameracalibration_observation_info_t* instantiate_cameracalibration_observation_info(int include_optional);

#include "test_cameracalibration_float3.c"
#include "test_cameracalibration_float3.c"


cameracalibration_observation_info_t* instantiate_cameracalibration_observation_info(int include_optional) {
  cameracalibration_observation_info_t* cameracalibration_observation_info = NULL;
  if (include_optional) {
    cameracalibration_observation_info = cameracalibration_observation_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_cameracalibration_float3(0),
       // false, not to have infinite recursion
      instantiate_cameracalibration_float3(0),
      1.337,
      1.337,
      1,
      1
    );
  } else {
    cameracalibration_observation_info = cameracalibration_observation_info_create(
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

  return cameracalibration_observation_info;
}


#ifdef cameracalibration_observation_info_MAIN

void test_cameracalibration_observation_info(int include_optional) {
    cameracalibration_observation_info_t* cameracalibration_observation_info_1 = instantiate_cameracalibration_observation_info(include_optional);

	cJSON* jsoncameracalibration_observation_info_1 = cameracalibration_observation_info_convertToJSON(cameracalibration_observation_info_1);
	printf("cameracalibration_observation_info :\n%s\n", cJSON_Print(jsoncameracalibration_observation_info_1));
	cameracalibration_observation_info_t* cameracalibration_observation_info_2 = cameracalibration_observation_info_parseFromJSON(jsoncameracalibration_observation_info_1);
	cJSON* jsoncameracalibration_observation_info_2 = cameracalibration_observation_info_convertToJSON(cameracalibration_observation_info_2);
	printf("repeating cameracalibration_observation_info:\n%s\n", cJSON_Print(jsoncameracalibration_observation_info_2));
}

int main() {
  test_cameracalibration_observation_info(1);
  test_cameracalibration_observation_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_observation_info_MAIN
#endif // cameracalibration_observation_info_TEST

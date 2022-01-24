#ifndef cameracalibration_enable_observation_response_TEST
#define cameracalibration_enable_observation_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_enable_observation_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_enable_observation_response.h"
cameracalibration_enable_observation_response_t* instantiate_cameracalibration_enable_observation_response(int include_optional);



cameracalibration_enable_observation_response_t* instantiate_cameracalibration_enable_observation_response(int include_optional) {
  cameracalibration_enable_observation_response_t* cameracalibration_enable_observation_response = NULL;
  if (include_optional) {
    cameracalibration_enable_observation_response = cameracalibration_enable_observation_response_create(
      1
    );
  } else {
    cameracalibration_enable_observation_response = cameracalibration_enable_observation_response_create(
      1
    );
  }

  return cameracalibration_enable_observation_response;
}


#ifdef cameracalibration_enable_observation_response_MAIN

void test_cameracalibration_enable_observation_response(int include_optional) {
    cameracalibration_enable_observation_response_t* cameracalibration_enable_observation_response_1 = instantiate_cameracalibration_enable_observation_response(include_optional);

	cJSON* jsoncameracalibration_enable_observation_response_1 = cameracalibration_enable_observation_response_convertToJSON(cameracalibration_enable_observation_response_1);
	printf("cameracalibration_enable_observation_response :\n%s\n", cJSON_Print(jsoncameracalibration_enable_observation_response_1));
	cameracalibration_enable_observation_response_t* cameracalibration_enable_observation_response_2 = cameracalibration_enable_observation_response_parseFromJSON(jsoncameracalibration_enable_observation_response_1);
	cJSON* jsoncameracalibration_enable_observation_response_2 = cameracalibration_enable_observation_response_convertToJSON(cameracalibration_enable_observation_response_2);
	printf("repeating cameracalibration_enable_observation_response:\n%s\n", cJSON_Print(jsoncameracalibration_enable_observation_response_2));
}

int main() {
  test_cameracalibration_enable_observation_response(1);
  test_cameracalibration_enable_observation_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_enable_observation_response_MAIN
#endif // cameracalibration_enable_observation_response_TEST

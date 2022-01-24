#ifndef cameracalibration_enable_observation_request_TEST
#define cameracalibration_enable_observation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_enable_observation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_enable_observation_request.h"
cameracalibration_enable_observation_request_t* instantiate_cameracalibration_enable_observation_request(int include_optional);



cameracalibration_enable_observation_request_t* instantiate_cameracalibration_enable_observation_request(int include_optional) {
  cameracalibration_enable_observation_request_t* cameracalibration_enable_observation_request = NULL;
  if (include_optional) {
    cameracalibration_enable_observation_request = cameracalibration_enable_observation_request_create(
      "0",
      1
    );
  } else {
    cameracalibration_enable_observation_request = cameracalibration_enable_observation_request_create(
      "0",
      1
    );
  }

  return cameracalibration_enable_observation_request;
}


#ifdef cameracalibration_enable_observation_request_MAIN

void test_cameracalibration_enable_observation_request(int include_optional) {
    cameracalibration_enable_observation_request_t* cameracalibration_enable_observation_request_1 = instantiate_cameracalibration_enable_observation_request(include_optional);

	cJSON* jsoncameracalibration_enable_observation_request_1 = cameracalibration_enable_observation_request_convertToJSON(cameracalibration_enable_observation_request_1);
	printf("cameracalibration_enable_observation_request :\n%s\n", cJSON_Print(jsoncameracalibration_enable_observation_request_1));
	cameracalibration_enable_observation_request_t* cameracalibration_enable_observation_request_2 = cameracalibration_enable_observation_request_parseFromJSON(jsoncameracalibration_enable_observation_request_1);
	cJSON* jsoncameracalibration_enable_observation_request_2 = cameracalibration_enable_observation_request_convertToJSON(cameracalibration_enable_observation_request_2);
	printf("repeating cameracalibration_enable_observation_request:\n%s\n", cJSON_Print(jsoncameracalibration_enable_observation_request_2));
}

int main() {
  test_cameracalibration_enable_observation_request(1);
  test_cameracalibration_enable_observation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_enable_observation_request_MAIN
#endif // cameracalibration_enable_observation_request_TEST

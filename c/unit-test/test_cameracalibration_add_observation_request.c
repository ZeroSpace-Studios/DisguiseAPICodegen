#ifndef cameracalibration_add_observation_request_TEST
#define cameracalibration_add_observation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_add_observation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_add_observation_request.h"
cameracalibration_add_observation_request_t* instantiate_cameracalibration_add_observation_request(int include_optional);



cameracalibration_add_observation_request_t* instantiate_cameracalibration_add_observation_request(int include_optional) {
  cameracalibration_add_observation_request_t* cameracalibration_add_observation_request = NULL;
  if (include_optional) {
    cameracalibration_add_observation_request = cameracalibration_add_observation_request_create(
      "0"
    );
  } else {
    cameracalibration_add_observation_request = cameracalibration_add_observation_request_create(
      "0"
    );
  }

  return cameracalibration_add_observation_request;
}


#ifdef cameracalibration_add_observation_request_MAIN

void test_cameracalibration_add_observation_request(int include_optional) {
    cameracalibration_add_observation_request_t* cameracalibration_add_observation_request_1 = instantiate_cameracalibration_add_observation_request(include_optional);

	cJSON* jsoncameracalibration_add_observation_request_1 = cameracalibration_add_observation_request_convertToJSON(cameracalibration_add_observation_request_1);
	printf("cameracalibration_add_observation_request :\n%s\n", cJSON_Print(jsoncameracalibration_add_observation_request_1));
	cameracalibration_add_observation_request_t* cameracalibration_add_observation_request_2 = cameracalibration_add_observation_request_parseFromJSON(jsoncameracalibration_add_observation_request_1);
	cJSON* jsoncameracalibration_add_observation_request_2 = cameracalibration_add_observation_request_convertToJSON(cameracalibration_add_observation_request_2);
	printf("repeating cameracalibration_add_observation_request:\n%s\n", cJSON_Print(jsoncameracalibration_add_observation_request_2));
}

int main() {
  test_cameracalibration_add_observation_request(1);
  test_cameracalibration_add_observation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_add_observation_request_MAIN
#endif // cameracalibration_add_observation_request_TEST

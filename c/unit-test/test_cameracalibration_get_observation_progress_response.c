#ifndef cameracalibration_get_observation_progress_response_TEST
#define cameracalibration_get_observation_progress_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_get_observation_progress_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_get_observation_progress_response.h"
cameracalibration_get_observation_progress_response_t* instantiate_cameracalibration_get_observation_progress_response(int include_optional);



cameracalibration_get_observation_progress_response_t* instantiate_cameracalibration_get_observation_progress_response(int include_optional) {
  cameracalibration_get_observation_progress_response_t* cameracalibration_get_observation_progress_response = NULL;
  if (include_optional) {
    cameracalibration_get_observation_progress_response = cameracalibration_get_observation_progress_response_create(
      1
    );
  } else {
    cameracalibration_get_observation_progress_response = cameracalibration_get_observation_progress_response_create(
      1
    );
  }

  return cameracalibration_get_observation_progress_response;
}


#ifdef cameracalibration_get_observation_progress_response_MAIN

void test_cameracalibration_get_observation_progress_response(int include_optional) {
    cameracalibration_get_observation_progress_response_t* cameracalibration_get_observation_progress_response_1 = instantiate_cameracalibration_get_observation_progress_response(include_optional);

	cJSON* jsoncameracalibration_get_observation_progress_response_1 = cameracalibration_get_observation_progress_response_convertToJSON(cameracalibration_get_observation_progress_response_1);
	printf("cameracalibration_get_observation_progress_response :\n%s\n", cJSON_Print(jsoncameracalibration_get_observation_progress_response_1));
	cameracalibration_get_observation_progress_response_t* cameracalibration_get_observation_progress_response_2 = cameracalibration_get_observation_progress_response_parseFromJSON(jsoncameracalibration_get_observation_progress_response_1);
	cJSON* jsoncameracalibration_get_observation_progress_response_2 = cameracalibration_get_observation_progress_response_convertToJSON(cameracalibration_get_observation_progress_response_2);
	printf("repeating cameracalibration_get_observation_progress_response:\n%s\n", cJSON_Print(jsoncameracalibration_get_observation_progress_response_2));
}

int main() {
  test_cameracalibration_get_observation_progress_response(1);
  test_cameracalibration_get_observation_progress_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_get_observation_progress_response_MAIN
#endif // cameracalibration_get_observation_progress_response_TEST

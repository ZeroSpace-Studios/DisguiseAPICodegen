#ifndef cameracalibration_reset_all_observations_request_TEST
#define cameracalibration_reset_all_observations_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_reset_all_observations_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_reset_all_observations_request.h"
cameracalibration_reset_all_observations_request_t* instantiate_cameracalibration_reset_all_observations_request(int include_optional);



cameracalibration_reset_all_observations_request_t* instantiate_cameracalibration_reset_all_observations_request(int include_optional) {
  cameracalibration_reset_all_observations_request_t* cameracalibration_reset_all_observations_request = NULL;
  if (include_optional) {
    cameracalibration_reset_all_observations_request = cameracalibration_reset_all_observations_request_create(
      "0"
    );
  } else {
    cameracalibration_reset_all_observations_request = cameracalibration_reset_all_observations_request_create(
      "0"
    );
  }

  return cameracalibration_reset_all_observations_request;
}


#ifdef cameracalibration_reset_all_observations_request_MAIN

void test_cameracalibration_reset_all_observations_request(int include_optional) {
    cameracalibration_reset_all_observations_request_t* cameracalibration_reset_all_observations_request_1 = instantiate_cameracalibration_reset_all_observations_request(include_optional);

	cJSON* jsoncameracalibration_reset_all_observations_request_1 = cameracalibration_reset_all_observations_request_convertToJSON(cameracalibration_reset_all_observations_request_1);
	printf("cameracalibration_reset_all_observations_request :\n%s\n", cJSON_Print(jsoncameracalibration_reset_all_observations_request_1));
	cameracalibration_reset_all_observations_request_t* cameracalibration_reset_all_observations_request_2 = cameracalibration_reset_all_observations_request_parseFromJSON(jsoncameracalibration_reset_all_observations_request_1);
	cJSON* jsoncameracalibration_reset_all_observations_request_2 = cameracalibration_reset_all_observations_request_convertToJSON(cameracalibration_reset_all_observations_request_2);
	printf("repeating cameracalibration_reset_all_observations_request:\n%s\n", cJSON_Print(jsoncameracalibration_reset_all_observations_request_2));
}

int main() {
  test_cameracalibration_reset_all_observations_request(1);
  test_cameracalibration_reset_all_observations_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_reset_all_observations_request_MAIN
#endif // cameracalibration_reset_all_observations_request_TEST

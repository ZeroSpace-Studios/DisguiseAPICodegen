#ifndef cameracalibration_get_mr_set_response_TEST
#define cameracalibration_get_mr_set_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_get_mr_set_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_get_mr_set_response.h"
cameracalibration_get_mr_set_response_t* instantiate_cameracalibration_get_mr_set_response(int include_optional);

#include "test_cameracalibration_mr_set_info.c"


cameracalibration_get_mr_set_response_t* instantiate_cameracalibration_get_mr_set_response(int include_optional) {
  cameracalibration_get_mr_set_response_t* cameracalibration_get_mr_set_response = NULL;
  if (include_optional) {
    cameracalibration_get_mr_set_response = cameracalibration_get_mr_set_response_create(
       // false, not to have infinite recursion
      instantiate_cameracalibration_mr_set_info(0)
    );
  } else {
    cameracalibration_get_mr_set_response = cameracalibration_get_mr_set_response_create(
      NULL
    );
  }

  return cameracalibration_get_mr_set_response;
}


#ifdef cameracalibration_get_mr_set_response_MAIN

void test_cameracalibration_get_mr_set_response(int include_optional) {
    cameracalibration_get_mr_set_response_t* cameracalibration_get_mr_set_response_1 = instantiate_cameracalibration_get_mr_set_response(include_optional);

	cJSON* jsoncameracalibration_get_mr_set_response_1 = cameracalibration_get_mr_set_response_convertToJSON(cameracalibration_get_mr_set_response_1);
	printf("cameracalibration_get_mr_set_response :\n%s\n", cJSON_Print(jsoncameracalibration_get_mr_set_response_1));
	cameracalibration_get_mr_set_response_t* cameracalibration_get_mr_set_response_2 = cameracalibration_get_mr_set_response_parseFromJSON(jsoncameracalibration_get_mr_set_response_1);
	cJSON* jsoncameracalibration_get_mr_set_response_2 = cameracalibration_get_mr_set_response_convertToJSON(cameracalibration_get_mr_set_response_2);
	printf("repeating cameracalibration_get_mr_set_response:\n%s\n", cJSON_Print(jsoncameracalibration_get_mr_set_response_2));
}

int main() {
  test_cameracalibration_get_mr_set_response(1);
  test_cameracalibration_get_mr_set_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_get_mr_set_response_MAIN
#endif // cameracalibration_get_mr_set_response_TEST

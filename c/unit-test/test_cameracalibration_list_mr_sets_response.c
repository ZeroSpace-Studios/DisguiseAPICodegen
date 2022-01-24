#ifndef cameracalibration_list_mr_sets_response_TEST
#define cameracalibration_list_mr_sets_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_list_mr_sets_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_list_mr_sets_response.h"
cameracalibration_list_mr_sets_response_t* instantiate_cameracalibration_list_mr_sets_response(int include_optional);



cameracalibration_list_mr_sets_response_t* instantiate_cameracalibration_list_mr_sets_response(int include_optional) {
  cameracalibration_list_mr_sets_response_t* cameracalibration_list_mr_sets_response = NULL;
  if (include_optional) {
    cameracalibration_list_mr_sets_response = cameracalibration_list_mr_sets_response_create(
      list_create()
    );
  } else {
    cameracalibration_list_mr_sets_response = cameracalibration_list_mr_sets_response_create(
      list_create()
    );
  }

  return cameracalibration_list_mr_sets_response;
}


#ifdef cameracalibration_list_mr_sets_response_MAIN

void test_cameracalibration_list_mr_sets_response(int include_optional) {
    cameracalibration_list_mr_sets_response_t* cameracalibration_list_mr_sets_response_1 = instantiate_cameracalibration_list_mr_sets_response(include_optional);

	cJSON* jsoncameracalibration_list_mr_sets_response_1 = cameracalibration_list_mr_sets_response_convertToJSON(cameracalibration_list_mr_sets_response_1);
	printf("cameracalibration_list_mr_sets_response :\n%s\n", cJSON_Print(jsoncameracalibration_list_mr_sets_response_1));
	cameracalibration_list_mr_sets_response_t* cameracalibration_list_mr_sets_response_2 = cameracalibration_list_mr_sets_response_parseFromJSON(jsoncameracalibration_list_mr_sets_response_1);
	cJSON* jsoncameracalibration_list_mr_sets_response_2 = cameracalibration_list_mr_sets_response_convertToJSON(cameracalibration_list_mr_sets_response_2);
	printf("repeating cameracalibration_list_mr_sets_response:\n%s\n", cJSON_Print(jsoncameracalibration_list_mr_sets_response_2));
}

int main() {
  test_cameracalibration_list_mr_sets_response(1);
  test_cameracalibration_list_mr_sets_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_list_mr_sets_response_MAIN
#endif // cameracalibration_list_mr_sets_response_TEST

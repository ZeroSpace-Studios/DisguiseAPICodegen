#ifndef cameracalibration_mr_set_info_TEST
#define cameracalibration_mr_set_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_mr_set_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_mr_set_info.h"
cameracalibration_mr_set_info_t* instantiate_cameracalibration_mr_set_info(int include_optional);

#include "test_cameracalibration_camera_info.c"


cameracalibration_mr_set_info_t* instantiate_cameracalibration_mr_set_info(int include_optional) {
  cameracalibration_mr_set_info_t* cameracalibration_mr_set_info = NULL;
  if (include_optional) {
    cameracalibration_mr_set_info = cameracalibration_mr_set_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_cameracalibration_camera_info(0)
    );
  } else {
    cameracalibration_mr_set_info = cameracalibration_mr_set_info_create(
      "0",
      "0",
      NULL
    );
  }

  return cameracalibration_mr_set_info;
}


#ifdef cameracalibration_mr_set_info_MAIN

void test_cameracalibration_mr_set_info(int include_optional) {
    cameracalibration_mr_set_info_t* cameracalibration_mr_set_info_1 = instantiate_cameracalibration_mr_set_info(include_optional);

	cJSON* jsoncameracalibration_mr_set_info_1 = cameracalibration_mr_set_info_convertToJSON(cameracalibration_mr_set_info_1);
	printf("cameracalibration_mr_set_info :\n%s\n", cJSON_Print(jsoncameracalibration_mr_set_info_1));
	cameracalibration_mr_set_info_t* cameracalibration_mr_set_info_2 = cameracalibration_mr_set_info_parseFromJSON(jsoncameracalibration_mr_set_info_1);
	cJSON* jsoncameracalibration_mr_set_info_2 = cameracalibration_mr_set_info_convertToJSON(cameracalibration_mr_set_info_2);
	printf("repeating cameracalibration_mr_set_info:\n%s\n", cJSON_Print(jsoncameracalibration_mr_set_info_2));
}

int main() {
  test_cameracalibration_mr_set_info(1);
  test_cameracalibration_mr_set_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_mr_set_info_MAIN
#endif // cameracalibration_mr_set_info_TEST

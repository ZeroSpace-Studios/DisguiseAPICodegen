#ifndef cameracalibration_camera_info_TEST
#define cameracalibration_camera_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_camera_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_camera_info.h"
cameracalibration_camera_info_t* instantiate_cameracalibration_camera_info(int include_optional);



cameracalibration_camera_info_t* instantiate_cameracalibration_camera_info(int include_optional) {
  cameracalibration_camera_info_t* cameracalibration_camera_info = NULL;
  if (include_optional) {
    cameracalibration_camera_info = cameracalibration_camera_info_create(
      "0",
      "0",
      list_create()
    );
  } else {
    cameracalibration_camera_info = cameracalibration_camera_info_create(
      "0",
      "0",
      list_create()
    );
  }

  return cameracalibration_camera_info;
}


#ifdef cameracalibration_camera_info_MAIN

void test_cameracalibration_camera_info(int include_optional) {
    cameracalibration_camera_info_t* cameracalibration_camera_info_1 = instantiate_cameracalibration_camera_info(include_optional);

	cJSON* jsoncameracalibration_camera_info_1 = cameracalibration_camera_info_convertToJSON(cameracalibration_camera_info_1);
	printf("cameracalibration_camera_info :\n%s\n", cJSON_Print(jsoncameracalibration_camera_info_1));
	cameracalibration_camera_info_t* cameracalibration_camera_info_2 = cameracalibration_camera_info_parseFromJSON(jsoncameracalibration_camera_info_1);
	cJSON* jsoncameracalibration_camera_info_2 = cameracalibration_camera_info_convertToJSON(cameracalibration_camera_info_2);
	printf("repeating cameracalibration_camera_info:\n%s\n", cJSON_Print(jsoncameracalibration_camera_info_2));
}

int main() {
  test_cameracalibration_camera_info(1);
  test_cameracalibration_camera_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_camera_info_MAIN
#endif // cameracalibration_camera_info_TEST

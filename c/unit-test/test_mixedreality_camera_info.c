#ifndef mixedreality_camera_info_TEST
#define mixedreality_camera_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_camera_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_camera_info.h"
mixedreality_camera_info_t* instantiate_mixedreality_camera_info(int include_optional);

#include "test_mixedreality_spatial_calibration_info.c"


mixedreality_camera_info_t* instantiate_mixedreality_camera_info(int include_optional) {
  mixedreality_camera_info_t* mixedreality_camera_info = NULL;
  if (include_optional) {
    mixedreality_camera_info = mixedreality_camera_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_mixedreality_spatial_calibration_info(0)
    );
  } else {
    mixedreality_camera_info = mixedreality_camera_info_create(
      "0",
      "0",
      NULL
    );
  }

  return mixedreality_camera_info;
}


#ifdef mixedreality_camera_info_MAIN

void test_mixedreality_camera_info(int include_optional) {
    mixedreality_camera_info_t* mixedreality_camera_info_1 = instantiate_mixedreality_camera_info(include_optional);

	cJSON* jsonmixedreality_camera_info_1 = mixedreality_camera_info_convertToJSON(mixedreality_camera_info_1);
	printf("mixedreality_camera_info :\n%s\n", cJSON_Print(jsonmixedreality_camera_info_1));
	mixedreality_camera_info_t* mixedreality_camera_info_2 = mixedreality_camera_info_parseFromJSON(jsonmixedreality_camera_info_1);
	cJSON* jsonmixedreality_camera_info_2 = mixedreality_camera_info_convertToJSON(mixedreality_camera_info_2);
	printf("repeating mixedreality_camera_info:\n%s\n", cJSON_Print(jsonmixedreality_camera_info_2));
}

int main() {
  test_mixedreality_camera_info(1);
  test_mixedreality_camera_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_camera_info_MAIN
#endif // mixedreality_camera_info_TEST

#ifndef mixedreality_spatial_calibration_info_TEST
#define mixedreality_spatial_calibration_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_spatial_calibration_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_spatial_calibration_info.h"
mixedreality_spatial_calibration_info_t* instantiate_mixedreality_spatial_calibration_info(int include_optional);



mixedreality_spatial_calibration_info_t* instantiate_mixedreality_spatial_calibration_info(int include_optional) {
  mixedreality_spatial_calibration_info_t* mixedreality_spatial_calibration_info = NULL;
  if (include_optional) {
    mixedreality_spatial_calibration_info = mixedreality_spatial_calibration_info_create(
      "0",
      "0"
    );
  } else {
    mixedreality_spatial_calibration_info = mixedreality_spatial_calibration_info_create(
      "0",
      "0"
    );
  }

  return mixedreality_spatial_calibration_info;
}


#ifdef mixedreality_spatial_calibration_info_MAIN

void test_mixedreality_spatial_calibration_info(int include_optional) {
    mixedreality_spatial_calibration_info_t* mixedreality_spatial_calibration_info_1 = instantiate_mixedreality_spatial_calibration_info(include_optional);

	cJSON* jsonmixedreality_spatial_calibration_info_1 = mixedreality_spatial_calibration_info_convertToJSON(mixedreality_spatial_calibration_info_1);
	printf("mixedreality_spatial_calibration_info :\n%s\n", cJSON_Print(jsonmixedreality_spatial_calibration_info_1));
	mixedreality_spatial_calibration_info_t* mixedreality_spatial_calibration_info_2 = mixedreality_spatial_calibration_info_parseFromJSON(jsonmixedreality_spatial_calibration_info_1);
	cJSON* jsonmixedreality_spatial_calibration_info_2 = mixedreality_spatial_calibration_info_convertToJSON(mixedreality_spatial_calibration_info_2);
	printf("repeating mixedreality_spatial_calibration_info:\n%s\n", cJSON_Print(jsonmixedreality_spatial_calibration_info_2));
}

int main() {
  test_mixedreality_spatial_calibration_info(1);
  test_mixedreality_spatial_calibration_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_spatial_calibration_info_MAIN
#endif // mixedreality_spatial_calibration_info_TEST

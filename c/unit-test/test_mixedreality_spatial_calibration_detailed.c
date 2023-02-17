#ifndef mixedreality_spatial_calibration_detailed_TEST
#define mixedreality_spatial_calibration_detailed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_spatial_calibration_detailed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_spatial_calibration_detailed.h"
mixedreality_spatial_calibration_detailed_t* instantiate_mixedreality_spatial_calibration_detailed(int include_optional);



mixedreality_spatial_calibration_detailed_t* instantiate_mixedreality_spatial_calibration_detailed(int include_optional) {
  mixedreality_spatial_calibration_detailed_t* mixedreality_spatial_calibration_detailed = NULL;
  if (include_optional) {
    mixedreality_spatial_calibration_detailed = mixedreality_spatial_calibration_detailed_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  } else {
    mixedreality_spatial_calibration_detailed = mixedreality_spatial_calibration_detailed_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  }

  return mixedreality_spatial_calibration_detailed;
}


#ifdef mixedreality_spatial_calibration_detailed_MAIN

void test_mixedreality_spatial_calibration_detailed(int include_optional) {
    mixedreality_spatial_calibration_detailed_t* mixedreality_spatial_calibration_detailed_1 = instantiate_mixedreality_spatial_calibration_detailed(include_optional);

	cJSON* jsonmixedreality_spatial_calibration_detailed_1 = mixedreality_spatial_calibration_detailed_convertToJSON(mixedreality_spatial_calibration_detailed_1);
	printf("mixedreality_spatial_calibration_detailed :\n%s\n", cJSON_Print(jsonmixedreality_spatial_calibration_detailed_1));
	mixedreality_spatial_calibration_detailed_t* mixedreality_spatial_calibration_detailed_2 = mixedreality_spatial_calibration_detailed_parseFromJSON(jsonmixedreality_spatial_calibration_detailed_1);
	cJSON* jsonmixedreality_spatial_calibration_detailed_2 = mixedreality_spatial_calibration_detailed_convertToJSON(mixedreality_spatial_calibration_detailed_2);
	printf("repeating mixedreality_spatial_calibration_detailed:\n%s\n", cJSON_Print(jsonmixedreality_spatial_calibration_detailed_2));
}

int main() {
  test_mixedreality_spatial_calibration_detailed(1);
  test_mixedreality_spatial_calibration_detailed(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_spatial_calibration_detailed_MAIN
#endif // mixedreality_spatial_calibration_detailed_TEST

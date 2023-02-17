#ifndef quickcal_reference_point_info_TEST
#define quickcal_reference_point_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickcal_reference_point_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickcal_reference_point_info.h"
quickcal_reference_point_info_t* instantiate_quickcal_reference_point_info(int include_optional);



quickcal_reference_point_info_t* instantiate_quickcal_reference_point_info(int include_optional) {
  quickcal_reference_point_info_t* quickcal_reference_point_info = NULL;
  if (include_optional) {
    quickcal_reference_point_info = quickcal_reference_point_info_create(
      "0",
      "0"
    );
  } else {
    quickcal_reference_point_info = quickcal_reference_point_info_create(
      "0",
      "0"
    );
  }

  return quickcal_reference_point_info;
}


#ifdef quickcal_reference_point_info_MAIN

void test_quickcal_reference_point_info(int include_optional) {
    quickcal_reference_point_info_t* quickcal_reference_point_info_1 = instantiate_quickcal_reference_point_info(include_optional);

	cJSON* jsonquickcal_reference_point_info_1 = quickcal_reference_point_info_convertToJSON(quickcal_reference_point_info_1);
	printf("quickcal_reference_point_info :\n%s\n", cJSON_Print(jsonquickcal_reference_point_info_1));
	quickcal_reference_point_info_t* quickcal_reference_point_info_2 = quickcal_reference_point_info_parseFromJSON(jsonquickcal_reference_point_info_1);
	cJSON* jsonquickcal_reference_point_info_2 = quickcal_reference_point_info_convertToJSON(quickcal_reference_point_info_2);
	printf("repeating quickcal_reference_point_info:\n%s\n", cJSON_Print(jsonquickcal_reference_point_info_2));
}

int main() {
  test_quickcal_reference_point_info(1);
  test_quickcal_reference_point_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickcal_reference_point_info_MAIN
#endif // quickcal_reference_point_info_TEST

#ifndef quickcal_list_reference_points_response_TEST
#define quickcal_list_reference_points_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickcal_list_reference_points_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickcal_list_reference_points_response.h"
quickcal_list_reference_points_response_t* instantiate_quickcal_list_reference_points_response(int include_optional);

#include "test_rpc_status.c"


quickcal_list_reference_points_response_t* instantiate_quickcal_list_reference_points_response(int include_optional) {
  quickcal_list_reference_points_response_t* quickcal_list_reference_points_response = NULL;
  if (include_optional) {
    quickcal_list_reference_points_response = quickcal_list_reference_points_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    quickcal_list_reference_points_response = quickcal_list_reference_points_response_create(
      NULL,
      list_create()
    );
  }

  return quickcal_list_reference_points_response;
}


#ifdef quickcal_list_reference_points_response_MAIN

void test_quickcal_list_reference_points_response(int include_optional) {
    quickcal_list_reference_points_response_t* quickcal_list_reference_points_response_1 = instantiate_quickcal_list_reference_points_response(include_optional);

	cJSON* jsonquickcal_list_reference_points_response_1 = quickcal_list_reference_points_response_convertToJSON(quickcal_list_reference_points_response_1);
	printf("quickcal_list_reference_points_response :\n%s\n", cJSON_Print(jsonquickcal_list_reference_points_response_1));
	quickcal_list_reference_points_response_t* quickcal_list_reference_points_response_2 = quickcal_list_reference_points_response_parseFromJSON(jsonquickcal_list_reference_points_response_1);
	cJSON* jsonquickcal_list_reference_points_response_2 = quickcal_list_reference_points_response_convertToJSON(quickcal_list_reference_points_response_2);
	printf("repeating quickcal_list_reference_points_response:\n%s\n", cJSON_Print(jsonquickcal_list_reference_points_response_2));
}

int main() {
  test_quickcal_list_reference_points_response(1);
  test_quickcal_list_reference_points_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickcal_list_reference_points_response_MAIN
#endif // quickcal_list_reference_points_response_TEST

#ifndef mixedreality_list_spatial_calibrations_response_TEST
#define mixedreality_list_spatial_calibrations_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_list_spatial_calibrations_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_list_spatial_calibrations_response.h"
mixedreality_list_spatial_calibrations_response_t* instantiate_mixedreality_list_spatial_calibrations_response(int include_optional);

#include "test_rpc_status.c"


mixedreality_list_spatial_calibrations_response_t* instantiate_mixedreality_list_spatial_calibrations_response(int include_optional) {
  mixedreality_list_spatial_calibrations_response_t* mixedreality_list_spatial_calibrations_response = NULL;
  if (include_optional) {
    mixedreality_list_spatial_calibrations_response = mixedreality_list_spatial_calibrations_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    mixedreality_list_spatial_calibrations_response = mixedreality_list_spatial_calibrations_response_create(
      NULL,
      list_create()
    );
  }

  return mixedreality_list_spatial_calibrations_response;
}


#ifdef mixedreality_list_spatial_calibrations_response_MAIN

void test_mixedreality_list_spatial_calibrations_response(int include_optional) {
    mixedreality_list_spatial_calibrations_response_t* mixedreality_list_spatial_calibrations_response_1 = instantiate_mixedreality_list_spatial_calibrations_response(include_optional);

	cJSON* jsonmixedreality_list_spatial_calibrations_response_1 = mixedreality_list_spatial_calibrations_response_convertToJSON(mixedreality_list_spatial_calibrations_response_1);
	printf("mixedreality_list_spatial_calibrations_response :\n%s\n", cJSON_Print(jsonmixedreality_list_spatial_calibrations_response_1));
	mixedreality_list_spatial_calibrations_response_t* mixedreality_list_spatial_calibrations_response_2 = mixedreality_list_spatial_calibrations_response_parseFromJSON(jsonmixedreality_list_spatial_calibrations_response_1);
	cJSON* jsonmixedreality_list_spatial_calibrations_response_2 = mixedreality_list_spatial_calibrations_response_convertToJSON(mixedreality_list_spatial_calibrations_response_2);
	printf("repeating mixedreality_list_spatial_calibrations_response:\n%s\n", cJSON_Print(jsonmixedreality_list_spatial_calibrations_response_2));
}

int main() {
  test_mixedreality_list_spatial_calibrations_response(1);
  test_mixedreality_list_spatial_calibrations_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_list_spatial_calibrations_response_MAIN
#endif // mixedreality_list_spatial_calibrations_response_TEST

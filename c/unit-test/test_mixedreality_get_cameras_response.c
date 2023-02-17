#ifndef mixedreality_get_cameras_response_TEST
#define mixedreality_get_cameras_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_get_cameras_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_get_cameras_response.h"
mixedreality_get_cameras_response_t* instantiate_mixedreality_get_cameras_response(int include_optional);

#include "test_rpc_status.c"


mixedreality_get_cameras_response_t* instantiate_mixedreality_get_cameras_response(int include_optional) {
  mixedreality_get_cameras_response_t* mixedreality_get_cameras_response = NULL;
  if (include_optional) {
    mixedreality_get_cameras_response = mixedreality_get_cameras_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    mixedreality_get_cameras_response = mixedreality_get_cameras_response_create(
      NULL,
      list_create()
    );
  }

  return mixedreality_get_cameras_response;
}


#ifdef mixedreality_get_cameras_response_MAIN

void test_mixedreality_get_cameras_response(int include_optional) {
    mixedreality_get_cameras_response_t* mixedreality_get_cameras_response_1 = instantiate_mixedreality_get_cameras_response(include_optional);

	cJSON* jsonmixedreality_get_cameras_response_1 = mixedreality_get_cameras_response_convertToJSON(mixedreality_get_cameras_response_1);
	printf("mixedreality_get_cameras_response :\n%s\n", cJSON_Print(jsonmixedreality_get_cameras_response_1));
	mixedreality_get_cameras_response_t* mixedreality_get_cameras_response_2 = mixedreality_get_cameras_response_parseFromJSON(jsonmixedreality_get_cameras_response_1);
	cJSON* jsonmixedreality_get_cameras_response_2 = mixedreality_get_cameras_response_convertToJSON(mixedreality_get_cameras_response_2);
	printf("repeating mixedreality_get_cameras_response:\n%s\n", cJSON_Print(jsonmixedreality_get_cameras_response_2));
}

int main() {
  test_mixedreality_get_cameras_response(1);
  test_mixedreality_get_cameras_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_get_cameras_response_MAIN
#endif // mixedreality_get_cameras_response_TEST

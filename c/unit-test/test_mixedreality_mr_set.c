#ifndef mixedreality_mr_set_TEST
#define mixedreality_mr_set_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define mixedreality_mr_set_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/mixedreality_mr_set.h"
mixedreality_mr_set_t* instantiate_mixedreality_mr_set(int include_optional);

#include "test_mixedreality_camera_identity_info.c"


mixedreality_mr_set_t* instantiate_mixedreality_mr_set(int include_optional) {
  mixedreality_mr_set_t* mixedreality_mr_set = NULL;
  if (include_optional) {
    mixedreality_mr_set = mixedreality_mr_set_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_mixedreality_camera_identity_info(0),
      1
    );
  } else {
    mixedreality_mr_set = mixedreality_mr_set_create(
      "0",
      "0",
      NULL,
      1
    );
  }

  return mixedreality_mr_set;
}


#ifdef mixedreality_mr_set_MAIN

void test_mixedreality_mr_set(int include_optional) {
    mixedreality_mr_set_t* mixedreality_mr_set_1 = instantiate_mixedreality_mr_set(include_optional);

	cJSON* jsonmixedreality_mr_set_1 = mixedreality_mr_set_convertToJSON(mixedreality_mr_set_1);
	printf("mixedreality_mr_set :\n%s\n", cJSON_Print(jsonmixedreality_mr_set_1));
	mixedreality_mr_set_t* mixedreality_mr_set_2 = mixedreality_mr_set_parseFromJSON(jsonmixedreality_mr_set_1);
	cJSON* jsonmixedreality_mr_set_2 = mixedreality_mr_set_convertToJSON(mixedreality_mr_set_2);
	printf("repeating mixedreality_mr_set:\n%s\n", cJSON_Print(jsonmixedreality_mr_set_2));
}

int main() {
  test_mixedreality_mr_set(1);
  test_mixedreality_mr_set(0);

  printf("Hello world \n");
  return 0;
}

#endif // mixedreality_mr_set_MAIN
#endif // mixedreality_mr_set_TEST

#ifndef v1_get_mr_set_response_TEST
#define v1_get_mr_set_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_get_mr_set_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_get_mr_set_response.h"
v1_get_mr_set_response_t* instantiate_v1_get_mr_set_response(int include_optional);

#include "test_v1_mr_set_info.c"


v1_get_mr_set_response_t* instantiate_v1_get_mr_set_response(int include_optional) {
  v1_get_mr_set_response_t* v1_get_mr_set_response = NULL;
  if (include_optional) {
    v1_get_mr_set_response = v1_get_mr_set_response_create(
       // false, not to have infinite recursion
      instantiate_v1_mr_set_info(0)
    );
  } else {
    v1_get_mr_set_response = v1_get_mr_set_response_create(
      NULL
    );
  }

  return v1_get_mr_set_response;
}


#ifdef v1_get_mr_set_response_MAIN

void test_v1_get_mr_set_response(int include_optional) {
    v1_get_mr_set_response_t* v1_get_mr_set_response_1 = instantiate_v1_get_mr_set_response(include_optional);

	cJSON* jsonv1_get_mr_set_response_1 = v1_get_mr_set_response_convertToJSON(v1_get_mr_set_response_1);
	printf("v1_get_mr_set_response :\n%s\n", cJSON_Print(jsonv1_get_mr_set_response_1));
	v1_get_mr_set_response_t* v1_get_mr_set_response_2 = v1_get_mr_set_response_parseFromJSON(jsonv1_get_mr_set_response_1);
	cJSON* jsonv1_get_mr_set_response_2 = v1_get_mr_set_response_convertToJSON(v1_get_mr_set_response_2);
	printf("repeating v1_get_mr_set_response:\n%s\n", cJSON_Print(jsonv1_get_mr_set_response_2));
}

int main() {
  test_v1_get_mr_set_response(1);
  test_v1_get_mr_set_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_get_mr_set_response_MAIN
#endif // v1_get_mr_set_response_TEST

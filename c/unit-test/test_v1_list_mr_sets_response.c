#ifndef v1_list_mr_sets_response_TEST
#define v1_list_mr_sets_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_list_mr_sets_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_list_mr_sets_response.h"
v1_list_mr_sets_response_t* instantiate_v1_list_mr_sets_response(int include_optional);



v1_list_mr_sets_response_t* instantiate_v1_list_mr_sets_response(int include_optional) {
  v1_list_mr_sets_response_t* v1_list_mr_sets_response = NULL;
  if (include_optional) {
    v1_list_mr_sets_response = v1_list_mr_sets_response_create(
      list_create()
    );
  } else {
    v1_list_mr_sets_response = v1_list_mr_sets_response_create(
      list_create()
    );
  }

  return v1_list_mr_sets_response;
}


#ifdef v1_list_mr_sets_response_MAIN

void test_v1_list_mr_sets_response(int include_optional) {
    v1_list_mr_sets_response_t* v1_list_mr_sets_response_1 = instantiate_v1_list_mr_sets_response(include_optional);

	cJSON* jsonv1_list_mr_sets_response_1 = v1_list_mr_sets_response_convertToJSON(v1_list_mr_sets_response_1);
	printf("v1_list_mr_sets_response :\n%s\n", cJSON_Print(jsonv1_list_mr_sets_response_1));
	v1_list_mr_sets_response_t* v1_list_mr_sets_response_2 = v1_list_mr_sets_response_parseFromJSON(jsonv1_list_mr_sets_response_1);
	cJSON* jsonv1_list_mr_sets_response_2 = v1_list_mr_sets_response_convertToJSON(v1_list_mr_sets_response_2);
	printf("repeating v1_list_mr_sets_response:\n%s\n", cJSON_Print(jsonv1_list_mr_sets_response_2));
}

int main() {
  test_v1_list_mr_sets_response(1);
  test_v1_list_mr_sets_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_list_mr_sets_response_MAIN
#endif // v1_list_mr_sets_response_TEST

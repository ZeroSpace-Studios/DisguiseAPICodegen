#ifndef v1_enable_observation_response_TEST
#define v1_enable_observation_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_enable_observation_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_enable_observation_response.h"
v1_enable_observation_response_t* instantiate_v1_enable_observation_response(int include_optional);



v1_enable_observation_response_t* instantiate_v1_enable_observation_response(int include_optional) {
  v1_enable_observation_response_t* v1_enable_observation_response = NULL;
  if (include_optional) {
    v1_enable_observation_response = v1_enable_observation_response_create(
      1
    );
  } else {
    v1_enable_observation_response = v1_enable_observation_response_create(
      1
    );
  }

  return v1_enable_observation_response;
}


#ifdef v1_enable_observation_response_MAIN

void test_v1_enable_observation_response(int include_optional) {
    v1_enable_observation_response_t* v1_enable_observation_response_1 = instantiate_v1_enable_observation_response(include_optional);

	cJSON* jsonv1_enable_observation_response_1 = v1_enable_observation_response_convertToJSON(v1_enable_observation_response_1);
	printf("v1_enable_observation_response :\n%s\n", cJSON_Print(jsonv1_enable_observation_response_1));
	v1_enable_observation_response_t* v1_enable_observation_response_2 = v1_enable_observation_response_parseFromJSON(jsonv1_enable_observation_response_1);
	cJSON* jsonv1_enable_observation_response_2 = v1_enable_observation_response_convertToJSON(v1_enable_observation_response_2);
	printf("repeating v1_enable_observation_response:\n%s\n", cJSON_Print(jsonv1_enable_observation_response_2));
}

int main() {
  test_v1_enable_observation_response(1);
  test_v1_enable_observation_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_enable_observation_response_MAIN
#endif // v1_enable_observation_response_TEST

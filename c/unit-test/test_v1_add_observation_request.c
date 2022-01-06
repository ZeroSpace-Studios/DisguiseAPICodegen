#ifndef v1_add_observation_request_TEST
#define v1_add_observation_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_add_observation_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_add_observation_request.h"
v1_add_observation_request_t* instantiate_v1_add_observation_request(int include_optional);



v1_add_observation_request_t* instantiate_v1_add_observation_request(int include_optional) {
  v1_add_observation_request_t* v1_add_observation_request = NULL;
  if (include_optional) {
    v1_add_observation_request = v1_add_observation_request_create(
      "0"
    );
  } else {
    v1_add_observation_request = v1_add_observation_request_create(
      "0"
    );
  }

  return v1_add_observation_request;
}


#ifdef v1_add_observation_request_MAIN

void test_v1_add_observation_request(int include_optional) {
    v1_add_observation_request_t* v1_add_observation_request_1 = instantiate_v1_add_observation_request(include_optional);

	cJSON* jsonv1_add_observation_request_1 = v1_add_observation_request_convertToJSON(v1_add_observation_request_1);
	printf("v1_add_observation_request :\n%s\n", cJSON_Print(jsonv1_add_observation_request_1));
	v1_add_observation_request_t* v1_add_observation_request_2 = v1_add_observation_request_parseFromJSON(jsonv1_add_observation_request_1);
	cJSON* jsonv1_add_observation_request_2 = v1_add_observation_request_convertToJSON(v1_add_observation_request_2);
	printf("repeating v1_add_observation_request:\n%s\n", cJSON_Print(jsonv1_add_observation_request_2));
}

int main() {
  test_v1_add_observation_request(1);
  test_v1_add_observation_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_add_observation_request_MAIN
#endif // v1_add_observation_request_TEST

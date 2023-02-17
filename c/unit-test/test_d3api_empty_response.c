#ifndef d3api_empty_response_TEST
#define d3api_empty_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define d3api_empty_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/d3api_empty_response.h"
d3api_empty_response_t* instantiate_d3api_empty_response(int include_optional);

#include "test_rpc_status.c"


d3api_empty_response_t* instantiate_d3api_empty_response(int include_optional) {
  d3api_empty_response_t* d3api_empty_response = NULL;
  if (include_optional) {
    d3api_empty_response = d3api_empty_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0)
    );
  } else {
    d3api_empty_response = d3api_empty_response_create(
      NULL
    );
  }

  return d3api_empty_response;
}


#ifdef d3api_empty_response_MAIN

void test_d3api_empty_response(int include_optional) {
    d3api_empty_response_t* d3api_empty_response_1 = instantiate_d3api_empty_response(include_optional);

	cJSON* jsond3api_empty_response_1 = d3api_empty_response_convertToJSON(d3api_empty_response_1);
	printf("d3api_empty_response :\n%s\n", cJSON_Print(jsond3api_empty_response_1));
	d3api_empty_response_t* d3api_empty_response_2 = d3api_empty_response_parseFromJSON(jsond3api_empty_response_1);
	cJSON* jsond3api_empty_response_2 = d3api_empty_response_convertToJSON(d3api_empty_response_2);
	printf("repeating d3api_empty_response:\n%s\n", cJSON_Print(jsond3api_empty_response_2));
}

int main() {
  test_d3api_empty_response(1);
  test_d3api_empty_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // d3api_empty_response_MAIN
#endif // d3api_empty_response_TEST

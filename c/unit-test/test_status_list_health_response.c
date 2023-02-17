#ifndef status_list_health_response_TEST
#define status_list_health_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_list_health_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_list_health_response.h"
status_list_health_response_t* instantiate_status_list_health_response(int include_optional);

#include "test_rpc_status.c"


status_list_health_response_t* instantiate_status_list_health_response(int include_optional) {
  status_list_health_response_t* status_list_health_response = NULL;
  if (include_optional) {
    status_list_health_response = status_list_health_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    status_list_health_response = status_list_health_response_create(
      NULL,
      list_create()
    );
  }

  return status_list_health_response;
}


#ifdef status_list_health_response_MAIN

void test_status_list_health_response(int include_optional) {
    status_list_health_response_t* status_list_health_response_1 = instantiate_status_list_health_response(include_optional);

	cJSON* jsonstatus_list_health_response_1 = status_list_health_response_convertToJSON(status_list_health_response_1);
	printf("status_list_health_response :\n%s\n", cJSON_Print(jsonstatus_list_health_response_1));
	status_list_health_response_t* status_list_health_response_2 = status_list_health_response_parseFromJSON(jsonstatus_list_health_response_1);
	cJSON* jsonstatus_list_health_response_2 = status_list_health_response_convertToJSON(status_list_health_response_2);
	printf("repeating status_list_health_response:\n%s\n", cJSON_Print(jsonstatus_list_health_response_2));
}

int main() {
  test_status_list_health_response(1);
  test_status_list_health_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_list_health_response_MAIN
#endif // status_list_health_response_TEST

#ifndef status_get_session_response_TEST
#define status_get_session_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_get_session_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_get_session_response.h"
status_get_session_response_t* instantiate_status_get_session_response(int include_optional);

#include "test_rpc_status.c"
#include "test_status_get_session_result.c"


status_get_session_response_t* instantiate_status_get_session_response(int include_optional) {
  status_get_session_response_t* status_get_session_response = NULL;
  if (include_optional) {
    status_get_session_response = status_get_session_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
       // false, not to have infinite recursion
      instantiate_status_get_session_result(0)
    );
  } else {
    status_get_session_response = status_get_session_response_create(
      NULL,
      NULL
    );
  }

  return status_get_session_response;
}


#ifdef status_get_session_response_MAIN

void test_status_get_session_response(int include_optional) {
    status_get_session_response_t* status_get_session_response_1 = instantiate_status_get_session_response(include_optional);

	cJSON* jsonstatus_get_session_response_1 = status_get_session_response_convertToJSON(status_get_session_response_1);
	printf("status_get_session_response :\n%s\n", cJSON_Print(jsonstatus_get_session_response_1));
	status_get_session_response_t* status_get_session_response_2 = status_get_session_response_parseFromJSON(jsonstatus_get_session_response_1);
	cJSON* jsonstatus_get_session_response_2 = status_get_session_response_convertToJSON(status_get_session_response_2);
	printf("repeating status_get_session_response:\n%s\n", cJSON_Print(jsonstatus_get_session_response_2));
}

int main() {
  test_status_get_session_response(1);
  test_status_get_session_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_get_session_response_MAIN
#endif // status_get_session_response_TEST

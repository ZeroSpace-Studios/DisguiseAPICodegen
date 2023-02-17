#ifndef status_get_session_result_TEST
#define status_get_session_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_get_session_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_get_session_result.h"
status_get_session_result_t* instantiate_status_get_session_result(int include_optional);

#include "test_status_machine_info.c"


status_get_session_result_t* instantiate_status_get_session_result(int include_optional) {
  status_get_session_result_t* status_get_session_result = NULL;
  if (include_optional) {
    status_get_session_result = status_get_session_result_create(
      1,
      1,
       // false, not to have infinite recursion
      instantiate_status_machine_info(0),
      list_create(),
      list_create()
    );
  } else {
    status_get_session_result = status_get_session_result_create(
      1,
      1,
      NULL,
      list_create(),
      list_create()
    );
  }

  return status_get_session_result;
}


#ifdef status_get_session_result_MAIN

void test_status_get_session_result(int include_optional) {
    status_get_session_result_t* status_get_session_result_1 = instantiate_status_get_session_result(include_optional);

	cJSON* jsonstatus_get_session_result_1 = status_get_session_result_convertToJSON(status_get_session_result_1);
	printf("status_get_session_result :\n%s\n", cJSON_Print(jsonstatus_get_session_result_1));
	status_get_session_result_t* status_get_session_result_2 = status_get_session_result_parseFromJSON(jsonstatus_get_session_result_1);
	cJSON* jsonstatus_get_session_result_2 = status_get_session_result_convertToJSON(status_get_session_result_2);
	printf("repeating status_get_session_result:\n%s\n", cJSON_Print(jsonstatus_get_session_result_2));
}

int main() {
  test_status_get_session_result(1);
  test_status_get_session_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_get_session_result_MAIN
#endif // status_get_session_result_TEST

#ifndef status_get_project_result_TEST
#define status_get_project_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_get_project_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_get_project_result.h"
status_get_project_result_t* instantiate_status_get_project_result(int include_optional);

#include "test_status_d3_version_info.c"


status_get_project_result_t* instantiate_status_get_project_result(int include_optional) {
  status_get_project_result_t* status_get_project_result = NULL;
  if (include_optional) {
    status_get_project_result = status_get_project_result_create(
      "0",
       // false, not to have infinite recursion
      instantiate_status_d3_version_info(0)
    );
  } else {
    status_get_project_result = status_get_project_result_create(
      "0",
      NULL
    );
  }

  return status_get_project_result;
}


#ifdef status_get_project_result_MAIN

void test_status_get_project_result(int include_optional) {
    status_get_project_result_t* status_get_project_result_1 = instantiate_status_get_project_result(include_optional);

	cJSON* jsonstatus_get_project_result_1 = status_get_project_result_convertToJSON(status_get_project_result_1);
	printf("status_get_project_result :\n%s\n", cJSON_Print(jsonstatus_get_project_result_1));
	status_get_project_result_t* status_get_project_result_2 = status_get_project_result_parseFromJSON(jsonstatus_get_project_result_1);
	cJSON* jsonstatus_get_project_result_2 = status_get_project_result_convertToJSON(status_get_project_result_2);
	printf("repeating status_get_project_result:\n%s\n", cJSON_Print(jsonstatus_get_project_result_2));
}

int main() {
  test_status_get_project_result(1);
  test_status_get_project_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_get_project_result_MAIN
#endif // status_get_project_result_TEST

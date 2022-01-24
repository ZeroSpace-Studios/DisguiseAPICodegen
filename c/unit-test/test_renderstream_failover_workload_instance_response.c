#ifndef renderstream_failover_workload_instance_response_TEST
#define renderstream_failover_workload_instance_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_failover_workload_instance_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_failover_workload_instance_response.h"
renderstream_failover_workload_instance_response_t* instantiate_renderstream_failover_workload_instance_response(int include_optional);

#include "test_renderstream_failover_info.c"


renderstream_failover_workload_instance_response_t* instantiate_renderstream_failover_workload_instance_response(int include_optional) {
  renderstream_failover_workload_instance_response_t* renderstream_failover_workload_instance_response = NULL;
  if (include_optional) {
    renderstream_failover_workload_instance_response = renderstream_failover_workload_instance_response_create(
       // false, not to have infinite recursion
      instantiate_renderstream_failover_info(0)
    );
  } else {
    renderstream_failover_workload_instance_response = renderstream_failover_workload_instance_response_create(
      NULL
    );
  }

  return renderstream_failover_workload_instance_response;
}


#ifdef renderstream_failover_workload_instance_response_MAIN

void test_renderstream_failover_workload_instance_response(int include_optional) {
    renderstream_failover_workload_instance_response_t* renderstream_failover_workload_instance_response_1 = instantiate_renderstream_failover_workload_instance_response(include_optional);

	cJSON* jsonrenderstream_failover_workload_instance_response_1 = renderstream_failover_workload_instance_response_convertToJSON(renderstream_failover_workload_instance_response_1);
	printf("renderstream_failover_workload_instance_response :\n%s\n", cJSON_Print(jsonrenderstream_failover_workload_instance_response_1));
	renderstream_failover_workload_instance_response_t* renderstream_failover_workload_instance_response_2 = renderstream_failover_workload_instance_response_parseFromJSON(jsonrenderstream_failover_workload_instance_response_1);
	cJSON* jsonrenderstream_failover_workload_instance_response_2 = renderstream_failover_workload_instance_response_convertToJSON(renderstream_failover_workload_instance_response_2);
	printf("repeating renderstream_failover_workload_instance_response:\n%s\n", cJSON_Print(jsonrenderstream_failover_workload_instance_response_2));
}

int main() {
  test_renderstream_failover_workload_instance_response(1);
  test_renderstream_failover_workload_instance_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_failover_workload_instance_response_MAIN
#endif // renderstream_failover_workload_instance_response_TEST

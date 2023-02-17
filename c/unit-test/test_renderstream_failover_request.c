#ifndef renderstream_failover_request_TEST
#define renderstream_failover_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_failover_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_failover_request.h"
renderstream_failover_request_t* instantiate_renderstream_failover_request(int include_optional);

#include "test_d3api_locator.c"


renderstream_failover_request_t* instantiate_renderstream_failover_request(int include_optional) {
  renderstream_failover_request_t* renderstream_failover_request = NULL;
  if (include_optional) {
    renderstream_failover_request = renderstream_failover_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    renderstream_failover_request = renderstream_failover_request_create(
      NULL
    );
  }

  return renderstream_failover_request;
}


#ifdef renderstream_failover_request_MAIN

void test_renderstream_failover_request(int include_optional) {
    renderstream_failover_request_t* renderstream_failover_request_1 = instantiate_renderstream_failover_request(include_optional);

	cJSON* jsonrenderstream_failover_request_1 = renderstream_failover_request_convertToJSON(renderstream_failover_request_1);
	printf("renderstream_failover_request :\n%s\n", cJSON_Print(jsonrenderstream_failover_request_1));
	renderstream_failover_request_t* renderstream_failover_request_2 = renderstream_failover_request_parseFromJSON(jsonrenderstream_failover_request_1);
	cJSON* jsonrenderstream_failover_request_2 = renderstream_failover_request_convertToJSON(renderstream_failover_request_2);
	printf("repeating renderstream_failover_request:\n%s\n", cJSON_Print(jsonrenderstream_failover_request_2));
}

int main() {
  test_renderstream_failover_request(1);
  test_renderstream_failover_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_failover_request_MAIN
#endif // renderstream_failover_request_TEST

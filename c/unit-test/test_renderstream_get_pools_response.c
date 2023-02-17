#ifndef renderstream_get_pools_response_TEST
#define renderstream_get_pools_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_get_pools_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_get_pools_response.h"
renderstream_get_pools_response_t* instantiate_renderstream_get_pools_response(int include_optional);

#include "test_rpc_status.c"


renderstream_get_pools_response_t* instantiate_renderstream_get_pools_response(int include_optional) {
  renderstream_get_pools_response_t* renderstream_get_pools_response = NULL;
  if (include_optional) {
    renderstream_get_pools_response = renderstream_get_pools_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    renderstream_get_pools_response = renderstream_get_pools_response_create(
      NULL,
      list_create()
    );
  }

  return renderstream_get_pools_response;
}


#ifdef renderstream_get_pools_response_MAIN

void test_renderstream_get_pools_response(int include_optional) {
    renderstream_get_pools_response_t* renderstream_get_pools_response_1 = instantiate_renderstream_get_pools_response(include_optional);

	cJSON* jsonrenderstream_get_pools_response_1 = renderstream_get_pools_response_convertToJSON(renderstream_get_pools_response_1);
	printf("renderstream_get_pools_response :\n%s\n", cJSON_Print(jsonrenderstream_get_pools_response_1));
	renderstream_get_pools_response_t* renderstream_get_pools_response_2 = renderstream_get_pools_response_parseFromJSON(jsonrenderstream_get_pools_response_1);
	cJSON* jsonrenderstream_get_pools_response_2 = renderstream_get_pools_response_convertToJSON(renderstream_get_pools_response_2);
	printf("repeating renderstream_get_pools_response:\n%s\n", cJSON_Print(jsonrenderstream_get_pools_response_2));
}

int main() {
  test_renderstream_get_pools_response(1);
  test_renderstream_get_pools_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_get_pools_response_MAIN
#endif // renderstream_get_pools_response_TEST

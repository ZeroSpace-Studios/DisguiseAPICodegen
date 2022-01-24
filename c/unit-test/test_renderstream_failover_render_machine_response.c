#ifndef renderstream_failover_render_machine_response_TEST
#define renderstream_failover_render_machine_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_failover_render_machine_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_failover_render_machine_response.h"
renderstream_failover_render_machine_response_t* instantiate_renderstream_failover_render_machine_response(int include_optional);



renderstream_failover_render_machine_response_t* instantiate_renderstream_failover_render_machine_response(int include_optional) {
  renderstream_failover_render_machine_response_t* renderstream_failover_render_machine_response = NULL;
  if (include_optional) {
    renderstream_failover_render_machine_response = renderstream_failover_render_machine_response_create(
      1,
      list_create()
    );
  } else {
    renderstream_failover_render_machine_response = renderstream_failover_render_machine_response_create(
      1,
      list_create()
    );
  }

  return renderstream_failover_render_machine_response;
}


#ifdef renderstream_failover_render_machine_response_MAIN

void test_renderstream_failover_render_machine_response(int include_optional) {
    renderstream_failover_render_machine_response_t* renderstream_failover_render_machine_response_1 = instantiate_renderstream_failover_render_machine_response(include_optional);

	cJSON* jsonrenderstream_failover_render_machine_response_1 = renderstream_failover_render_machine_response_convertToJSON(renderstream_failover_render_machine_response_1);
	printf("renderstream_failover_render_machine_response :\n%s\n", cJSON_Print(jsonrenderstream_failover_render_machine_response_1));
	renderstream_failover_render_machine_response_t* renderstream_failover_render_machine_response_2 = renderstream_failover_render_machine_response_parseFromJSON(jsonrenderstream_failover_render_machine_response_1);
	cJSON* jsonrenderstream_failover_render_machine_response_2 = renderstream_failover_render_machine_response_convertToJSON(renderstream_failover_render_machine_response_2);
	printf("repeating renderstream_failover_render_machine_response:\n%s\n", cJSON_Print(jsonrenderstream_failover_render_machine_response_2));
}

int main() {
  test_renderstream_failover_render_machine_response(1);
  test_renderstream_failover_render_machine_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_failover_render_machine_response_MAIN
#endif // renderstream_failover_render_machine_response_TEST

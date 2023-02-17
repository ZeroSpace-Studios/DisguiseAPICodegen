#ifndef renderstream_start_layers_request_TEST
#define renderstream_start_layers_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_start_layers_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_start_layers_request.h"
renderstream_start_layers_request_t* instantiate_renderstream_start_layers_request(int include_optional);



renderstream_start_layers_request_t* instantiate_renderstream_start_layers_request(int include_optional) {
  renderstream_start_layers_request_t* renderstream_start_layers_request = NULL;
  if (include_optional) {
    renderstream_start_layers_request = renderstream_start_layers_request_create(
      list_create()
    );
  } else {
    renderstream_start_layers_request = renderstream_start_layers_request_create(
      list_create()
    );
  }

  return renderstream_start_layers_request;
}


#ifdef renderstream_start_layers_request_MAIN

void test_renderstream_start_layers_request(int include_optional) {
    renderstream_start_layers_request_t* renderstream_start_layers_request_1 = instantiate_renderstream_start_layers_request(include_optional);

	cJSON* jsonrenderstream_start_layers_request_1 = renderstream_start_layers_request_convertToJSON(renderstream_start_layers_request_1);
	printf("renderstream_start_layers_request :\n%s\n", cJSON_Print(jsonrenderstream_start_layers_request_1));
	renderstream_start_layers_request_t* renderstream_start_layers_request_2 = renderstream_start_layers_request_parseFromJSON(jsonrenderstream_start_layers_request_1);
	cJSON* jsonrenderstream_start_layers_request_2 = renderstream_start_layers_request_convertToJSON(renderstream_start_layers_request_2);
	printf("repeating renderstream_start_layers_request:\n%s\n", cJSON_Print(jsonrenderstream_start_layers_request_2));
}

int main() {
  test_renderstream_start_layers_request(1);
  test_renderstream_start_layers_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_start_layers_request_MAIN
#endif // renderstream_start_layers_request_TEST

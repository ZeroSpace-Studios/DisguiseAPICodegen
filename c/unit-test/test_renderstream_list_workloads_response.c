#ifndef renderstream_list_workloads_response_TEST
#define renderstream_list_workloads_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_list_workloads_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_list_workloads_response.h"
renderstream_list_workloads_response_t* instantiate_renderstream_list_workloads_response(int include_optional);



renderstream_list_workloads_response_t* instantiate_renderstream_list_workloads_response(int include_optional) {
  renderstream_list_workloads_response_t* renderstream_list_workloads_response = NULL;
  if (include_optional) {
    renderstream_list_workloads_response = renderstream_list_workloads_response_create(
      list_create()
    );
  } else {
    renderstream_list_workloads_response = renderstream_list_workloads_response_create(
      list_create()
    );
  }

  return renderstream_list_workloads_response;
}


#ifdef renderstream_list_workloads_response_MAIN

void test_renderstream_list_workloads_response(int include_optional) {
    renderstream_list_workloads_response_t* renderstream_list_workloads_response_1 = instantiate_renderstream_list_workloads_response(include_optional);

	cJSON* jsonrenderstream_list_workloads_response_1 = renderstream_list_workloads_response_convertToJSON(renderstream_list_workloads_response_1);
	printf("renderstream_list_workloads_response :\n%s\n", cJSON_Print(jsonrenderstream_list_workloads_response_1));
	renderstream_list_workloads_response_t* renderstream_list_workloads_response_2 = renderstream_list_workloads_response_parseFromJSON(jsonrenderstream_list_workloads_response_1);
	cJSON* jsonrenderstream_list_workloads_response_2 = renderstream_list_workloads_response_convertToJSON(renderstream_list_workloads_response_2);
	printf("repeating renderstream_list_workloads_response:\n%s\n", cJSON_Print(jsonrenderstream_list_workloads_response_2));
}

int main() {
  test_renderstream_list_workloads_response(1);
  test_renderstream_list_workloads_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_list_workloads_response_MAIN
#endif // renderstream_list_workloads_response_TEST

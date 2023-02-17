#ifndef renderstream_get_layer_status_result_TEST
#define renderstream_get_layer_status_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_get_layer_status_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_get_layer_status_result.h"
renderstream_get_layer_status_result_t* instantiate_renderstream_get_layer_status_result(int include_optional);

#include "test_renderstream_reference_info.c"
#include "test_renderstream_workload_info.c"


renderstream_get_layer_status_result_t* instantiate_renderstream_get_layer_status_result(int include_optional) {
  renderstream_get_layer_status_result_t* renderstream_get_layer_status_result = NULL;
  if (include_optional) {
    renderstream_get_layer_status_result = renderstream_get_layer_status_result_create(
       // false, not to have infinite recursion
      instantiate_renderstream_reference_info(0),
       // false, not to have infinite recursion
      instantiate_renderstream_workload_info(0),
      list_create(),
      list_create()
    );
  } else {
    renderstream_get_layer_status_result = renderstream_get_layer_status_result_create(
      NULL,
      NULL,
      list_create(),
      list_create()
    );
  }

  return renderstream_get_layer_status_result;
}


#ifdef renderstream_get_layer_status_result_MAIN

void test_renderstream_get_layer_status_result(int include_optional) {
    renderstream_get_layer_status_result_t* renderstream_get_layer_status_result_1 = instantiate_renderstream_get_layer_status_result(include_optional);

	cJSON* jsonrenderstream_get_layer_status_result_1 = renderstream_get_layer_status_result_convertToJSON(renderstream_get_layer_status_result_1);
	printf("renderstream_get_layer_status_result :\n%s\n", cJSON_Print(jsonrenderstream_get_layer_status_result_1));
	renderstream_get_layer_status_result_t* renderstream_get_layer_status_result_2 = renderstream_get_layer_status_result_parseFromJSON(jsonrenderstream_get_layer_status_result_1);
	cJSON* jsonrenderstream_get_layer_status_result_2 = renderstream_get_layer_status_result_convertToJSON(renderstream_get_layer_status_result_2);
	printf("repeating renderstream_get_layer_status_result:\n%s\n", cJSON_Print(jsonrenderstream_get_layer_status_result_2));
}

int main() {
  test_renderstream_get_layer_status_result(1);
  test_renderstream_get_layer_status_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_get_layer_status_result_MAIN
#endif // renderstream_get_layer_status_result_TEST

#ifndef renderstream_get_layer_config_result_TEST
#define renderstream_get_layer_config_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_get_layer_config_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_get_layer_config_result.h"
renderstream_get_layer_config_result_t* instantiate_renderstream_get_layer_config_result(int include_optional);

#include "test_renderstream_asset.c"
#include "test_renderstream_pool.c"
#include "test_renderstream_assigner.c"


renderstream_get_layer_config_result_t* instantiate_renderstream_get_layer_config_result(int include_optional) {
  renderstream_get_layer_config_result_t* renderstream_get_layer_config_result = NULL;
  if (include_optional) {
    renderstream_get_layer_config_result = renderstream_get_layer_config_result_create(
      56,
       // false, not to have infinite recursion
      instantiate_renderstream_asset(0),
       // false, not to have infinite recursion
      instantiate_renderstream_pool(0),
      list_create(),
       // false, not to have infinite recursion
      instantiate_renderstream_assigner(0)
    );
  } else {
    renderstream_get_layer_config_result = renderstream_get_layer_config_result_create(
      56,
      NULL,
      NULL,
      list_create(),
      NULL
    );
  }

  return renderstream_get_layer_config_result;
}


#ifdef renderstream_get_layer_config_result_MAIN

void test_renderstream_get_layer_config_result(int include_optional) {
    renderstream_get_layer_config_result_t* renderstream_get_layer_config_result_1 = instantiate_renderstream_get_layer_config_result(include_optional);

	cJSON* jsonrenderstream_get_layer_config_result_1 = renderstream_get_layer_config_result_convertToJSON(renderstream_get_layer_config_result_1);
	printf("renderstream_get_layer_config_result :\n%s\n", cJSON_Print(jsonrenderstream_get_layer_config_result_1));
	renderstream_get_layer_config_result_t* renderstream_get_layer_config_result_2 = renderstream_get_layer_config_result_parseFromJSON(jsonrenderstream_get_layer_config_result_1);
	cJSON* jsonrenderstream_get_layer_config_result_2 = renderstream_get_layer_config_result_convertToJSON(renderstream_get_layer_config_result_2);
	printf("repeating renderstream_get_layer_config_result:\n%s\n", cJSON_Print(jsonrenderstream_get_layer_config_result_2));
}

int main() {
  test_renderstream_get_layer_config_result(1);
  test_renderstream_get_layer_config_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_get_layer_config_result_MAIN
#endif // renderstream_get_layer_config_result_TEST

#ifndef renderstream_pool_info_TEST
#define renderstream_pool_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_pool_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_pool_info.h"
renderstream_pool_info_t* instantiate_renderstream_pool_info(int include_optional);



renderstream_pool_info_t* instantiate_renderstream_pool_info(int include_optional) {
  renderstream_pool_info_t* renderstream_pool_info = NULL;
  if (include_optional) {
    renderstream_pool_info = renderstream_pool_info_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  } else {
    renderstream_pool_info = renderstream_pool_info_create(
      "0",
      "0",
      list_create(),
      list_create()
    );
  }

  return renderstream_pool_info;
}


#ifdef renderstream_pool_info_MAIN

void test_renderstream_pool_info(int include_optional) {
    renderstream_pool_info_t* renderstream_pool_info_1 = instantiate_renderstream_pool_info(include_optional);

	cJSON* jsonrenderstream_pool_info_1 = renderstream_pool_info_convertToJSON(renderstream_pool_info_1);
	printf("renderstream_pool_info :\n%s\n", cJSON_Print(jsonrenderstream_pool_info_1));
	renderstream_pool_info_t* renderstream_pool_info_2 = renderstream_pool_info_parseFromJSON(jsonrenderstream_pool_info_1);
	cJSON* jsonrenderstream_pool_info_2 = renderstream_pool_info_convertToJSON(renderstream_pool_info_2);
	printf("repeating renderstream_pool_info:\n%s\n", cJSON_Print(jsonrenderstream_pool_info_2));
}

int main() {
  test_renderstream_pool_info(1);
  test_renderstream_pool_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_pool_info_MAIN
#endif // renderstream_pool_info_TEST

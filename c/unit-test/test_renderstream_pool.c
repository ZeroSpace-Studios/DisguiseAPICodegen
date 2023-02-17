#ifndef renderstream_pool_TEST
#define renderstream_pool_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_pool_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_pool.h"
renderstream_pool_t* instantiate_renderstream_pool(int include_optional);



renderstream_pool_t* instantiate_renderstream_pool(int include_optional) {
  renderstream_pool_t* renderstream_pool = NULL;
  if (include_optional) {
    renderstream_pool = renderstream_pool_create(
      "0",
      "0"
    );
  } else {
    renderstream_pool = renderstream_pool_create(
      "0",
      "0"
    );
  }

  return renderstream_pool;
}


#ifdef renderstream_pool_MAIN

void test_renderstream_pool(int include_optional) {
    renderstream_pool_t* renderstream_pool_1 = instantiate_renderstream_pool(include_optional);

	cJSON* jsonrenderstream_pool_1 = renderstream_pool_convertToJSON(renderstream_pool_1);
	printf("renderstream_pool :\n%s\n", cJSON_Print(jsonrenderstream_pool_1));
	renderstream_pool_t* renderstream_pool_2 = renderstream_pool_parseFromJSON(jsonrenderstream_pool_1);
	cJSON* jsonrenderstream_pool_2 = renderstream_pool_convertToJSON(renderstream_pool_2);
	printf("repeating renderstream_pool:\n%s\n", cJSON_Print(jsonrenderstream_pool_2));
}

int main() {
  test_renderstream_pool(1);
  test_renderstream_pool(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_pool_MAIN
#endif // renderstream_pool_TEST

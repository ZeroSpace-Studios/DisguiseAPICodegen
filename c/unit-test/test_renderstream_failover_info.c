#ifndef renderstream_failover_info_TEST
#define renderstream_failover_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_failover_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_failover_info.h"
renderstream_failover_info_t* instantiate_renderstream_failover_info(int include_optional);



renderstream_failover_info_t* instantiate_renderstream_failover_info(int include_optional) {
  renderstream_failover_info_t* renderstream_failover_info = NULL;
  if (include_optional) {
    renderstream_failover_info = renderstream_failover_info_create(
      "0",
      56,
      56,
      "0",
      "0",
      list_create()
    );
  } else {
    renderstream_failover_info = renderstream_failover_info_create(
      "0",
      56,
      56,
      "0",
      "0",
      list_create()
    );
  }

  return renderstream_failover_info;
}


#ifdef renderstream_failover_info_MAIN

void test_renderstream_failover_info(int include_optional) {
    renderstream_failover_info_t* renderstream_failover_info_1 = instantiate_renderstream_failover_info(include_optional);

	cJSON* jsonrenderstream_failover_info_1 = renderstream_failover_info_convertToJSON(renderstream_failover_info_1);
	printf("renderstream_failover_info :\n%s\n", cJSON_Print(jsonrenderstream_failover_info_1));
	renderstream_failover_info_t* renderstream_failover_info_2 = renderstream_failover_info_parseFromJSON(jsonrenderstream_failover_info_1);
	cJSON* jsonrenderstream_failover_info_2 = renderstream_failover_info_convertToJSON(renderstream_failover_info_2);
	printf("repeating renderstream_failover_info:\n%s\n", cJSON_Print(jsonrenderstream_failover_info_2));
}

int main() {
  test_renderstream_failover_info(1);
  test_renderstream_failover_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_failover_info_MAIN
#endif // renderstream_failover_info_TEST

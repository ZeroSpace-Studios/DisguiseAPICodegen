#ifndef renderstream_workload_info_TEST
#define renderstream_workload_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_workload_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_workload_info.h"
renderstream_workload_info_t* instantiate_renderstream_workload_info(int include_optional);

#include "test_renderstream_asset_info.c"


renderstream_workload_info_t* instantiate_renderstream_workload_info(int include_optional) {
  renderstream_workload_info_t* renderstream_workload_info = NULL;
  if (include_optional) {
    renderstream_workload_info = renderstream_workload_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_renderstream_asset_info(0),
      d3_api_renderstream_workload_info__"UNKNOWN",
      list_create(),
      1,
      "0",
      "0"
    );
  } else {
    renderstream_workload_info = renderstream_workload_info_create(
      "0",
      "0",
      NULL,
      d3_api_renderstream_workload_info__"UNKNOWN",
      list_create(),
      1,
      "0",
      "0"
    );
  }

  return renderstream_workload_info;
}


#ifdef renderstream_workload_info_MAIN

void test_renderstream_workload_info(int include_optional) {
    renderstream_workload_info_t* renderstream_workload_info_1 = instantiate_renderstream_workload_info(include_optional);

	cJSON* jsonrenderstream_workload_info_1 = renderstream_workload_info_convertToJSON(renderstream_workload_info_1);
	printf("renderstream_workload_info :\n%s\n", cJSON_Print(jsonrenderstream_workload_info_1));
	renderstream_workload_info_t* renderstream_workload_info_2 = renderstream_workload_info_parseFromJSON(jsonrenderstream_workload_info_1);
	cJSON* jsonrenderstream_workload_info_2 = renderstream_workload_info_convertToJSON(renderstream_workload_info_2);
	printf("repeating renderstream_workload_info:\n%s\n", cJSON_Print(jsonrenderstream_workload_info_2));
}

int main() {
  test_renderstream_workload_info(1);
  test_renderstream_workload_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_workload_info_MAIN
#endif // renderstream_workload_info_TEST

#ifndef renderstream_workload_instance_info_TEST
#define renderstream_workload_instance_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_workload_instance_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_workload_instance_info.h"
renderstream_workload_instance_info_t* instantiate_renderstream_workload_instance_info(int include_optional);



renderstream_workload_instance_info_t* instantiate_renderstream_workload_instance_info(int include_optional) {
  renderstream_workload_instance_info_t* renderstream_workload_instance_info = NULL;
  if (include_optional) {
    renderstream_workload_instance_info = renderstream_workload_instance_info_create(
      "0",
      56,
      1,
      1,
      d3_api_renderstream_workload_instance_info__"UNKNOWN",
      1
    );
  } else {
    renderstream_workload_instance_info = renderstream_workload_instance_info_create(
      "0",
      56,
      1,
      1,
      d3_api_renderstream_workload_instance_info__"UNKNOWN",
      1
    );
  }

  return renderstream_workload_instance_info;
}


#ifdef renderstream_workload_instance_info_MAIN

void test_renderstream_workload_instance_info(int include_optional) {
    renderstream_workload_instance_info_t* renderstream_workload_instance_info_1 = instantiate_renderstream_workload_instance_info(include_optional);

	cJSON* jsonrenderstream_workload_instance_info_1 = renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_1);
	printf("renderstream_workload_instance_info :\n%s\n", cJSON_Print(jsonrenderstream_workload_instance_info_1));
	renderstream_workload_instance_info_t* renderstream_workload_instance_info_2 = renderstream_workload_instance_info_parseFromJSON(jsonrenderstream_workload_instance_info_1);
	cJSON* jsonrenderstream_workload_instance_info_2 = renderstream_workload_instance_info_convertToJSON(renderstream_workload_instance_info_2);
	printf("repeating renderstream_workload_instance_info:\n%s\n", cJSON_Print(jsonrenderstream_workload_instance_info_2));
}

int main() {
  test_renderstream_workload_instance_info(1);
  test_renderstream_workload_instance_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_workload_instance_info_MAIN
#endif // renderstream_workload_instance_info_TEST

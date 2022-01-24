#ifndef renderstream_cluster_info_TEST
#define renderstream_cluster_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_cluster_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_cluster_info.h"
renderstream_cluster_info_t* instantiate_renderstream_cluster_info(int include_optional);

#include "test_renderstream_render_machine_info.c"


renderstream_cluster_info_t* instantiate_renderstream_cluster_info(int include_optional) {
  renderstream_cluster_info_t* renderstream_cluster_info = NULL;
  if (include_optional) {
    renderstream_cluster_info = renderstream_cluster_info_create(
      "0",
      list_create(),
       // false, not to have infinite recursion
      instantiate_renderstream_render_machine_info(0),
      list_create()
    );
  } else {
    renderstream_cluster_info = renderstream_cluster_info_create(
      "0",
      list_create(),
      NULL,
      list_create()
    );
  }

  return renderstream_cluster_info;
}


#ifdef renderstream_cluster_info_MAIN

void test_renderstream_cluster_info(int include_optional) {
    renderstream_cluster_info_t* renderstream_cluster_info_1 = instantiate_renderstream_cluster_info(include_optional);

	cJSON* jsonrenderstream_cluster_info_1 = renderstream_cluster_info_convertToJSON(renderstream_cluster_info_1);
	printf("renderstream_cluster_info :\n%s\n", cJSON_Print(jsonrenderstream_cluster_info_1));
	renderstream_cluster_info_t* renderstream_cluster_info_2 = renderstream_cluster_info_parseFromJSON(jsonrenderstream_cluster_info_1);
	cJSON* jsonrenderstream_cluster_info_2 = renderstream_cluster_info_convertToJSON(renderstream_cluster_info_2);
	printf("repeating renderstream_cluster_info:\n%s\n", cJSON_Print(jsonrenderstream_cluster_info_2));
}

int main() {
  test_renderstream_cluster_info(1);
  test_renderstream_cluster_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_cluster_info_MAIN
#endif // renderstream_cluster_info_TEST

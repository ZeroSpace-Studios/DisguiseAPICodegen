#ifndef renderstream_network_info_TEST
#define renderstream_network_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_network_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_network_info.h"
renderstream_network_info_t* instantiate_renderstream_network_info(int include_optional);



renderstream_network_info_t* instantiate_renderstream_network_info(int include_optional) {
  renderstream_network_info_t* renderstream_network_info = NULL;
  if (include_optional) {
    renderstream_network_info = renderstream_network_info_create(
      "0",
      "0"
    );
  } else {
    renderstream_network_info = renderstream_network_info_create(
      "0",
      "0"
    );
  }

  return renderstream_network_info;
}


#ifdef renderstream_network_info_MAIN

void test_renderstream_network_info(int include_optional) {
    renderstream_network_info_t* renderstream_network_info_1 = instantiate_renderstream_network_info(include_optional);

	cJSON* jsonrenderstream_network_info_1 = renderstream_network_info_convertToJSON(renderstream_network_info_1);
	printf("renderstream_network_info :\n%s\n", cJSON_Print(jsonrenderstream_network_info_1));
	renderstream_network_info_t* renderstream_network_info_2 = renderstream_network_info_parseFromJSON(jsonrenderstream_network_info_1);
	cJSON* jsonrenderstream_network_info_2 = renderstream_network_info_convertToJSON(renderstream_network_info_2);
	printf("repeating renderstream_network_info:\n%s\n", cJSON_Print(jsonrenderstream_network_info_2));
}

int main() {
  test_renderstream_network_info(1);
  test_renderstream_network_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_network_info_MAIN
#endif // renderstream_network_info_TEST

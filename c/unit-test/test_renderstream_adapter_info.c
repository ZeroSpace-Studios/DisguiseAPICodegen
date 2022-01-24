#ifndef renderstream_adapter_info_TEST
#define renderstream_adapter_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_adapter_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_adapter_info.h"
renderstream_adapter_info_t* instantiate_renderstream_adapter_info(int include_optional);



renderstream_adapter_info_t* instantiate_renderstream_adapter_info(int include_optional) {
  renderstream_adapter_info_t* renderstream_adapter_info = NULL;
  if (include_optional) {
    renderstream_adapter_info = renderstream_adapter_info_create(
      "0",
      "0",
      "0"
    );
  } else {
    renderstream_adapter_info = renderstream_adapter_info_create(
      "0",
      "0",
      "0"
    );
  }

  return renderstream_adapter_info;
}


#ifdef renderstream_adapter_info_MAIN

void test_renderstream_adapter_info(int include_optional) {
    renderstream_adapter_info_t* renderstream_adapter_info_1 = instantiate_renderstream_adapter_info(include_optional);

	cJSON* jsonrenderstream_adapter_info_1 = renderstream_adapter_info_convertToJSON(renderstream_adapter_info_1);
	printf("renderstream_adapter_info :\n%s\n", cJSON_Print(jsonrenderstream_adapter_info_1));
	renderstream_adapter_info_t* renderstream_adapter_info_2 = renderstream_adapter_info_parseFromJSON(jsonrenderstream_adapter_info_1);
	cJSON* jsonrenderstream_adapter_info_2 = renderstream_adapter_info_convertToJSON(renderstream_adapter_info_2);
	printf("repeating renderstream_adapter_info:\n%s\n", cJSON_Print(jsonrenderstream_adapter_info_2));
}

int main() {
  test_renderstream_adapter_info(1);
  test_renderstream_adapter_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_adapter_info_MAIN
#endif // renderstream_adapter_info_TEST

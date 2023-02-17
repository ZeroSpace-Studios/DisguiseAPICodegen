#ifndef renderstream_transport_info_TEST
#define renderstream_transport_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_transport_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_transport_info.h"
renderstream_transport_info_t* instantiate_renderstream_transport_info(int include_optional);



renderstream_transport_info_t* instantiate_renderstream_transport_info(int include_optional) {
  renderstream_transport_info_t* renderstream_transport_info = NULL;
  if (include_optional) {
    renderstream_transport_info = renderstream_transport_info_create(
      "0",
      "0",
      56
    );
  } else {
    renderstream_transport_info = renderstream_transport_info_create(
      "0",
      "0",
      56
    );
  }

  return renderstream_transport_info;
}


#ifdef renderstream_transport_info_MAIN

void test_renderstream_transport_info(int include_optional) {
    renderstream_transport_info_t* renderstream_transport_info_1 = instantiate_renderstream_transport_info(include_optional);

	cJSON* jsonrenderstream_transport_info_1 = renderstream_transport_info_convertToJSON(renderstream_transport_info_1);
	printf("renderstream_transport_info :\n%s\n", cJSON_Print(jsonrenderstream_transport_info_1));
	renderstream_transport_info_t* renderstream_transport_info_2 = renderstream_transport_info_parseFromJSON(jsonrenderstream_transport_info_1);
	cJSON* jsonrenderstream_transport_info_2 = renderstream_transport_info_convertToJSON(renderstream_transport_info_2);
	printf("repeating renderstream_transport_info:\n%s\n", cJSON_Print(jsonrenderstream_transport_info_2));
}

int main() {
  test_renderstream_transport_info(1);
  test_renderstream_transport_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_transport_info_MAIN
#endif // renderstream_transport_info_TEST

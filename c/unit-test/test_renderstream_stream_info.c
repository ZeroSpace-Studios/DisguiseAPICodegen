#ifndef renderstream_stream_info_TEST
#define renderstream_stream_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_stream_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_stream_info.h"
renderstream_stream_info_t* instantiate_renderstream_stream_info(int include_optional);

#include "test_renderstream_clipping_region.c"


renderstream_stream_info_t* instantiate_renderstream_stream_info(int include_optional) {
  renderstream_stream_info_t* renderstream_stream_info = NULL;
  if (include_optional) {
    renderstream_stream_info = renderstream_stream_info_create(
      "0",
      "0",
      "0",
      d3_api_renderstream_stream_info__"None",
      1,
       // false, not to have infinite recursion
      instantiate_renderstream_clipping_region(0)
    );
  } else {
    renderstream_stream_info = renderstream_stream_info_create(
      "0",
      "0",
      "0",
      d3_api_renderstream_stream_info__"None",
      1,
      NULL
    );
  }

  return renderstream_stream_info;
}


#ifdef renderstream_stream_info_MAIN

void test_renderstream_stream_info(int include_optional) {
    renderstream_stream_info_t* renderstream_stream_info_1 = instantiate_renderstream_stream_info(include_optional);

	cJSON* jsonrenderstream_stream_info_1 = renderstream_stream_info_convertToJSON(renderstream_stream_info_1);
	printf("renderstream_stream_info :\n%s\n", cJSON_Print(jsonrenderstream_stream_info_1));
	renderstream_stream_info_t* renderstream_stream_info_2 = renderstream_stream_info_parseFromJSON(jsonrenderstream_stream_info_1);
	cJSON* jsonrenderstream_stream_info_2 = renderstream_stream_info_convertToJSON(renderstream_stream_info_2);
	printf("repeating renderstream_stream_info:\n%s\n", cJSON_Print(jsonrenderstream_stream_info_2));
}

int main() {
  test_renderstream_stream_info(1);
  test_renderstream_stream_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_stream_info_MAIN
#endif // renderstream_stream_info_TEST

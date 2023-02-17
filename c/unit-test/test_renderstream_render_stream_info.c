#ifndef renderstream_render_stream_info_TEST
#define renderstream_render_stream_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_render_stream_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_render_stream_info.h"
renderstream_render_stream_info_t* instantiate_renderstream_render_stream_info(int include_optional);



renderstream_render_stream_info_t* instantiate_renderstream_render_stream_info(int include_optional) {
  renderstream_render_stream_info_t* renderstream_render_stream_info = NULL;
  if (include_optional) {
    renderstream_render_stream_info = renderstream_render_stream_info_create(
      "0",
      "0"
    );
  } else {
    renderstream_render_stream_info = renderstream_render_stream_info_create(
      "0",
      "0"
    );
  }

  return renderstream_render_stream_info;
}


#ifdef renderstream_render_stream_info_MAIN

void test_renderstream_render_stream_info(int include_optional) {
    renderstream_render_stream_info_t* renderstream_render_stream_info_1 = instantiate_renderstream_render_stream_info(include_optional);

	cJSON* jsonrenderstream_render_stream_info_1 = renderstream_render_stream_info_convertToJSON(renderstream_render_stream_info_1);
	printf("renderstream_render_stream_info :\n%s\n", cJSON_Print(jsonrenderstream_render_stream_info_1));
	renderstream_render_stream_info_t* renderstream_render_stream_info_2 = renderstream_render_stream_info_parseFromJSON(jsonrenderstream_render_stream_info_1);
	cJSON* jsonrenderstream_render_stream_info_2 = renderstream_render_stream_info_convertToJSON(renderstream_render_stream_info_2);
	printf("repeating renderstream_render_stream_info:\n%s\n", cJSON_Print(jsonrenderstream_render_stream_info_2));
}

int main() {
  test_renderstream_render_stream_info(1);
  test_renderstream_render_stream_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_render_stream_info_MAIN
#endif // renderstream_render_stream_info_TEST

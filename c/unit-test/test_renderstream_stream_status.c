#ifndef renderstream_stream_status_TEST
#define renderstream_stream_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_stream_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_stream_status.h"
renderstream_stream_status_t* instantiate_renderstream_stream_status(int include_optional);



renderstream_stream_status_t* instantiate_renderstream_stream_status(int include_optional) {
  renderstream_stream_status_t* renderstream_stream_status = NULL;
  if (include_optional) {
    renderstream_stream_status = renderstream_stream_status_create(
      1,
      1,
      1.337,
      1.337,
      "0"
    );
  } else {
    renderstream_stream_status = renderstream_stream_status_create(
      1,
      1,
      1.337,
      1.337,
      "0"
    );
  }

  return renderstream_stream_status;
}


#ifdef renderstream_stream_status_MAIN

void test_renderstream_stream_status(int include_optional) {
    renderstream_stream_status_t* renderstream_stream_status_1 = instantiate_renderstream_stream_status(include_optional);

	cJSON* jsonrenderstream_stream_status_1 = renderstream_stream_status_convertToJSON(renderstream_stream_status_1);
	printf("renderstream_stream_status :\n%s\n", cJSON_Print(jsonrenderstream_stream_status_1));
	renderstream_stream_status_t* renderstream_stream_status_2 = renderstream_stream_status_parseFromJSON(jsonrenderstream_stream_status_1);
	cJSON* jsonrenderstream_stream_status_2 = renderstream_stream_status_convertToJSON(renderstream_stream_status_2);
	printf("repeating renderstream_stream_status:\n%s\n", cJSON_Print(jsonrenderstream_stream_status_2));
}

int main() {
  test_renderstream_stream_status(1);
  test_renderstream_stream_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_stream_status_MAIN
#endif // renderstream_stream_status_TEST

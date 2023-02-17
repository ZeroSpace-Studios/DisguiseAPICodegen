#ifndef renderstream_reference_info_TEST
#define renderstream_reference_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_reference_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_reference_info.h"
renderstream_reference_info_t* instantiate_renderstream_reference_info(int include_optional);



renderstream_reference_info_t* instantiate_renderstream_reference_info(int include_optional) {
  renderstream_reference_info_t* renderstream_reference_info = NULL;
  if (include_optional) {
    renderstream_reference_info = renderstream_reference_info_create(
      1.337
    );
  } else {
    renderstream_reference_info = renderstream_reference_info_create(
      1.337
    );
  }

  return renderstream_reference_info;
}


#ifdef renderstream_reference_info_MAIN

void test_renderstream_reference_info(int include_optional) {
    renderstream_reference_info_t* renderstream_reference_info_1 = instantiate_renderstream_reference_info(include_optional);

	cJSON* jsonrenderstream_reference_info_1 = renderstream_reference_info_convertToJSON(renderstream_reference_info_1);
	printf("renderstream_reference_info :\n%s\n", cJSON_Print(jsonrenderstream_reference_info_1));
	renderstream_reference_info_t* renderstream_reference_info_2 = renderstream_reference_info_parseFromJSON(jsonrenderstream_reference_info_1);
	cJSON* jsonrenderstream_reference_info_2 = renderstream_reference_info_convertToJSON(renderstream_reference_info_2);
	printf("repeating renderstream_reference_info:\n%s\n", cJSON_Print(jsonrenderstream_reference_info_2));
}

int main() {
  test_renderstream_reference_info(1);
  test_renderstream_reference_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_reference_info_MAIN
#endif // renderstream_reference_info_TEST

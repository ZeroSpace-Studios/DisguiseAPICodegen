#ifndef renderstream_mapping_TEST
#define renderstream_mapping_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_mapping_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_mapping.h"
renderstream_mapping_t* instantiate_renderstream_mapping(int include_optional);



renderstream_mapping_t* instantiate_renderstream_mapping(int include_optional) {
  renderstream_mapping_t* renderstream_mapping = NULL;
  if (include_optional) {
    renderstream_mapping = renderstream_mapping_create(
      "0",
      "0"
    );
  } else {
    renderstream_mapping = renderstream_mapping_create(
      "0",
      "0"
    );
  }

  return renderstream_mapping;
}


#ifdef renderstream_mapping_MAIN

void test_renderstream_mapping(int include_optional) {
    renderstream_mapping_t* renderstream_mapping_1 = instantiate_renderstream_mapping(include_optional);

	cJSON* jsonrenderstream_mapping_1 = renderstream_mapping_convertToJSON(renderstream_mapping_1);
	printf("renderstream_mapping :\n%s\n", cJSON_Print(jsonrenderstream_mapping_1));
	renderstream_mapping_t* renderstream_mapping_2 = renderstream_mapping_parseFromJSON(jsonrenderstream_mapping_1);
	cJSON* jsonrenderstream_mapping_2 = renderstream_mapping_convertToJSON(renderstream_mapping_2);
	printf("repeating renderstream_mapping:\n%s\n", cJSON_Print(jsonrenderstream_mapping_2));
}

int main() {
  test_renderstream_mapping(1);
  test_renderstream_mapping(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_mapping_MAIN
#endif // renderstream_mapping_TEST

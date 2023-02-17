#ifndef renderstream_assigner_TEST
#define renderstream_assigner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_assigner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_assigner.h"
renderstream_assigner_t* instantiate_renderstream_assigner(int include_optional);



renderstream_assigner_t* instantiate_renderstream_assigner(int include_optional) {
  renderstream_assigner_t* renderstream_assigner = NULL;
  if (include_optional) {
    renderstream_assigner = renderstream_assigner_create(
      "0",
      "0"
    );
  } else {
    renderstream_assigner = renderstream_assigner_create(
      "0",
      "0"
    );
  }

  return renderstream_assigner;
}


#ifdef renderstream_assigner_MAIN

void test_renderstream_assigner(int include_optional) {
    renderstream_assigner_t* renderstream_assigner_1 = instantiate_renderstream_assigner(include_optional);

	cJSON* jsonrenderstream_assigner_1 = renderstream_assigner_convertToJSON(renderstream_assigner_1);
	printf("renderstream_assigner :\n%s\n", cJSON_Print(jsonrenderstream_assigner_1));
	renderstream_assigner_t* renderstream_assigner_2 = renderstream_assigner_parseFromJSON(jsonrenderstream_assigner_1);
	cJSON* jsonrenderstream_assigner_2 = renderstream_assigner_convertToJSON(renderstream_assigner_2);
	printf("repeating renderstream_assigner:\n%s\n", cJSON_Print(jsonrenderstream_assigner_2));
}

int main() {
  test_renderstream_assigner(1);
  test_renderstream_assigner(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_assigner_MAIN
#endif // renderstream_assigner_TEST

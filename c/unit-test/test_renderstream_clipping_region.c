#ifndef renderstream_clipping_region_TEST
#define renderstream_clipping_region_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_clipping_region_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_clipping_region.h"
renderstream_clipping_region_t* instantiate_renderstream_clipping_region(int include_optional);



renderstream_clipping_region_t* instantiate_renderstream_clipping_region(int include_optional) {
  renderstream_clipping_region_t* renderstream_clipping_region = NULL;
  if (include_optional) {
    renderstream_clipping_region = renderstream_clipping_region_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  } else {
    renderstream_clipping_region = renderstream_clipping_region_create(
      1.337,
      1.337,
      1.337,
      1.337
    );
  }

  return renderstream_clipping_region;
}


#ifdef renderstream_clipping_region_MAIN

void test_renderstream_clipping_region(int include_optional) {
    renderstream_clipping_region_t* renderstream_clipping_region_1 = instantiate_renderstream_clipping_region(include_optional);

	cJSON* jsonrenderstream_clipping_region_1 = renderstream_clipping_region_convertToJSON(renderstream_clipping_region_1);
	printf("renderstream_clipping_region :\n%s\n", cJSON_Print(jsonrenderstream_clipping_region_1));
	renderstream_clipping_region_t* renderstream_clipping_region_2 = renderstream_clipping_region_parseFromJSON(jsonrenderstream_clipping_region_1);
	cJSON* jsonrenderstream_clipping_region_2 = renderstream_clipping_region_convertToJSON(renderstream_clipping_region_2);
	printf("repeating renderstream_clipping_region:\n%s\n", cJSON_Print(jsonrenderstream_clipping_region_2));
}

int main() {
  test_renderstream_clipping_region(1);
  test_renderstream_clipping_region(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_clipping_region_MAIN
#endif // renderstream_clipping_region_TEST

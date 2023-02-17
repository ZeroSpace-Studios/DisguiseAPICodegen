#ifndef renderstream_asset_TEST
#define renderstream_asset_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_asset_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_asset.h"
renderstream_asset_t* instantiate_renderstream_asset(int include_optional);



renderstream_asset_t* instantiate_renderstream_asset(int include_optional) {
  renderstream_asset_t* renderstream_asset = NULL;
  if (include_optional) {
    renderstream_asset = renderstream_asset_create(
      "0",
      "0"
    );
  } else {
    renderstream_asset = renderstream_asset_create(
      "0",
      "0"
    );
  }

  return renderstream_asset;
}


#ifdef renderstream_asset_MAIN

void test_renderstream_asset(int include_optional) {
    renderstream_asset_t* renderstream_asset_1 = instantiate_renderstream_asset(include_optional);

	cJSON* jsonrenderstream_asset_1 = renderstream_asset_convertToJSON(renderstream_asset_1);
	printf("renderstream_asset :\n%s\n", cJSON_Print(jsonrenderstream_asset_1));
	renderstream_asset_t* renderstream_asset_2 = renderstream_asset_parseFromJSON(jsonrenderstream_asset_1);
	cJSON* jsonrenderstream_asset_2 = renderstream_asset_convertToJSON(renderstream_asset_2);
	printf("repeating renderstream_asset:\n%s\n", cJSON_Print(jsonrenderstream_asset_2));
}

int main() {
  test_renderstream_asset(1);
  test_renderstream_asset(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_asset_MAIN
#endif // renderstream_asset_TEST

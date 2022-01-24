#ifndef renderstream_asset_info_TEST
#define renderstream_asset_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_asset_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_asset_info.h"
renderstream_asset_info_t* instantiate_renderstream_asset_info(int include_optional);



renderstream_asset_info_t* instantiate_renderstream_asset_info(int include_optional) {
  renderstream_asset_info_t* renderstream_asset_info = NULL;
  if (include_optional) {
    renderstream_asset_info = renderstream_asset_info_create(
      "0",
      "0"
    );
  } else {
    renderstream_asset_info = renderstream_asset_info_create(
      "0",
      "0"
    );
  }

  return renderstream_asset_info;
}


#ifdef renderstream_asset_info_MAIN

void test_renderstream_asset_info(int include_optional) {
    renderstream_asset_info_t* renderstream_asset_info_1 = instantiate_renderstream_asset_info(include_optional);

	cJSON* jsonrenderstream_asset_info_1 = renderstream_asset_info_convertToJSON(renderstream_asset_info_1);
	printf("renderstream_asset_info :\n%s\n", cJSON_Print(jsonrenderstream_asset_info_1));
	renderstream_asset_info_t* renderstream_asset_info_2 = renderstream_asset_info_parseFromJSON(jsonrenderstream_asset_info_1);
	cJSON* jsonrenderstream_asset_info_2 = renderstream_asset_info_convertToJSON(renderstream_asset_info_2);
	printf("repeating renderstream_asset_info:\n%s\n", cJSON_Print(jsonrenderstream_asset_info_2));
}

int main() {
  test_renderstream_asset_info(1);
  test_renderstream_asset_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_asset_info_MAIN
#endif // renderstream_asset_info_TEST

#ifndef renderstream_channel_mapping_info_TEST
#define renderstream_channel_mapping_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_channel_mapping_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_channel_mapping_info.h"
renderstream_channel_mapping_info_t* instantiate_renderstream_channel_mapping_info(int include_optional);

#include "test_renderstream_mapping.c"
#include "test_renderstream_assigner.c"


renderstream_channel_mapping_info_t* instantiate_renderstream_channel_mapping_info(int include_optional) {
  renderstream_channel_mapping_info_t* renderstream_channel_mapping_info = NULL;
  if (include_optional) {
    renderstream_channel_mapping_info = renderstream_channel_mapping_info_create(
      "0",
       // false, not to have infinite recursion
      instantiate_renderstream_mapping(0),
       // false, not to have infinite recursion
      instantiate_renderstream_assigner(0)
    );
  } else {
    renderstream_channel_mapping_info = renderstream_channel_mapping_info_create(
      "0",
      NULL,
      NULL
    );
  }

  return renderstream_channel_mapping_info;
}


#ifdef renderstream_channel_mapping_info_MAIN

void test_renderstream_channel_mapping_info(int include_optional) {
    renderstream_channel_mapping_info_t* renderstream_channel_mapping_info_1 = instantiate_renderstream_channel_mapping_info(include_optional);

	cJSON* jsonrenderstream_channel_mapping_info_1 = renderstream_channel_mapping_info_convertToJSON(renderstream_channel_mapping_info_1);
	printf("renderstream_channel_mapping_info :\n%s\n", cJSON_Print(jsonrenderstream_channel_mapping_info_1));
	renderstream_channel_mapping_info_t* renderstream_channel_mapping_info_2 = renderstream_channel_mapping_info_parseFromJSON(jsonrenderstream_channel_mapping_info_1);
	cJSON* jsonrenderstream_channel_mapping_info_2 = renderstream_channel_mapping_info_convertToJSON(renderstream_channel_mapping_info_2);
	printf("repeating renderstream_channel_mapping_info:\n%s\n", cJSON_Print(jsonrenderstream_channel_mapping_info_2));
}

int main() {
  test_renderstream_channel_mapping_info(1);
  test_renderstream_channel_mapping_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_channel_mapping_info_MAIN
#endif // renderstream_channel_mapping_info_TEST

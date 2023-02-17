#ifndef renderstream_assigner_info_TEST
#define renderstream_assigner_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_assigner_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_assigner_info.h"
renderstream_assigner_info_t* instantiate_renderstream_assigner_info(int include_optional);

#include "test_renderstream_transport_info.c"
#include "test_renderstream_network_info.c"


renderstream_assigner_info_t* instantiate_renderstream_assigner_info(int include_optional) {
  renderstream_assigner_info_t* renderstream_assigner_info = NULL;
  if (include_optional) {
    renderstream_assigner_info = renderstream_assigner_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_renderstream_transport_info(0),
      1,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_renderstream_network_info(0)
    );
  } else {
    renderstream_assigner_info = renderstream_assigner_info_create(
      "0",
      "0",
      NULL,
      1,
      56,
      56,
      NULL
    );
  }

  return renderstream_assigner_info;
}


#ifdef renderstream_assigner_info_MAIN

void test_renderstream_assigner_info(int include_optional) {
    renderstream_assigner_info_t* renderstream_assigner_info_1 = instantiate_renderstream_assigner_info(include_optional);

	cJSON* jsonrenderstream_assigner_info_1 = renderstream_assigner_info_convertToJSON(renderstream_assigner_info_1);
	printf("renderstream_assigner_info :\n%s\n", cJSON_Print(jsonrenderstream_assigner_info_1));
	renderstream_assigner_info_t* renderstream_assigner_info_2 = renderstream_assigner_info_parseFromJSON(jsonrenderstream_assigner_info_1);
	cJSON* jsonrenderstream_assigner_info_2 = renderstream_assigner_info_convertToJSON(renderstream_assigner_info_2);
	printf("repeating renderstream_assigner_info:\n%s\n", cJSON_Print(jsonrenderstream_assigner_info_2));
}

int main() {
  test_renderstream_assigner_info(1);
  test_renderstream_assigner_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_assigner_info_MAIN
#endif // renderstream_assigner_info_TEST

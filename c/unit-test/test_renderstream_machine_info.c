#ifndef renderstream_machine_info_TEST
#define renderstream_machine_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define renderstream_machine_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/renderstream_machine_info.h"
renderstream_machine_info_t* instantiate_renderstream_machine_info(int include_optional);



renderstream_machine_info_t* instantiate_renderstream_machine_info(int include_optional) {
  renderstream_machine_info_t* renderstream_machine_info = NULL;
  if (include_optional) {
    renderstream_machine_info = renderstream_machine_info_create(
      "0",
      "0",
      "0",
      list_create()
    );
  } else {
    renderstream_machine_info = renderstream_machine_info_create(
      "0",
      "0",
      "0",
      list_create()
    );
  }

  return renderstream_machine_info;
}


#ifdef renderstream_machine_info_MAIN

void test_renderstream_machine_info(int include_optional) {
    renderstream_machine_info_t* renderstream_machine_info_1 = instantiate_renderstream_machine_info(include_optional);

	cJSON* jsonrenderstream_machine_info_1 = renderstream_machine_info_convertToJSON(renderstream_machine_info_1);
	printf("renderstream_machine_info :\n%s\n", cJSON_Print(jsonrenderstream_machine_info_1));
	renderstream_machine_info_t* renderstream_machine_info_2 = renderstream_machine_info_parseFromJSON(jsonrenderstream_machine_info_1);
	cJSON* jsonrenderstream_machine_info_2 = renderstream_machine_info_convertToJSON(renderstream_machine_info_2);
	printf("repeating renderstream_machine_info:\n%s\n", cJSON_Print(jsonrenderstream_machine_info_2));
}

int main() {
  test_renderstream_machine_info(1);
  test_renderstream_machine_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // renderstream_machine_info_MAIN
#endif // renderstream_machine_info_TEST

#ifndef render_machine_info_status_TEST
#define render_machine_info_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define render_machine_info_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/render_machine_info_status.h"
render_machine_info_status_t* instantiate_render_machine_info_status(int include_optional);



render_machine_info_status_t* instantiate_render_machine_info_status(int include_optional) {
  render_machine_info_status_t* render_machine_info_status = NULL;
  if (include_optional) {
    render_machine_info_status = render_machine_info_status_create(
    );
  } else {
    render_machine_info_status = render_machine_info_status_create(
    );
  }

  return render_machine_info_status;
}


#ifdef render_machine_info_status_MAIN

void test_render_machine_info_status(int include_optional) {
    render_machine_info_status_t* render_machine_info_status_1 = instantiate_render_machine_info_status(include_optional);

	cJSON* jsonrender_machine_info_status_1 = render_machine_info_status_convertToJSON(render_machine_info_status_1);
	printf("render_machine_info_status :\n%s\n", cJSON_Print(jsonrender_machine_info_status_1));
	render_machine_info_status_t* render_machine_info_status_2 = render_machine_info_status_parseFromJSON(jsonrender_machine_info_status_1);
	cJSON* jsonrender_machine_info_status_2 = render_machine_info_status_convertToJSON(render_machine_info_status_2);
	printf("repeating render_machine_info_status:\n%s\n", cJSON_Print(jsonrender_machine_info_status_2));
}

int main() {
  test_render_machine_info_status(1);
  test_render_machine_info_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // render_machine_info_status_MAIN
#endif // render_machine_info_status_TEST

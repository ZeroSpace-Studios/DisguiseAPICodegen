#ifndef transport_set_brightness_info_TEST
#define transport_set_brightness_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_set_brightness_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_set_brightness_info.h"
transport_set_brightness_info_t* instantiate_transport_set_brightness_info(int include_optional);

#include "test_d3api_locator.c"


transport_set_brightness_info_t* instantiate_transport_set_brightness_info(int include_optional) {
  transport_set_brightness_info_t* transport_set_brightness_info = NULL;
  if (include_optional) {
    transport_set_brightness_info = transport_set_brightness_info_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
      1.337
    );
  } else {
    transport_set_brightness_info = transport_set_brightness_info_create(
      NULL,
      1.337
    );
  }

  return transport_set_brightness_info;
}


#ifdef transport_set_brightness_info_MAIN

void test_transport_set_brightness_info(int include_optional) {
    transport_set_brightness_info_t* transport_set_brightness_info_1 = instantiate_transport_set_brightness_info(include_optional);

	cJSON* jsontransport_set_brightness_info_1 = transport_set_brightness_info_convertToJSON(transport_set_brightness_info_1);
	printf("transport_set_brightness_info :\n%s\n", cJSON_Print(jsontransport_set_brightness_info_1));
	transport_set_brightness_info_t* transport_set_brightness_info_2 = transport_set_brightness_info_parseFromJSON(jsontransport_set_brightness_info_1);
	cJSON* jsontransport_set_brightness_info_2 = transport_set_brightness_info_convertToJSON(transport_set_brightness_info_2);
	printf("repeating transport_set_brightness_info:\n%s\n", cJSON_Print(jsontransport_set_brightness_info_2));
}

int main() {
  test_transport_set_brightness_info(1);
  test_transport_set_brightness_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_set_brightness_info_MAIN
#endif // transport_set_brightness_info_TEST

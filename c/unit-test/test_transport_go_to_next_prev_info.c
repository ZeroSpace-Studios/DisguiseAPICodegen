#ifndef transport_go_to_next_prev_info_TEST
#define transport_go_to_next_prev_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_go_to_next_prev_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_go_to_next_prev_info.h"
transport_go_to_next_prev_info_t* instantiate_transport_go_to_next_prev_info(int include_optional);

#include "test_d3api_locator.c"


transport_go_to_next_prev_info_t* instantiate_transport_go_to_next_prev_info(int include_optional) {
  transport_go_to_next_prev_info_t* transport_go_to_next_prev_info = NULL;
  if (include_optional) {
    transport_go_to_next_prev_info = transport_go_to_next_prev_info_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
      d3_api_transport_go_to_next_prev_info__"NotSet"
    );
  } else {
    transport_go_to_next_prev_info = transport_go_to_next_prev_info_create(
      NULL,
      d3_api_transport_go_to_next_prev_info__"NotSet"
    );
  }

  return transport_go_to_next_prev_info;
}


#ifdef transport_go_to_next_prev_info_MAIN

void test_transport_go_to_next_prev_info(int include_optional) {
    transport_go_to_next_prev_info_t* transport_go_to_next_prev_info_1 = instantiate_transport_go_to_next_prev_info(include_optional);

	cJSON* jsontransport_go_to_next_prev_info_1 = transport_go_to_next_prev_info_convertToJSON(transport_go_to_next_prev_info_1);
	printf("transport_go_to_next_prev_info :\n%s\n", cJSON_Print(jsontransport_go_to_next_prev_info_1));
	transport_go_to_next_prev_info_t* transport_go_to_next_prev_info_2 = transport_go_to_next_prev_info_parseFromJSON(jsontransport_go_to_next_prev_info_1);
	cJSON* jsontransport_go_to_next_prev_info_2 = transport_go_to_next_prev_info_convertToJSON(transport_go_to_next_prev_info_2);
	printf("repeating transport_go_to_next_prev_info:\n%s\n", cJSON_Print(jsontransport_go_to_next_prev_info_2));
}

int main() {
  test_transport_go_to_next_prev_info(1);
  test_transport_go_to_next_prev_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_go_to_next_prev_info_MAIN
#endif // transport_go_to_next_prev_info_TEST

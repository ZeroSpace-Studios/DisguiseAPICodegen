#ifndef transport_go_to_prev_section_request_TEST
#define transport_go_to_prev_section_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_go_to_prev_section_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_go_to_prev_section_request.h"
transport_go_to_prev_section_request_t* instantiate_transport_go_to_prev_section_request(int include_optional);



transport_go_to_prev_section_request_t* instantiate_transport_go_to_prev_section_request(int include_optional) {
  transport_go_to_prev_section_request_t* transport_go_to_prev_section_request = NULL;
  if (include_optional) {
    transport_go_to_prev_section_request = transport_go_to_prev_section_request_create(
      list_create()
    );
  } else {
    transport_go_to_prev_section_request = transport_go_to_prev_section_request_create(
      list_create()
    );
  }

  return transport_go_to_prev_section_request;
}


#ifdef transport_go_to_prev_section_request_MAIN

void test_transport_go_to_prev_section_request(int include_optional) {
    transport_go_to_prev_section_request_t* transport_go_to_prev_section_request_1 = instantiate_transport_go_to_prev_section_request(include_optional);

	cJSON* jsontransport_go_to_prev_section_request_1 = transport_go_to_prev_section_request_convertToJSON(transport_go_to_prev_section_request_1);
	printf("transport_go_to_prev_section_request :\n%s\n", cJSON_Print(jsontransport_go_to_prev_section_request_1));
	transport_go_to_prev_section_request_t* transport_go_to_prev_section_request_2 = transport_go_to_prev_section_request_parseFromJSON(jsontransport_go_to_prev_section_request_1);
	cJSON* jsontransport_go_to_prev_section_request_2 = transport_go_to_prev_section_request_convertToJSON(transport_go_to_prev_section_request_2);
	printf("repeating transport_go_to_prev_section_request:\n%s\n", cJSON_Print(jsontransport_go_to_prev_section_request_2));
}

int main() {
  test_transport_go_to_prev_section_request(1);
  test_transport_go_to_prev_section_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_go_to_prev_section_request_MAIN
#endif // transport_go_to_prev_section_request_TEST

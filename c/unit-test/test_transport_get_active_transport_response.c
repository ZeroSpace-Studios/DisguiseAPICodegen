#ifndef transport_get_active_transport_response_TEST
#define transport_get_active_transport_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_get_active_transport_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_get_active_transport_response.h"
transport_get_active_transport_response_t* instantiate_transport_get_active_transport_response(int include_optional);

#include "test_rpc_status.c"


transport_get_active_transport_response_t* instantiate_transport_get_active_transport_response(int include_optional) {
  transport_get_active_transport_response_t* transport_get_active_transport_response = NULL;
  if (include_optional) {
    transport_get_active_transport_response = transport_get_active_transport_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    transport_get_active_transport_response = transport_get_active_transport_response_create(
      NULL,
      list_create()
    );
  }

  return transport_get_active_transport_response;
}


#ifdef transport_get_active_transport_response_MAIN

void test_transport_get_active_transport_response(int include_optional) {
    transport_get_active_transport_response_t* transport_get_active_transport_response_1 = instantiate_transport_get_active_transport_response(include_optional);

	cJSON* jsontransport_get_active_transport_response_1 = transport_get_active_transport_response_convertToJSON(transport_get_active_transport_response_1);
	printf("transport_get_active_transport_response :\n%s\n", cJSON_Print(jsontransport_get_active_transport_response_1));
	transport_get_active_transport_response_t* transport_get_active_transport_response_2 = transport_get_active_transport_response_parseFromJSON(jsontransport_get_active_transport_response_1);
	cJSON* jsontransport_get_active_transport_response_2 = transport_get_active_transport_response_convertToJSON(transport_get_active_transport_response_2);
	printf("repeating transport_get_active_transport_response:\n%s\n", cJSON_Print(jsontransport_get_active_transport_response_2));
}

int main() {
  test_transport_get_active_transport_response(1);
  test_transport_get_active_transport_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_get_active_transport_response_MAIN
#endif // transport_get_active_transport_response_TEST

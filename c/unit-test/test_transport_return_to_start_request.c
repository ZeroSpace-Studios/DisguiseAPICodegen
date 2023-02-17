#ifndef transport_return_to_start_request_TEST
#define transport_return_to_start_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_return_to_start_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_return_to_start_request.h"
transport_return_to_start_request_t* instantiate_transport_return_to_start_request(int include_optional);



transport_return_to_start_request_t* instantiate_transport_return_to_start_request(int include_optional) {
  transport_return_to_start_request_t* transport_return_to_start_request = NULL;
  if (include_optional) {
    transport_return_to_start_request = transport_return_to_start_request_create(
      list_create()
    );
  } else {
    transport_return_to_start_request = transport_return_to_start_request_create(
      list_create()
    );
  }

  return transport_return_to_start_request;
}


#ifdef transport_return_to_start_request_MAIN

void test_transport_return_to_start_request(int include_optional) {
    transport_return_to_start_request_t* transport_return_to_start_request_1 = instantiate_transport_return_to_start_request(include_optional);

	cJSON* jsontransport_return_to_start_request_1 = transport_return_to_start_request_convertToJSON(transport_return_to_start_request_1);
	printf("transport_return_to_start_request :\n%s\n", cJSON_Print(jsontransport_return_to_start_request_1));
	transport_return_to_start_request_t* transport_return_to_start_request_2 = transport_return_to_start_request_parseFromJSON(jsontransport_return_to_start_request_1);
	cJSON* jsontransport_return_to_start_request_2 = transport_return_to_start_request_convertToJSON(transport_return_to_start_request_2);
	printf("repeating transport_return_to_start_request:\n%s\n", cJSON_Print(jsontransport_return_to_start_request_2));
}

int main() {
  test_transport_return_to_start_request(1);
  test_transport_return_to_start_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_return_to_start_request_MAIN
#endif // transport_return_to_start_request_TEST

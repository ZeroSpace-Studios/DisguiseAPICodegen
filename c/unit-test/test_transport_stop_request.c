#ifndef transport_stop_request_TEST
#define transport_stop_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_stop_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_stop_request.h"
transport_stop_request_t* instantiate_transport_stop_request(int include_optional);



transport_stop_request_t* instantiate_transport_stop_request(int include_optional) {
  transport_stop_request_t* transport_stop_request = NULL;
  if (include_optional) {
    transport_stop_request = transport_stop_request_create(
      list_create()
    );
  } else {
    transport_stop_request = transport_stop_request_create(
      list_create()
    );
  }

  return transport_stop_request;
}


#ifdef transport_stop_request_MAIN

void test_transport_stop_request(int include_optional) {
    transport_stop_request_t* transport_stop_request_1 = instantiate_transport_stop_request(include_optional);

	cJSON* jsontransport_stop_request_1 = transport_stop_request_convertToJSON(transport_stop_request_1);
	printf("transport_stop_request :\n%s\n", cJSON_Print(jsontransport_stop_request_1));
	transport_stop_request_t* transport_stop_request_2 = transport_stop_request_parseFromJSON(jsontransport_stop_request_1);
	cJSON* jsontransport_stop_request_2 = transport_stop_request_convertToJSON(transport_stop_request_2);
	printf("repeating transport_stop_request:\n%s\n", cJSON_Print(jsontransport_stop_request_2));
}

int main() {
  test_transport_stop_request(1);
  test_transport_stop_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_stop_request_MAIN
#endif // transport_stop_request_TEST

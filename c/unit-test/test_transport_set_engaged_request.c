#ifndef transport_set_engaged_request_TEST
#define transport_set_engaged_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_set_engaged_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_set_engaged_request.h"
transport_set_engaged_request_t* instantiate_transport_set_engaged_request(int include_optional);



transport_set_engaged_request_t* instantiate_transport_set_engaged_request(int include_optional) {
  transport_set_engaged_request_t* transport_set_engaged_request = NULL;
  if (include_optional) {
    transport_set_engaged_request = transport_set_engaged_request_create(
      list_create()
    );
  } else {
    transport_set_engaged_request = transport_set_engaged_request_create(
      list_create()
    );
  }

  return transport_set_engaged_request;
}


#ifdef transport_set_engaged_request_MAIN

void test_transport_set_engaged_request(int include_optional) {
    transport_set_engaged_request_t* transport_set_engaged_request_1 = instantiate_transport_set_engaged_request(include_optional);

	cJSON* jsontransport_set_engaged_request_1 = transport_set_engaged_request_convertToJSON(transport_set_engaged_request_1);
	printf("transport_set_engaged_request :\n%s\n", cJSON_Print(jsontransport_set_engaged_request_1));
	transport_set_engaged_request_t* transport_set_engaged_request_2 = transport_set_engaged_request_parseFromJSON(jsontransport_set_engaged_request_1);
	cJSON* jsontransport_set_engaged_request_2 = transport_set_engaged_request_convertToJSON(transport_set_engaged_request_2);
	printf("repeating transport_set_engaged_request:\n%s\n", cJSON_Print(jsontransport_set_engaged_request_2));
}

int main() {
  test_transport_set_engaged_request(1);
  test_transport_set_engaged_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_set_engaged_request_MAIN
#endif // transport_set_engaged_request_TEST

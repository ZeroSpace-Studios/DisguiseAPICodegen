#ifndef transport_play_request_TEST
#define transport_play_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_play_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_play_request.h"
transport_play_request_t* instantiate_transport_play_request(int include_optional);



transport_play_request_t* instantiate_transport_play_request(int include_optional) {
  transport_play_request_t* transport_play_request = NULL;
  if (include_optional) {
    transport_play_request = transport_play_request_create(
      list_create()
    );
  } else {
    transport_play_request = transport_play_request_create(
      list_create()
    );
  }

  return transport_play_request;
}


#ifdef transport_play_request_MAIN

void test_transport_play_request(int include_optional) {
    transport_play_request_t* transport_play_request_1 = instantiate_transport_play_request(include_optional);

	cJSON* jsontransport_play_request_1 = transport_play_request_convertToJSON(transport_play_request_1);
	printf("transport_play_request :\n%s\n", cJSON_Print(jsontransport_play_request_1));
	transport_play_request_t* transport_play_request_2 = transport_play_request_parseFromJSON(jsontransport_play_request_1);
	cJSON* jsontransport_play_request_2 = transport_play_request_convertToJSON(transport_play_request_2);
	printf("repeating transport_play_request:\n%s\n", cJSON_Print(jsontransport_play_request_2));
}

int main() {
  test_transport_play_request(1);
  test_transport_play_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_play_request_MAIN
#endif // transport_play_request_TEST

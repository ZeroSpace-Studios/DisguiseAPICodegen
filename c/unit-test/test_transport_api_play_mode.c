#ifndef transport_api_play_mode_TEST
#define transport_api_play_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_api_play_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_api_play_mode.h"
transport_api_play_mode_t* instantiate_transport_api_play_mode(int include_optional);



transport_api_play_mode_t* instantiate_transport_api_play_mode(int include_optional) {
  transport_api_play_mode_t* transport_api_play_mode = NULL;
  if (include_optional) {
    transport_api_play_mode = transport_api_play_mode_create(
    );
  } else {
    transport_api_play_mode = transport_api_play_mode_create(
    );
  }

  return transport_api_play_mode;
}


#ifdef transport_api_play_mode_MAIN

void test_transport_api_play_mode(int include_optional) {
    transport_api_play_mode_t* transport_api_play_mode_1 = instantiate_transport_api_play_mode(include_optional);

	cJSON* jsontransport_api_play_mode_1 = transport_api_play_mode_convertToJSON(transport_api_play_mode_1);
	printf("transport_api_play_mode :\n%s\n", cJSON_Print(jsontransport_api_play_mode_1));
	transport_api_play_mode_t* transport_api_play_mode_2 = transport_api_play_mode_parseFromJSON(jsontransport_api_play_mode_1);
	cJSON* jsontransport_api_play_mode_2 = transport_api_play_mode_convertToJSON(transport_api_play_mode_2);
	printf("repeating transport_api_play_mode:\n%s\n", cJSON_Print(jsontransport_api_play_mode_2));
}

int main() {
  test_transport_api_play_mode(1);
  test_transport_api_play_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_api_play_mode_MAIN
#endif // transport_api_play_mode_TEST

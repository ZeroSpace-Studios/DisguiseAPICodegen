#ifndef transport_track_info_TEST
#define transport_track_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_track_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_track_info.h"
transport_track_info_t* instantiate_transport_track_info(int include_optional);



transport_track_info_t* instantiate_transport_track_info(int include_optional) {
  transport_track_info_t* transport_track_info = NULL;
  if (include_optional) {
    transport_track_info = transport_track_info_create(
      "0",
      "0",
      1.337,
      d3_api_transport_track_info__"Unknown"
    );
  } else {
    transport_track_info = transport_track_info_create(
      "0",
      "0",
      1.337,
      d3_api_transport_track_info__"Unknown"
    );
  }

  return transport_track_info;
}


#ifdef transport_track_info_MAIN

void test_transport_track_info(int include_optional) {
    transport_track_info_t* transport_track_info_1 = instantiate_transport_track_info(include_optional);

	cJSON* jsontransport_track_info_1 = transport_track_info_convertToJSON(transport_track_info_1);
	printf("transport_track_info :\n%s\n", cJSON_Print(jsontransport_track_info_1));
	transport_track_info_t* transport_track_info_2 = transport_track_info_parseFromJSON(jsontransport_track_info_1);
	cJSON* jsontransport_track_info_2 = transport_track_info_convertToJSON(transport_track_info_2);
	printf("repeating transport_track_info:\n%s\n", cJSON_Print(jsontransport_track_info_2));
}

int main() {
  test_transport_track_info(1);
  test_transport_track_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_track_info_MAIN
#endif // transport_track_info_TEST

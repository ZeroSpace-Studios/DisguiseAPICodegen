#ifndef transport_transport_info_TEST
#define transport_transport_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_transport_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_transport_info.h"
transport_transport_info_t* instantiate_transport_transport_info(int include_optional);



transport_transport_info_t* instantiate_transport_transport_info(int include_optional) {
  transport_transport_info_t* transport_transport_info = NULL;
  if (include_optional) {
    transport_transport_info = transport_transport_info_create(
      "0",
      "0",
      1,
      1.337,
      1.337,
      d3_api_transport_transport_info__"NotSet"
    );
  } else {
    transport_transport_info = transport_transport_info_create(
      "0",
      "0",
      1,
      1.337,
      1.337,
      d3_api_transport_transport_info__"NotSet"
    );
  }

  return transport_transport_info;
}


#ifdef transport_transport_info_MAIN

void test_transport_transport_info(int include_optional) {
    transport_transport_info_t* transport_transport_info_1 = instantiate_transport_transport_info(include_optional);

	cJSON* jsontransport_transport_info_1 = transport_transport_info_convertToJSON(transport_transport_info_1);
	printf("transport_transport_info :\n%s\n", cJSON_Print(jsontransport_transport_info_1));
	transport_transport_info_t* transport_transport_info_2 = transport_transport_info_parseFromJSON(jsontransport_transport_info_1);
	cJSON* jsontransport_transport_info_2 = transport_transport_info_convertToJSON(transport_transport_info_2);
	printf("repeating transport_transport_info:\n%s\n", cJSON_Print(jsontransport_transport_info_2));
}

int main() {
  test_transport_transport_info(1);
  test_transport_transport_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_transport_info_MAIN
#endif // transport_transport_info_TEST

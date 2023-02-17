#ifndef transport_tag_info_TEST
#define transport_tag_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_tag_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_tag_info.h"
transport_tag_info_t* instantiate_transport_tag_info(int include_optional);



transport_tag_info_t* instantiate_transport_tag_info(int include_optional) {
  transport_tag_info_t* transport_tag_info = NULL;
  if (include_optional) {
    transport_tag_info = transport_tag_info_create(
      1.337,
      d3_api_transport_tag_info__"TagType_Unknown",
      "0"
    );
  } else {
    transport_tag_info = transport_tag_info_create(
      1.337,
      d3_api_transport_tag_info__"TagType_Unknown",
      "0"
    );
  }

  return transport_tag_info;
}


#ifdef transport_tag_info_MAIN

void test_transport_tag_info(int include_optional) {
    transport_tag_info_t* transport_tag_info_1 = instantiate_transport_tag_info(include_optional);

	cJSON* jsontransport_tag_info_1 = transport_tag_info_convertToJSON(transport_tag_info_1);
	printf("transport_tag_info :\n%s\n", cJSON_Print(jsontransport_tag_info_1));
	transport_tag_info_t* transport_tag_info_2 = transport_tag_info_parseFromJSON(jsontransport_tag_info_1);
	cJSON* jsontransport_tag_info_2 = transport_tag_info_convertToJSON(transport_tag_info_2);
	printf("repeating transport_tag_info:\n%s\n", cJSON_Print(jsontransport_tag_info_2));
}

int main() {
  test_transport_tag_info(1);
  test_transport_tag_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_tag_info_MAIN
#endif // transport_tag_info_TEST

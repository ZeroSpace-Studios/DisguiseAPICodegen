#ifndef transport_set_list_info_TEST
#define transport_set_list_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_set_list_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_set_list_info.h"
transport_set_list_info_t* instantiate_transport_set_list_info(int include_optional);



transport_set_list_info_t* instantiate_transport_set_list_info(int include_optional) {
  transport_set_list_info_t* transport_set_list_info = NULL;
  if (include_optional) {
    transport_set_list_info = transport_set_list_info_create(
      "0",
      "0",
      list_create()
    );
  } else {
    transport_set_list_info = transport_set_list_info_create(
      "0",
      "0",
      list_create()
    );
  }

  return transport_set_list_info;
}


#ifdef transport_set_list_info_MAIN

void test_transport_set_list_info(int include_optional) {
    transport_set_list_info_t* transport_set_list_info_1 = instantiate_transport_set_list_info(include_optional);

	cJSON* jsontransport_set_list_info_1 = transport_set_list_info_convertToJSON(transport_set_list_info_1);
	printf("transport_set_list_info :\n%s\n", cJSON_Print(jsontransport_set_list_info_1));
	transport_set_list_info_t* transport_set_list_info_2 = transport_set_list_info_parseFromJSON(jsontransport_set_list_info_1);
	cJSON* jsontransport_set_list_info_2 = transport_set_list_info_convertToJSON(transport_set_list_info_2);
	printf("repeating transport_set_list_info:\n%s\n", cJSON_Print(jsontransport_set_list_info_2));
}

int main() {
  test_transport_set_list_info(1);
  test_transport_set_list_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_set_list_info_MAIN
#endif // transport_set_list_info_TEST

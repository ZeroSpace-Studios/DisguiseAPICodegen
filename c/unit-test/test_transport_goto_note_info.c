#ifndef transport_goto_note_info_TEST
#define transport_goto_note_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_goto_note_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_goto_note_info.h"
transport_goto_note_info_t* instantiate_transport_goto_note_info(int include_optional);

#include "test_d3api_locator.c"


transport_goto_note_info_t* instantiate_transport_goto_note_info(int include_optional) {
  transport_goto_note_info_t* transport_goto_note_info = NULL;
  if (include_optional) {
    transport_goto_note_info = transport_goto_note_info_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
      "0",
      d3_api_transport_goto_note_info__"NotSet"
    );
  } else {
    transport_goto_note_info = transport_goto_note_info_create(
      NULL,
      "0",
      d3_api_transport_goto_note_info__"NotSet"
    );
  }

  return transport_goto_note_info;
}


#ifdef transport_goto_note_info_MAIN

void test_transport_goto_note_info(int include_optional) {
    transport_goto_note_info_t* transport_goto_note_info_1 = instantiate_transport_goto_note_info(include_optional);

	cJSON* jsontransport_goto_note_info_1 = transport_goto_note_info_convertToJSON(transport_goto_note_info_1);
	printf("transport_goto_note_info :\n%s\n", cJSON_Print(jsontransport_goto_note_info_1));
	transport_goto_note_info_t* transport_goto_note_info_2 = transport_goto_note_info_parseFromJSON(jsontransport_goto_note_info_1);
	cJSON* jsontransport_goto_note_info_2 = transport_goto_note_info_convertToJSON(transport_goto_note_info_2);
	printf("repeating transport_goto_note_info:\n%s\n", cJSON_Print(jsontransport_goto_note_info_2));
}

int main() {
  test_transport_goto_note_info(1);
  test_transport_goto_note_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_goto_note_info_MAIN
#endif // transport_goto_note_info_TEST

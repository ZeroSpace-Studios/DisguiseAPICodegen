#ifndef transport_note_info_TEST
#define transport_note_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_note_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_note_info.h"
transport_note_info_t* instantiate_transport_note_info(int include_optional);



transport_note_info_t* instantiate_transport_note_info(int include_optional) {
  transport_note_info_t* transport_note_info = NULL;
  if (include_optional) {
    transport_note_info = transport_note_info_create(
      1.337,
      "0"
    );
  } else {
    transport_note_info = transport_note_info_create(
      1.337,
      "0"
    );
  }

  return transport_note_info;
}


#ifdef transport_note_info_MAIN

void test_transport_note_info(int include_optional) {
    transport_note_info_t* transport_note_info_1 = instantiate_transport_note_info(include_optional);

	cJSON* jsontransport_note_info_1 = transport_note_info_convertToJSON(transport_note_info_1);
	printf("transport_note_info :\n%s\n", cJSON_Print(jsontransport_note_info_1));
	transport_note_info_t* transport_note_info_2 = transport_note_info_parseFromJSON(jsontransport_note_info_1);
	cJSON* jsontransport_note_info_2 = transport_note_info_convertToJSON(transport_note_info_2);
	printf("repeating transport_note_info:\n%s\n", cJSON_Print(jsontransport_note_info_2));
}

int main() {
  test_transport_note_info(1);
  test_transport_note_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_note_info_MAIN
#endif // transport_note_info_TEST

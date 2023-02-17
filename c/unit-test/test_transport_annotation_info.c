#ifndef transport_annotation_info_TEST
#define transport_annotation_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_annotation_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_annotation_info.h"
transport_annotation_info_t* instantiate_transport_annotation_info(int include_optional);



transport_annotation_info_t* instantiate_transport_annotation_info(int include_optional) {
  transport_annotation_info_t* transport_annotation_info = NULL;
  if (include_optional) {
    transport_annotation_info = transport_annotation_info_create(
      list_create(),
      list_create(),
      list_create()
    );
  } else {
    transport_annotation_info = transport_annotation_info_create(
      list_create(),
      list_create(),
      list_create()
    );
  }

  return transport_annotation_info;
}


#ifdef transport_annotation_info_MAIN

void test_transport_annotation_info(int include_optional) {
    transport_annotation_info_t* transport_annotation_info_1 = instantiate_transport_annotation_info(include_optional);

	cJSON* jsontransport_annotation_info_1 = transport_annotation_info_convertToJSON(transport_annotation_info_1);
	printf("transport_annotation_info :\n%s\n", cJSON_Print(jsontransport_annotation_info_1));
	transport_annotation_info_t* transport_annotation_info_2 = transport_annotation_info_parseFromJSON(jsontransport_annotation_info_1);
	cJSON* jsontransport_annotation_info_2 = transport_annotation_info_convertToJSON(transport_annotation_info_2);
	printf("repeating transport_annotation_info:\n%s\n", cJSON_Print(jsontransport_annotation_info_2));
}

int main() {
  test_transport_annotation_info(1);
  test_transport_annotation_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_annotation_info_MAIN
#endif // transport_annotation_info_TEST

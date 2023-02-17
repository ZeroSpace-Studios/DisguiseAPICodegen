#ifndef transport_list_annotations_result_TEST
#define transport_list_annotations_result_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_list_annotations_result_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_list_annotations_result.h"
transport_list_annotations_result_t* instantiate_transport_list_annotations_result(int include_optional);

#include "test_transport_annotation_info.c"


transport_list_annotations_result_t* instantiate_transport_list_annotations_result(int include_optional) {
  transport_list_annotations_result_t* transport_list_annotations_result = NULL;
  if (include_optional) {
    transport_list_annotations_result = transport_list_annotations_result_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_transport_annotation_info(0)
    );
  } else {
    transport_list_annotations_result = transport_list_annotations_result_create(
      "0",
      "0",
      NULL
    );
  }

  return transport_list_annotations_result;
}


#ifdef transport_list_annotations_result_MAIN

void test_transport_list_annotations_result(int include_optional) {
    transport_list_annotations_result_t* transport_list_annotations_result_1 = instantiate_transport_list_annotations_result(include_optional);

	cJSON* jsontransport_list_annotations_result_1 = transport_list_annotations_result_convertToJSON(transport_list_annotations_result_1);
	printf("transport_list_annotations_result :\n%s\n", cJSON_Print(jsontransport_list_annotations_result_1));
	transport_list_annotations_result_t* transport_list_annotations_result_2 = transport_list_annotations_result_parseFromJSON(jsontransport_list_annotations_result_1);
	cJSON* jsontransport_list_annotations_result_2 = transport_list_annotations_result_convertToJSON(transport_list_annotations_result_2);
	printf("repeating transport_list_annotations_result:\n%s\n", cJSON_Print(jsontransport_list_annotations_result_2));
}

int main() {
  test_transport_list_annotations_result(1);
  test_transport_list_annotations_result(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_list_annotations_result_MAIN
#endif // transport_list_annotations_result_TEST

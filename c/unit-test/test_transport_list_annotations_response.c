#ifndef transport_list_annotations_response_TEST
#define transport_list_annotations_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_list_annotations_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_list_annotations_response.h"
transport_list_annotations_response_t* instantiate_transport_list_annotations_response(int include_optional);

#include "test_rpc_status.c"
#include "test_transport_list_annotations_result.c"


transport_list_annotations_response_t* instantiate_transport_list_annotations_response(int include_optional) {
  transport_list_annotations_response_t* transport_list_annotations_response = NULL;
  if (include_optional) {
    transport_list_annotations_response = transport_list_annotations_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
       // false, not to have infinite recursion
      instantiate_transport_list_annotations_result(0)
    );
  } else {
    transport_list_annotations_response = transport_list_annotations_response_create(
      NULL,
      NULL
    );
  }

  return transport_list_annotations_response;
}


#ifdef transport_list_annotations_response_MAIN

void test_transport_list_annotations_response(int include_optional) {
    transport_list_annotations_response_t* transport_list_annotations_response_1 = instantiate_transport_list_annotations_response(include_optional);

	cJSON* jsontransport_list_annotations_response_1 = transport_list_annotations_response_convertToJSON(transport_list_annotations_response_1);
	printf("transport_list_annotations_response :\n%s\n", cJSON_Print(jsontransport_list_annotations_response_1));
	transport_list_annotations_response_t* transport_list_annotations_response_2 = transport_list_annotations_response_parseFromJSON(jsontransport_list_annotations_response_1);
	cJSON* jsontransport_list_annotations_response_2 = transport_list_annotations_response_convertToJSON(transport_list_annotations_response_2);
	printf("repeating transport_list_annotations_response:\n%s\n", cJSON_Print(jsontransport_list_annotations_response_2));
}

int main() {
  test_transport_list_annotations_response(1);
  test_transport_list_annotations_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_list_annotations_response_MAIN
#endif // transport_list_annotations_response_TEST

#ifndef transport_tag_type_TEST
#define transport_tag_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define transport_tag_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/transport_tag_type.h"
transport_tag_type_t* instantiate_transport_tag_type(int include_optional);



transport_tag_type_t* instantiate_transport_tag_type(int include_optional) {
  transport_tag_type_t* transport_tag_type = NULL;
  if (include_optional) {
    transport_tag_type = transport_tag_type_create(
    );
  } else {
    transport_tag_type = transport_tag_type_create(
    );
  }

  return transport_tag_type;
}


#ifdef transport_tag_type_MAIN

void test_transport_tag_type(int include_optional) {
    transport_tag_type_t* transport_tag_type_1 = instantiate_transport_tag_type(include_optional);

	cJSON* jsontransport_tag_type_1 = transport_tag_type_convertToJSON(transport_tag_type_1);
	printf("transport_tag_type :\n%s\n", cJSON_Print(jsontransport_tag_type_1));
	transport_tag_type_t* transport_tag_type_2 = transport_tag_type_parseFromJSON(jsontransport_tag_type_1);
	cJSON* jsontransport_tag_type_2 = transport_tag_type_convertToJSON(transport_tag_type_2);
	printf("repeating transport_tag_type:\n%s\n", cJSON_Print(jsontransport_tag_type_2));
}

int main() {
  test_transport_tag_type(1);
  test_transport_tag_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // transport_tag_type_MAIN
#endif // transport_tag_type_TEST

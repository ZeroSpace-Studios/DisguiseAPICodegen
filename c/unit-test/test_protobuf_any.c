#ifndef protobuf_any_TEST
#define protobuf_any_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define protobuf_any_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/protobuf_any.h"
protobuf_any_t* instantiate_protobuf_any(int include_optional);



protobuf_any_t* instantiate_protobuf_any(int include_optional) {
  protobuf_any_t* protobuf_any = NULL;
  if (include_optional) {
    protobuf_any = protobuf_any_create(
      "0",
      "YQ=="
    );
  } else {
    protobuf_any = protobuf_any_create(
      "0",
      "YQ=="
    );
  }

  return protobuf_any;
}


#ifdef protobuf_any_MAIN

void test_protobuf_any(int include_optional) {
    protobuf_any_t* protobuf_any_1 = instantiate_protobuf_any(include_optional);

	cJSON* jsonprotobuf_any_1 = protobuf_any_convertToJSON(protobuf_any_1);
	printf("protobuf_any :\n%s\n", cJSON_Print(jsonprotobuf_any_1));
	protobuf_any_t* protobuf_any_2 = protobuf_any_parseFromJSON(jsonprotobuf_any_1);
	cJSON* jsonprotobuf_any_2 = protobuf_any_convertToJSON(protobuf_any_2);
	printf("repeating protobuf_any:\n%s\n", cJSON_Print(jsonprotobuf_any_2));
}

int main() {
  test_protobuf_any(1);
  test_protobuf_any(0);

  printf("Hello world \n");
  return 0;
}

#endif // protobuf_any_MAIN
#endif // protobuf_any_TEST

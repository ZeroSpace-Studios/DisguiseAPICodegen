#ifndef rpc_status_TEST
#define rpc_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define rpc_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/rpc_status.h"
rpc_status_t* instantiate_rpc_status(int include_optional);



rpc_status_t* instantiate_rpc_status(int include_optional) {
  rpc_status_t* rpc_status = NULL;
  if (include_optional) {
    rpc_status = rpc_status_create(
      56,
      "0",
      list_create()
    );
  } else {
    rpc_status = rpc_status_create(
      56,
      "0",
      list_create()
    );
  }

  return rpc_status;
}


#ifdef rpc_status_MAIN

void test_rpc_status(int include_optional) {
    rpc_status_t* rpc_status_1 = instantiate_rpc_status(include_optional);

	cJSON* jsonrpc_status_1 = rpc_status_convertToJSON(rpc_status_1);
	printf("rpc_status :\n%s\n", cJSON_Print(jsonrpc_status_1));
	rpc_status_t* rpc_status_2 = rpc_status_parseFromJSON(jsonrpc_status_1);
	cJSON* jsonrpc_status_2 = rpc_status_convertToJSON(rpc_status_2);
	printf("repeating rpc_status:\n%s\n", cJSON_Print(jsonrpc_status_2));
}

int main() {
  test_rpc_status(1);
  test_rpc_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // rpc_status_MAIN
#endif // rpc_status_TEST

#ifndef colour_list_cdls_response_TEST
#define colour_list_cdls_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define colour_list_cdls_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/colour_list_cdls_response.h"
colour_list_cdls_response_t* instantiate_colour_list_cdls_response(int include_optional);

#include "test_rpc_status.c"


colour_list_cdls_response_t* instantiate_colour_list_cdls_response(int include_optional) {
  colour_list_cdls_response_t* colour_list_cdls_response = NULL;
  if (include_optional) {
    colour_list_cdls_response = colour_list_cdls_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    colour_list_cdls_response = colour_list_cdls_response_create(
      NULL,
      list_create()
    );
  }

  return colour_list_cdls_response;
}


#ifdef colour_list_cdls_response_MAIN

void test_colour_list_cdls_response(int include_optional) {
    colour_list_cdls_response_t* colour_list_cdls_response_1 = instantiate_colour_list_cdls_response(include_optional);

	cJSON* jsoncolour_list_cdls_response_1 = colour_list_cdls_response_convertToJSON(colour_list_cdls_response_1);
	printf("colour_list_cdls_response :\n%s\n", cJSON_Print(jsoncolour_list_cdls_response_1));
	colour_list_cdls_response_t* colour_list_cdls_response_2 = colour_list_cdls_response_parseFromJSON(jsoncolour_list_cdls_response_1);
	cJSON* jsoncolour_list_cdls_response_2 = colour_list_cdls_response_convertToJSON(colour_list_cdls_response_2);
	printf("repeating colour_list_cdls_response:\n%s\n", cJSON_Print(jsoncolour_list_cdls_response_2));
}

int main() {
  test_colour_list_cdls_response(1);
  test_colour_list_cdls_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // colour_list_cdls_response_MAIN
#endif // colour_list_cdls_response_TEST

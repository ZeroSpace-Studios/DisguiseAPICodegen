#ifndef colour_set_cdl_request_TEST
#define colour_set_cdl_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define colour_set_cdl_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/colour_set_cdl_request.h"
colour_set_cdl_request_t* instantiate_colour_set_cdl_request(int include_optional);

#include "test_colour_cdl_info.c"


colour_set_cdl_request_t* instantiate_colour_set_cdl_request(int include_optional) {
  colour_set_cdl_request_t* colour_set_cdl_request = NULL;
  if (include_optional) {
    colour_set_cdl_request = colour_set_cdl_request_create(
       // false, not to have infinite recursion
      instantiate_colour_cdl_info(0)
    );
  } else {
    colour_set_cdl_request = colour_set_cdl_request_create(
      NULL
    );
  }

  return colour_set_cdl_request;
}


#ifdef colour_set_cdl_request_MAIN

void test_colour_set_cdl_request(int include_optional) {
    colour_set_cdl_request_t* colour_set_cdl_request_1 = instantiate_colour_set_cdl_request(include_optional);

	cJSON* jsoncolour_set_cdl_request_1 = colour_set_cdl_request_convertToJSON(colour_set_cdl_request_1);
	printf("colour_set_cdl_request :\n%s\n", cJSON_Print(jsoncolour_set_cdl_request_1));
	colour_set_cdl_request_t* colour_set_cdl_request_2 = colour_set_cdl_request_parseFromJSON(jsoncolour_set_cdl_request_1);
	cJSON* jsoncolour_set_cdl_request_2 = colour_set_cdl_request_convertToJSON(colour_set_cdl_request_2);
	printf("repeating colour_set_cdl_request:\n%s\n", cJSON_Print(jsoncolour_set_cdl_request_2));
}

int main() {
  test_colour_set_cdl_request(1);
  test_colour_set_cdl_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // colour_set_cdl_request_MAIN
#endif // colour_set_cdl_request_TEST

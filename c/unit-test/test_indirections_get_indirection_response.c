#ifndef indirections_get_indirection_response_TEST
#define indirections_get_indirection_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_get_indirection_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_get_indirection_response.h"
indirections_get_indirection_response_t* instantiate_indirections_get_indirection_response(int include_optional);

#include "test_indirections_indirection.c"


indirections_get_indirection_response_t* instantiate_indirections_get_indirection_response(int include_optional) {
  indirections_get_indirection_response_t* indirections_get_indirection_response = NULL;
  if (include_optional) {
    indirections_get_indirection_response = indirections_get_indirection_response_create(
       // false, not to have infinite recursion
      instantiate_indirections_indirection(0)
    );
  } else {
    indirections_get_indirection_response = indirections_get_indirection_response_create(
      NULL
    );
  }

  return indirections_get_indirection_response;
}


#ifdef indirections_get_indirection_response_MAIN

void test_indirections_get_indirection_response(int include_optional) {
    indirections_get_indirection_response_t* indirections_get_indirection_response_1 = instantiate_indirections_get_indirection_response(include_optional);

	cJSON* jsonindirections_get_indirection_response_1 = indirections_get_indirection_response_convertToJSON(indirections_get_indirection_response_1);
	printf("indirections_get_indirection_response :\n%s\n", cJSON_Print(jsonindirections_get_indirection_response_1));
	indirections_get_indirection_response_t* indirections_get_indirection_response_2 = indirections_get_indirection_response_parseFromJSON(jsonindirections_get_indirection_response_1);
	cJSON* jsonindirections_get_indirection_response_2 = indirections_get_indirection_response_convertToJSON(indirections_get_indirection_response_2);
	printf("repeating indirections_get_indirection_response:\n%s\n", cJSON_Print(jsonindirections_get_indirection_response_2));
}

int main() {
  test_indirections_get_indirection_response(1);
  test_indirections_get_indirection_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_get_indirection_response_MAIN
#endif // indirections_get_indirection_response_TEST

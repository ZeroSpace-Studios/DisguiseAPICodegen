#ifndef indirections_indirection_TEST
#define indirections_indirection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_indirection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_indirection.h"
indirections_indirection_t* instantiate_indirections_indirection(int include_optional);

#include "test_indirections_manual_indirection.c"
#include "test_indirections_list_indirection.c"


indirections_indirection_t* instantiate_indirections_indirection(int include_optional) {
  indirections_indirection_t* indirections_indirection = NULL;
  if (include_optional) {
    indirections_indirection = indirections_indirection_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_indirections_manual_indirection(0),
       // false, not to have infinite recursion
      instantiate_indirections_list_indirection(0)
    );
  } else {
    indirections_indirection = indirections_indirection_create(
      "0",
      "0",
      "0",
      NULL,
      NULL
    );
  }

  return indirections_indirection;
}


#ifdef indirections_indirection_MAIN

void test_indirections_indirection(int include_optional) {
    indirections_indirection_t* indirections_indirection_1 = instantiate_indirections_indirection(include_optional);

	cJSON* jsonindirections_indirection_1 = indirections_indirection_convertToJSON(indirections_indirection_1);
	printf("indirections_indirection :\n%s\n", cJSON_Print(jsonindirections_indirection_1));
	indirections_indirection_t* indirections_indirection_2 = indirections_indirection_parseFromJSON(jsonindirections_indirection_1);
	cJSON* jsonindirections_indirection_2 = indirections_indirection_convertToJSON(indirections_indirection_2);
	printf("repeating indirections_indirection:\n%s\n", cJSON_Print(jsonindirections_indirection_2));
}

int main() {
  test_indirections_indirection(1);
  test_indirections_indirection(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_indirection_MAIN
#endif // indirections_indirection_TEST

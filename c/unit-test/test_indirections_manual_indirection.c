#ifndef indirections_manual_indirection_TEST
#define indirections_manual_indirection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_manual_indirection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_manual_indirection.h"
indirections_manual_indirection_t* instantiate_indirections_manual_indirection(int include_optional);



indirections_manual_indirection_t* instantiate_indirections_manual_indirection(int include_optional) {
  indirections_manual_indirection_t* indirections_manual_indirection = NULL;
  if (include_optional) {
    indirections_manual_indirection = indirections_manual_indirection_create(
      "0"
    );
  } else {
    indirections_manual_indirection = indirections_manual_indirection_create(
      "0"
    );
  }

  return indirections_manual_indirection;
}


#ifdef indirections_manual_indirection_MAIN

void test_indirections_manual_indirection(int include_optional) {
    indirections_manual_indirection_t* indirections_manual_indirection_1 = instantiate_indirections_manual_indirection(include_optional);

	cJSON* jsonindirections_manual_indirection_1 = indirections_manual_indirection_convertToJSON(indirections_manual_indirection_1);
	printf("indirections_manual_indirection :\n%s\n", cJSON_Print(jsonindirections_manual_indirection_1));
	indirections_manual_indirection_t* indirections_manual_indirection_2 = indirections_manual_indirection_parseFromJSON(jsonindirections_manual_indirection_1);
	cJSON* jsonindirections_manual_indirection_2 = indirections_manual_indirection_convertToJSON(indirections_manual_indirection_2);
	printf("repeating indirections_manual_indirection:\n%s\n", cJSON_Print(jsonindirections_manual_indirection_2));
}

int main() {
  test_indirections_manual_indirection(1);
  test_indirections_manual_indirection(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_manual_indirection_MAIN
#endif // indirections_manual_indirection_TEST

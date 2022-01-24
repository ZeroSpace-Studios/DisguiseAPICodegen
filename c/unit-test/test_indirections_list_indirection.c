#ifndef indirections_list_indirection_TEST
#define indirections_list_indirection_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_list_indirection_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_list_indirection.h"
indirections_list_indirection_t* instantiate_indirections_list_indirection(int include_optional);



indirections_list_indirection_t* instantiate_indirections_list_indirection(int include_optional) {
  indirections_list_indirection_t* indirections_list_indirection = NULL;
  if (include_optional) {
    indirections_list_indirection = indirections_list_indirection_create(
      56,
      list_create()
    );
  } else {
    indirections_list_indirection = indirections_list_indirection_create(
      56,
      list_create()
    );
  }

  return indirections_list_indirection;
}


#ifdef indirections_list_indirection_MAIN

void test_indirections_list_indirection(int include_optional) {
    indirections_list_indirection_t* indirections_list_indirection_1 = instantiate_indirections_list_indirection(include_optional);

	cJSON* jsonindirections_list_indirection_1 = indirections_list_indirection_convertToJSON(indirections_list_indirection_1);
	printf("indirections_list_indirection :\n%s\n", cJSON_Print(jsonindirections_list_indirection_1));
	indirections_list_indirection_t* indirections_list_indirection_2 = indirections_list_indirection_parseFromJSON(jsonindirections_list_indirection_1);
	cJSON* jsonindirections_list_indirection_2 = indirections_list_indirection_convertToJSON(indirections_list_indirection_2);
	printf("repeating indirections_list_indirection:\n%s\n", cJSON_Print(jsonindirections_list_indirection_2));
}

int main() {
  test_indirections_list_indirection(1);
  test_indirections_list_indirection(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_list_indirection_MAIN
#endif // indirections_list_indirection_TEST

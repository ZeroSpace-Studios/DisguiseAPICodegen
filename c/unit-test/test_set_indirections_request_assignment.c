#ifndef set_indirections_request_assignment_TEST
#define set_indirections_request_assignment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define set_indirections_request_assignment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/set_indirections_request_assignment.h"
set_indirections_request_assignment_t* instantiate_set_indirections_request_assignment(int include_optional);



set_indirections_request_assignment_t* instantiate_set_indirections_request_assignment(int include_optional) {
  set_indirections_request_assignment_t* set_indirections_request_assignment = NULL;
  if (include_optional) {
    set_indirections_request_assignment = set_indirections_request_assignment_create(
      "0",
      56,
      "0"
    );
  } else {
    set_indirections_request_assignment = set_indirections_request_assignment_create(
      "0",
      56,
      "0"
    );
  }

  return set_indirections_request_assignment;
}


#ifdef set_indirections_request_assignment_MAIN

void test_set_indirections_request_assignment(int include_optional) {
    set_indirections_request_assignment_t* set_indirections_request_assignment_1 = instantiate_set_indirections_request_assignment(include_optional);

	cJSON* jsonset_indirections_request_assignment_1 = set_indirections_request_assignment_convertToJSON(set_indirections_request_assignment_1);
	printf("set_indirections_request_assignment :\n%s\n", cJSON_Print(jsonset_indirections_request_assignment_1));
	set_indirections_request_assignment_t* set_indirections_request_assignment_2 = set_indirections_request_assignment_parseFromJSON(jsonset_indirections_request_assignment_1);
	cJSON* jsonset_indirections_request_assignment_2 = set_indirections_request_assignment_convertToJSON(set_indirections_request_assignment_2);
	printf("repeating set_indirections_request_assignment:\n%s\n", cJSON_Print(jsonset_indirections_request_assignment_2));
}

int main() {
  test_set_indirections_request_assignment(1);
  test_set_indirections_request_assignment(0);

  printf("Hello world \n");
  return 0;
}

#endif // set_indirections_request_assignment_MAIN
#endif // set_indirections_request_assignment_TEST

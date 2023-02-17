#ifndef sequencing_indirection_change_assignment_TEST
#define sequencing_indirection_change_assignment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequencing_indirection_change_assignment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequencing_indirection_change_assignment.h"
sequencing_indirection_change_assignment_t* instantiate_sequencing_indirection_change_assignment(int include_optional);

#include "test_d3api_locator.c"
#include "test_d3api_locator.c"


sequencing_indirection_change_assignment_t* instantiate_sequencing_indirection_change_assignment(int include_optional) {
  sequencing_indirection_change_assignment_t* sequencing_indirection_change_assignment = NULL;
  if (include_optional) {
    sequencing_indirection_change_assignment = sequencing_indirection_change_assignment_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
       // false, not to have infinite recursion
      instantiate_d3api_locator(0)
    );
  } else {
    sequencing_indirection_change_assignment = sequencing_indirection_change_assignment_create(
      NULL,
      NULL
    );
  }

  return sequencing_indirection_change_assignment;
}


#ifdef sequencing_indirection_change_assignment_MAIN

void test_sequencing_indirection_change_assignment(int include_optional) {
    sequencing_indirection_change_assignment_t* sequencing_indirection_change_assignment_1 = instantiate_sequencing_indirection_change_assignment(include_optional);

	cJSON* jsonsequencing_indirection_change_assignment_1 = sequencing_indirection_change_assignment_convertToJSON(sequencing_indirection_change_assignment_1);
	printf("sequencing_indirection_change_assignment :\n%s\n", cJSON_Print(jsonsequencing_indirection_change_assignment_1));
	sequencing_indirection_change_assignment_t* sequencing_indirection_change_assignment_2 = sequencing_indirection_change_assignment_parseFromJSON(jsonsequencing_indirection_change_assignment_1);
	cJSON* jsonsequencing_indirection_change_assignment_2 = sequencing_indirection_change_assignment_convertToJSON(sequencing_indirection_change_assignment_2);
	printf("repeating sequencing_indirection_change_assignment:\n%s\n", cJSON_Print(jsonsequencing_indirection_change_assignment_2));
}

int main() {
  test_sequencing_indirection_change_assignment(1);
  test_sequencing_indirection_change_assignment(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequencing_indirection_change_assignment_MAIN
#endif // sequencing_indirection_change_assignment_TEST

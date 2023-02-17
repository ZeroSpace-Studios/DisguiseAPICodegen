#ifndef sequencing_list_indirection_item_TEST
#define sequencing_list_indirection_item_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequencing_list_indirection_item_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequencing_list_indirection_item.h"
sequencing_list_indirection_item_t* instantiate_sequencing_list_indirection_item(int include_optional);

#include "test_sequencing_indirection_resource.c"


sequencing_list_indirection_item_t* instantiate_sequencing_list_indirection_item(int include_optional) {
  sequencing_list_indirection_item_t* sequencing_list_indirection_item = NULL;
  if (include_optional) {
    sequencing_list_indirection_item = sequencing_list_indirection_item_create(
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_sequencing_indirection_resource(0)
    );
  } else {
    sequencing_list_indirection_item = sequencing_list_indirection_item_create(
      "0",
      "0",
      "0",
      NULL
    );
  }

  return sequencing_list_indirection_item;
}


#ifdef sequencing_list_indirection_item_MAIN

void test_sequencing_list_indirection_item(int include_optional) {
    sequencing_list_indirection_item_t* sequencing_list_indirection_item_1 = instantiate_sequencing_list_indirection_item(include_optional);

	cJSON* jsonsequencing_list_indirection_item_1 = sequencing_list_indirection_item_convertToJSON(sequencing_list_indirection_item_1);
	printf("sequencing_list_indirection_item :\n%s\n", cJSON_Print(jsonsequencing_list_indirection_item_1));
	sequencing_list_indirection_item_t* sequencing_list_indirection_item_2 = sequencing_list_indirection_item_parseFromJSON(jsonsequencing_list_indirection_item_1);
	cJSON* jsonsequencing_list_indirection_item_2 = sequencing_list_indirection_item_convertToJSON(sequencing_list_indirection_item_2);
	printf("repeating sequencing_list_indirection_item:\n%s\n", cJSON_Print(jsonsequencing_list_indirection_item_2));
}

int main() {
  test_sequencing_list_indirection_item(1);
  test_sequencing_list_indirection_item(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequencing_list_indirection_item_MAIN
#endif // sequencing_list_indirection_item_TEST

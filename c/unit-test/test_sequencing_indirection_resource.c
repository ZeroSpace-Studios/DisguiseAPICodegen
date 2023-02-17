#ifndef sequencing_indirection_resource_TEST
#define sequencing_indirection_resource_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequencing_indirection_resource_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequencing_indirection_resource.h"
sequencing_indirection_resource_t* instantiate_sequencing_indirection_resource(int include_optional);



sequencing_indirection_resource_t* instantiate_sequencing_indirection_resource(int include_optional) {
  sequencing_indirection_resource_t* sequencing_indirection_resource = NULL;
  if (include_optional) {
    sequencing_indirection_resource = sequencing_indirection_resource_create(
      "0",
      "0"
    );
  } else {
    sequencing_indirection_resource = sequencing_indirection_resource_create(
      "0",
      "0"
    );
  }

  return sequencing_indirection_resource;
}


#ifdef sequencing_indirection_resource_MAIN

void test_sequencing_indirection_resource(int include_optional) {
    sequencing_indirection_resource_t* sequencing_indirection_resource_1 = instantiate_sequencing_indirection_resource(include_optional);

	cJSON* jsonsequencing_indirection_resource_1 = sequencing_indirection_resource_convertToJSON(sequencing_indirection_resource_1);
	printf("sequencing_indirection_resource :\n%s\n", cJSON_Print(jsonsequencing_indirection_resource_1));
	sequencing_indirection_resource_t* sequencing_indirection_resource_2 = sequencing_indirection_resource_parseFromJSON(jsonsequencing_indirection_resource_1);
	cJSON* jsonsequencing_indirection_resource_2 = sequencing_indirection_resource_convertToJSON(sequencing_indirection_resource_2);
	printf("repeating sequencing_indirection_resource:\n%s\n", cJSON_Print(jsonsequencing_indirection_resource_2));
}

int main() {
  test_sequencing_indirection_resource(1);
  test_sequencing_indirection_resource(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequencing_indirection_resource_MAIN
#endif // sequencing_indirection_resource_TEST

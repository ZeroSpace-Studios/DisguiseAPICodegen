#ifndef sequencing_change_indirections_request_TEST
#define sequencing_change_indirections_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequencing_change_indirections_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequencing_change_indirections_request.h"
sequencing_change_indirections_request_t* instantiate_sequencing_change_indirections_request(int include_optional);



sequencing_change_indirections_request_t* instantiate_sequencing_change_indirections_request(int include_optional) {
  sequencing_change_indirections_request_t* sequencing_change_indirections_request = NULL;
  if (include_optional) {
    sequencing_change_indirections_request = sequencing_change_indirections_request_create(
      list_create()
    );
  } else {
    sequencing_change_indirections_request = sequencing_change_indirections_request_create(
      list_create()
    );
  }

  return sequencing_change_indirections_request;
}


#ifdef sequencing_change_indirections_request_MAIN

void test_sequencing_change_indirections_request(int include_optional) {
    sequencing_change_indirections_request_t* sequencing_change_indirections_request_1 = instantiate_sequencing_change_indirections_request(include_optional);

	cJSON* jsonsequencing_change_indirections_request_1 = sequencing_change_indirections_request_convertToJSON(sequencing_change_indirections_request_1);
	printf("sequencing_change_indirections_request :\n%s\n", cJSON_Print(jsonsequencing_change_indirections_request_1));
	sequencing_change_indirections_request_t* sequencing_change_indirections_request_2 = sequencing_change_indirections_request_parseFromJSON(jsonsequencing_change_indirections_request_1);
	cJSON* jsonsequencing_change_indirections_request_2 = sequencing_change_indirections_request_convertToJSON(sequencing_change_indirections_request_2);
	printf("repeating sequencing_change_indirections_request:\n%s\n", cJSON_Print(jsonsequencing_change_indirections_request_2));
}

int main() {
  test_sequencing_change_indirections_request(1);
  test_sequencing_change_indirections_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequencing_change_indirections_request_MAIN
#endif // sequencing_change_indirections_request_TEST

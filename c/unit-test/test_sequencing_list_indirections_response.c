#ifndef sequencing_list_indirections_response_TEST
#define sequencing_list_indirections_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define sequencing_list_indirections_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/sequencing_list_indirections_response.h"
sequencing_list_indirections_response_t* instantiate_sequencing_list_indirections_response(int include_optional);

#include "test_rpc_status.c"


sequencing_list_indirections_response_t* instantiate_sequencing_list_indirections_response(int include_optional) {
  sequencing_list_indirections_response_t* sequencing_list_indirections_response = NULL;
  if (include_optional) {
    sequencing_list_indirections_response = sequencing_list_indirections_response_create(
       // false, not to have infinite recursion
      instantiate_rpc_status(0),
      list_create()
    );
  } else {
    sequencing_list_indirections_response = sequencing_list_indirections_response_create(
      NULL,
      list_create()
    );
  }

  return sequencing_list_indirections_response;
}


#ifdef sequencing_list_indirections_response_MAIN

void test_sequencing_list_indirections_response(int include_optional) {
    sequencing_list_indirections_response_t* sequencing_list_indirections_response_1 = instantiate_sequencing_list_indirections_response(include_optional);

	cJSON* jsonsequencing_list_indirections_response_1 = sequencing_list_indirections_response_convertToJSON(sequencing_list_indirections_response_1);
	printf("sequencing_list_indirections_response :\n%s\n", cJSON_Print(jsonsequencing_list_indirections_response_1));
	sequencing_list_indirections_response_t* sequencing_list_indirections_response_2 = sequencing_list_indirections_response_parseFromJSON(jsonsequencing_list_indirections_response_1);
	cJSON* jsonsequencing_list_indirections_response_2 = sequencing_list_indirections_response_convertToJSON(sequencing_list_indirections_response_2);
	printf("repeating sequencing_list_indirections_response:\n%s\n", cJSON_Print(jsonsequencing_list_indirections_response_2));
}

int main() {
  test_sequencing_list_indirections_response(1);
  test_sequencing_list_indirections_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // sequencing_list_indirections_response_MAIN
#endif // sequencing_list_indirections_response_TEST

#ifndef indirections_set_indirections_request_TEST
#define indirections_set_indirections_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_set_indirections_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_set_indirections_request.h"
indirections_set_indirections_request_t* instantiate_indirections_set_indirections_request(int include_optional);



indirections_set_indirections_request_t* instantiate_indirections_set_indirections_request(int include_optional) {
  indirections_set_indirections_request_t* indirections_set_indirections_request = NULL;
  if (include_optional) {
    indirections_set_indirections_request = indirections_set_indirections_request_create(
      list_create()
    );
  } else {
    indirections_set_indirections_request = indirections_set_indirections_request_create(
      list_create()
    );
  }

  return indirections_set_indirections_request;
}


#ifdef indirections_set_indirections_request_MAIN

void test_indirections_set_indirections_request(int include_optional) {
    indirections_set_indirections_request_t* indirections_set_indirections_request_1 = instantiate_indirections_set_indirections_request(include_optional);

	cJSON* jsonindirections_set_indirections_request_1 = indirections_set_indirections_request_convertToJSON(indirections_set_indirections_request_1);
	printf("indirections_set_indirections_request :\n%s\n", cJSON_Print(jsonindirections_set_indirections_request_1));
	indirections_set_indirections_request_t* indirections_set_indirections_request_2 = indirections_set_indirections_request_parseFromJSON(jsonindirections_set_indirections_request_1);
	cJSON* jsonindirections_set_indirections_request_2 = indirections_set_indirections_request_convertToJSON(indirections_set_indirections_request_2);
	printf("repeating indirections_set_indirections_request:\n%s\n", cJSON_Print(jsonindirections_set_indirections_request_2));
}

int main() {
  test_indirections_set_indirections_request(1);
  test_indirections_set_indirections_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_set_indirections_request_MAIN
#endif // indirections_set_indirections_request_TEST

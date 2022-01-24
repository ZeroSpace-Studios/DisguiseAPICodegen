#ifndef indirections_list_indirections_response_TEST
#define indirections_list_indirections_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define indirections_list_indirections_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/indirections_list_indirections_response.h"
indirections_list_indirections_response_t* instantiate_indirections_list_indirections_response(int include_optional);



indirections_list_indirections_response_t* instantiate_indirections_list_indirections_response(int include_optional) {
  indirections_list_indirections_response_t* indirections_list_indirections_response = NULL;
  if (include_optional) {
    indirections_list_indirections_response = indirections_list_indirections_response_create(
      list_create()
    );
  } else {
    indirections_list_indirections_response = indirections_list_indirections_response_create(
      list_create()
    );
  }

  return indirections_list_indirections_response;
}


#ifdef indirections_list_indirections_response_MAIN

void test_indirections_list_indirections_response(int include_optional) {
    indirections_list_indirections_response_t* indirections_list_indirections_response_1 = instantiate_indirections_list_indirections_response(include_optional);

	cJSON* jsonindirections_list_indirections_response_1 = indirections_list_indirections_response_convertToJSON(indirections_list_indirections_response_1);
	printf("indirections_list_indirections_response :\n%s\n", cJSON_Print(jsonindirections_list_indirections_response_1));
	indirections_list_indirections_response_t* indirections_list_indirections_response_2 = indirections_list_indirections_response_parseFromJSON(jsonindirections_list_indirections_response_1);
	cJSON* jsonindirections_list_indirections_response_2 = indirections_list_indirections_response_convertToJSON(indirections_list_indirections_response_2);
	printf("repeating indirections_list_indirections_response:\n%s\n", cJSON_Print(jsonindirections_list_indirections_response_2));
}

int main() {
  test_indirections_list_indirections_response(1);
  test_indirections_list_indirections_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // indirections_list_indirections_response_MAIN
#endif // indirections_list_indirections_response_TEST

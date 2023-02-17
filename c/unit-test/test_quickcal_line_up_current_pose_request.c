#ifndef quickcal_line_up_current_pose_request_TEST
#define quickcal_line_up_current_pose_request_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define quickcal_line_up_current_pose_request_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/quickcal_line_up_current_pose_request.h"
quickcal_line_up_current_pose_request_t* instantiate_quickcal_line_up_current_pose_request(int include_optional);

#include "test_d3api_locator.c"
#include "test_d3api_locator.c"
#include "test_d3api_vec2_float.c"


quickcal_line_up_current_pose_request_t* instantiate_quickcal_line_up_current_pose_request(int include_optional) {
  quickcal_line_up_current_pose_request_t* quickcal_line_up_current_pose_request = NULL;
  if (include_optional) {
    quickcal_line_up_current_pose_request = quickcal_line_up_current_pose_request_create(
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
       // false, not to have infinite recursion
      instantiate_d3api_locator(0),
       // false, not to have infinite recursion
      instantiate_d3api_vec2_float(0)
    );
  } else {
    quickcal_line_up_current_pose_request = quickcal_line_up_current_pose_request_create(
      NULL,
      NULL,
      NULL
    );
  }

  return quickcal_line_up_current_pose_request;
}


#ifdef quickcal_line_up_current_pose_request_MAIN

void test_quickcal_line_up_current_pose_request(int include_optional) {
    quickcal_line_up_current_pose_request_t* quickcal_line_up_current_pose_request_1 = instantiate_quickcal_line_up_current_pose_request(include_optional);

	cJSON* jsonquickcal_line_up_current_pose_request_1 = quickcal_line_up_current_pose_request_convertToJSON(quickcal_line_up_current_pose_request_1);
	printf("quickcal_line_up_current_pose_request :\n%s\n", cJSON_Print(jsonquickcal_line_up_current_pose_request_1));
	quickcal_line_up_current_pose_request_t* quickcal_line_up_current_pose_request_2 = quickcal_line_up_current_pose_request_parseFromJSON(jsonquickcal_line_up_current_pose_request_1);
	cJSON* jsonquickcal_line_up_current_pose_request_2 = quickcal_line_up_current_pose_request_convertToJSON(quickcal_line_up_current_pose_request_2);
	printf("repeating quickcal_line_up_current_pose_request:\n%s\n", cJSON_Print(jsonquickcal_line_up_current_pose_request_2));
}

int main() {
  test_quickcal_line_up_current_pose_request(1);
  test_quickcal_line_up_current_pose_request(0);

  printf("Hello world \n");
  return 0;
}

#endif // quickcal_line_up_current_pose_request_MAIN
#endif // quickcal_line_up_current_pose_request_TEST

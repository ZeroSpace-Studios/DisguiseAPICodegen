#ifndef colour_cdl_info_TEST
#define colour_cdl_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define colour_cdl_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/colour_cdl_info.h"
colour_cdl_info_t* instantiate_colour_cdl_info(int include_optional);

#include "test_d3api_vec3_float.c"
#include "test_d3api_vec3_float.c"
#include "test_d3api_vec3_float.c"


colour_cdl_info_t* instantiate_colour_cdl_info(int include_optional) {
  colour_cdl_info_t* colour_cdl_info = NULL;
  if (include_optional) {
    colour_cdl_info = colour_cdl_info_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_d3api_vec3_float(0),
       // false, not to have infinite recursion
      instantiate_d3api_vec3_float(0),
       // false, not to have infinite recursion
      instantiate_d3api_vec3_float(0),
      1.337
    );
  } else {
    colour_cdl_info = colour_cdl_info_create(
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      1.337
    );
  }

  return colour_cdl_info;
}


#ifdef colour_cdl_info_MAIN

void test_colour_cdl_info(int include_optional) {
    colour_cdl_info_t* colour_cdl_info_1 = instantiate_colour_cdl_info(include_optional);

	cJSON* jsoncolour_cdl_info_1 = colour_cdl_info_convertToJSON(colour_cdl_info_1);
	printf("colour_cdl_info :\n%s\n", cJSON_Print(jsoncolour_cdl_info_1));
	colour_cdl_info_t* colour_cdl_info_2 = colour_cdl_info_parseFromJSON(jsoncolour_cdl_info_1);
	cJSON* jsoncolour_cdl_info_2 = colour_cdl_info_convertToJSON(colour_cdl_info_2);
	printf("repeating colour_cdl_info:\n%s\n", cJSON_Print(jsoncolour_cdl_info_2));
}

int main() {
  test_colour_cdl_info(1);
  test_colour_cdl_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // colour_cdl_info_MAIN
#endif // colour_cdl_info_TEST

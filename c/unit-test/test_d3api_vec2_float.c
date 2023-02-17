#ifndef d3api_vec2_float_TEST
#define d3api_vec2_float_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define d3api_vec2_float_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/d3api_vec2_float.h"
d3api_vec2_float_t* instantiate_d3api_vec2_float(int include_optional);



d3api_vec2_float_t* instantiate_d3api_vec2_float(int include_optional) {
  d3api_vec2_float_t* d3api_vec2_float = NULL;
  if (include_optional) {
    d3api_vec2_float = d3api_vec2_float_create(
      1.337,
      1.337
    );
  } else {
    d3api_vec2_float = d3api_vec2_float_create(
      1.337,
      1.337
    );
  }

  return d3api_vec2_float;
}


#ifdef d3api_vec2_float_MAIN

void test_d3api_vec2_float(int include_optional) {
    d3api_vec2_float_t* d3api_vec2_float_1 = instantiate_d3api_vec2_float(include_optional);

	cJSON* jsond3api_vec2_float_1 = d3api_vec2_float_convertToJSON(d3api_vec2_float_1);
	printf("d3api_vec2_float :\n%s\n", cJSON_Print(jsond3api_vec2_float_1));
	d3api_vec2_float_t* d3api_vec2_float_2 = d3api_vec2_float_parseFromJSON(jsond3api_vec2_float_1);
	cJSON* jsond3api_vec2_float_2 = d3api_vec2_float_convertToJSON(d3api_vec2_float_2);
	printf("repeating d3api_vec2_float:\n%s\n", cJSON_Print(jsond3api_vec2_float_2));
}

int main() {
  test_d3api_vec2_float(1);
  test_d3api_vec2_float(0);

  printf("Hello world \n");
  return 0;
}

#endif // d3api_vec2_float_MAIN
#endif // d3api_vec2_float_TEST

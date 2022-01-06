#ifndef v1_float3_TEST
#define v1_float3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v1_float3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v1_float3.h"
v1_float3_t* instantiate_v1_float3(int include_optional);



v1_float3_t* instantiate_v1_float3(int include_optional) {
  v1_float3_t* v1_float3 = NULL;
  if (include_optional) {
    v1_float3 = v1_float3_create(
      1.337,
      1.337,
      1.337
    );
  } else {
    v1_float3 = v1_float3_create(
      1.337,
      1.337,
      1.337
    );
  }

  return v1_float3;
}


#ifdef v1_float3_MAIN

void test_v1_float3(int include_optional) {
    v1_float3_t* v1_float3_1 = instantiate_v1_float3(include_optional);

	cJSON* jsonv1_float3_1 = v1_float3_convertToJSON(v1_float3_1);
	printf("v1_float3 :\n%s\n", cJSON_Print(jsonv1_float3_1));
	v1_float3_t* v1_float3_2 = v1_float3_parseFromJSON(jsonv1_float3_1);
	cJSON* jsonv1_float3_2 = v1_float3_convertToJSON(v1_float3_2);
	printf("repeating v1_float3:\n%s\n", cJSON_Print(jsonv1_float3_2));
}

int main() {
  test_v1_float3(1);
  test_v1_float3(0);

  printf("Hello world \n");
  return 0;
}

#endif // v1_float3_MAIN
#endif // v1_float3_TEST

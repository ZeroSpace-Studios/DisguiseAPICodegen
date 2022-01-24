#ifndef cameracalibration_float3_TEST
#define cameracalibration_float3_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define cameracalibration_float3_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/cameracalibration_float3.h"
cameracalibration_float3_t* instantiate_cameracalibration_float3(int include_optional);



cameracalibration_float3_t* instantiate_cameracalibration_float3(int include_optional) {
  cameracalibration_float3_t* cameracalibration_float3 = NULL;
  if (include_optional) {
    cameracalibration_float3 = cameracalibration_float3_create(
      1.337,
      1.337,
      1.337
    );
  } else {
    cameracalibration_float3 = cameracalibration_float3_create(
      1.337,
      1.337,
      1.337
    );
  }

  return cameracalibration_float3;
}


#ifdef cameracalibration_float3_MAIN

void test_cameracalibration_float3(int include_optional) {
    cameracalibration_float3_t* cameracalibration_float3_1 = instantiate_cameracalibration_float3(include_optional);

	cJSON* jsoncameracalibration_float3_1 = cameracalibration_float3_convertToJSON(cameracalibration_float3_1);
	printf("cameracalibration_float3 :\n%s\n", cJSON_Print(jsoncameracalibration_float3_1));
	cameracalibration_float3_t* cameracalibration_float3_2 = cameracalibration_float3_parseFromJSON(jsoncameracalibration_float3_1);
	cJSON* jsoncameracalibration_float3_2 = cameracalibration_float3_convertToJSON(cameracalibration_float3_2);
	printf("repeating cameracalibration_float3:\n%s\n", cJSON_Print(jsoncameracalibration_float3_2));
}

int main() {
  test_cameracalibration_float3(1);
  test_cameracalibration_float3(0);

  printf("Hello world \n");
  return 0;
}

#endif // cameracalibration_float3_MAIN
#endif // cameracalibration_float3_TEST

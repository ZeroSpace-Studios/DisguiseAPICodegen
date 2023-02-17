#ifndef statusd3_machine_TEST
#define statusd3_machine_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define statusd3_machine_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/statusd3_machine.h"
statusd3_machine_t* instantiate_statusd3_machine(int include_optional);



statusd3_machine_t* instantiate_statusd3_machine(int include_optional) {
  statusd3_machine_t* statusd3_machine = NULL;
  if (include_optional) {
    statusd3_machine = statusd3_machine_create(
      "0",
      "0",
      "0"
    );
  } else {
    statusd3_machine = statusd3_machine_create(
      "0",
      "0",
      "0"
    );
  }

  return statusd3_machine;
}


#ifdef statusd3_machine_MAIN

void test_statusd3_machine(int include_optional) {
    statusd3_machine_t* statusd3_machine_1 = instantiate_statusd3_machine(include_optional);

	cJSON* jsonstatusd3_machine_1 = statusd3_machine_convertToJSON(statusd3_machine_1);
	printf("statusd3_machine :\n%s\n", cJSON_Print(jsonstatusd3_machine_1));
	statusd3_machine_t* statusd3_machine_2 = statusd3_machine_parseFromJSON(jsonstatusd3_machine_1);
	cJSON* jsonstatusd3_machine_2 = statusd3_machine_convertToJSON(statusd3_machine_2);
	printf("repeating statusd3_machine:\n%s\n", cJSON_Print(jsonstatusd3_machine_2));
}

int main() {
  test_statusd3_machine(1);
  test_statusd3_machine(0);

  printf("Hello world \n");
  return 0;
}

#endif // statusd3_machine_MAIN
#endif // statusd3_machine_TEST

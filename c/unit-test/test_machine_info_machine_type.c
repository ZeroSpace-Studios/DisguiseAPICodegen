#ifndef machine_info_machine_type_TEST
#define machine_info_machine_type_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define machine_info_machine_type_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/machine_info_machine_type.h"
machine_info_machine_type_t* instantiate_machine_info_machine_type(int include_optional);



machine_info_machine_type_t* instantiate_machine_info_machine_type(int include_optional) {
  machine_info_machine_type_t* machine_info_machine_type = NULL;
  if (include_optional) {
    machine_info_machine_type = machine_info_machine_type_create(
    );
  } else {
    machine_info_machine_type = machine_info_machine_type_create(
    );
  }

  return machine_info_machine_type;
}


#ifdef machine_info_machine_type_MAIN

void test_machine_info_machine_type(int include_optional) {
    machine_info_machine_type_t* machine_info_machine_type_1 = instantiate_machine_info_machine_type(include_optional);

	cJSON* jsonmachine_info_machine_type_1 = machine_info_machine_type_convertToJSON(machine_info_machine_type_1);
	printf("machine_info_machine_type :\n%s\n", cJSON_Print(jsonmachine_info_machine_type_1));
	machine_info_machine_type_t* machine_info_machine_type_2 = machine_info_machine_type_parseFromJSON(jsonmachine_info_machine_type_1);
	cJSON* jsonmachine_info_machine_type_2 = machine_info_machine_type_convertToJSON(machine_info_machine_type_2);
	printf("repeating machine_info_machine_type:\n%s\n", cJSON_Print(jsonmachine_info_machine_type_2));
}

int main() {
  test_machine_info_machine_type(1);
  test_machine_info_machine_type(0);

  printf("Hello world \n");
  return 0;
}

#endif // machine_info_machine_type_MAIN
#endif // machine_info_machine_type_TEST

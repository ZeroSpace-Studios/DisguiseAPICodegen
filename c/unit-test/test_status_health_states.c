#ifndef status_health_states_TEST
#define status_health_states_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_health_states_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_health_states.h"
status_health_states_t* instantiate_status_health_states(int include_optional);



status_health_states_t* instantiate_status_health_states(int include_optional) {
  status_health_states_t* status_health_states = NULL;
  if (include_optional) {
    status_health_states = status_health_states_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    status_health_states = status_health_states_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return status_health_states;
}


#ifdef status_health_states_MAIN

void test_status_health_states(int include_optional) {
    status_health_states_t* status_health_states_1 = instantiate_status_health_states(include_optional);

	cJSON* jsonstatus_health_states_1 = status_health_states_convertToJSON(status_health_states_1);
	printf("status_health_states :\n%s\n", cJSON_Print(jsonstatus_health_states_1));
	status_health_states_t* status_health_states_2 = status_health_states_parseFromJSON(jsonstatus_health_states_1);
	cJSON* jsonstatus_health_states_2 = status_health_states_convertToJSON(status_health_states_2);
	printf("repeating status_health_states:\n%s\n", cJSON_Print(jsonstatus_health_states_2));
}

int main() {
  test_status_health_states(1);
  test_status_health_states(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_health_states_MAIN
#endif // status_health_states_TEST

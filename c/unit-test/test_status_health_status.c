#ifndef status_health_status_TEST
#define status_health_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_health_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_health_status.h"
status_health_status_t* instantiate_status_health_status(int include_optional);



status_health_status_t* instantiate_status_health_status(int include_optional) {
  status_health_status_t* status_health_status = NULL;
  if (include_optional) {
    status_health_status = status_health_status_create(
      1.337,
      1.337,
      1.337,
      list_create()
    );
  } else {
    status_health_status = status_health_status_create(
      1.337,
      1.337,
      1.337,
      list_create()
    );
  }

  return status_health_status;
}


#ifdef status_health_status_MAIN

void test_status_health_status(int include_optional) {
    status_health_status_t* status_health_status_1 = instantiate_status_health_status(include_optional);

	cJSON* jsonstatus_health_status_1 = status_health_status_convertToJSON(status_health_status_1);
	printf("status_health_status :\n%s\n", cJSON_Print(jsonstatus_health_status_1));
	status_health_status_t* status_health_status_2 = status_health_status_parseFromJSON(jsonstatus_health_status_1);
	cJSON* jsonstatus_health_status_2 = status_health_status_convertToJSON(status_health_status_2);
	printf("repeating status_health_status:\n%s\n", cJSON_Print(jsonstatus_health_status_2));
}

int main() {
  test_status_health_status(1);
  test_status_health_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_health_status_MAIN
#endif // status_health_status_TEST

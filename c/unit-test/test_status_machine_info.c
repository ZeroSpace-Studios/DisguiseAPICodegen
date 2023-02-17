#ifndef status_machine_info_TEST
#define status_machine_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_machine_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_machine_info.h"
status_machine_info_t* instantiate_status_machine_info(int include_optional);



status_machine_info_t* instantiate_status_machine_info(int include_optional) {
  status_machine_info_t* status_machine_info = NULL;
  if (include_optional) {
    status_machine_info = status_machine_info_create(
      "0",
      "0",
      "0",
      d3_api_status_machine_info__"Unknown"
    );
  } else {
    status_machine_info = status_machine_info_create(
      "0",
      "0",
      "0",
      d3_api_status_machine_info__"Unknown"
    );
  }

  return status_machine_info;
}


#ifdef status_machine_info_MAIN

void test_status_machine_info(int include_optional) {
    status_machine_info_t* status_machine_info_1 = instantiate_status_machine_info(include_optional);

	cJSON* jsonstatus_machine_info_1 = status_machine_info_convertToJSON(status_machine_info_1);
	printf("status_machine_info :\n%s\n", cJSON_Print(jsonstatus_machine_info_1));
	status_machine_info_t* status_machine_info_2 = status_machine_info_parseFromJSON(jsonstatus_machine_info_1);
	cJSON* jsonstatus_machine_info_2 = status_machine_info_convertToJSON(status_machine_info_2);
	printf("repeating status_machine_info:\n%s\n", cJSON_Print(jsonstatus_machine_info_2));
}

int main() {
  test_status_machine_info(1);
  test_status_machine_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_machine_info_MAIN
#endif // status_machine_info_TEST

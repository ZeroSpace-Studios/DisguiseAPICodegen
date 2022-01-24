#ifndef workload_instance_info_workload_instance_status_TEST
#define workload_instance_info_workload_instance_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define workload_instance_info_workload_instance_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/workload_instance_info_workload_instance_status.h"
workload_instance_info_workload_instance_status_t* instantiate_workload_instance_info_workload_instance_status(int include_optional);



workload_instance_info_workload_instance_status_t* instantiate_workload_instance_info_workload_instance_status(int include_optional) {
  workload_instance_info_workload_instance_status_t* workload_instance_info_workload_instance_status = NULL;
  if (include_optional) {
    workload_instance_info_workload_instance_status = workload_instance_info_workload_instance_status_create(
    );
  } else {
    workload_instance_info_workload_instance_status = workload_instance_info_workload_instance_status_create(
    );
  }

  return workload_instance_info_workload_instance_status;
}


#ifdef workload_instance_info_workload_instance_status_MAIN

void test_workload_instance_info_workload_instance_status(int include_optional) {
    workload_instance_info_workload_instance_status_t* workload_instance_info_workload_instance_status_1 = instantiate_workload_instance_info_workload_instance_status(include_optional);

	cJSON* jsonworkload_instance_info_workload_instance_status_1 = workload_instance_info_workload_instance_status_convertToJSON(workload_instance_info_workload_instance_status_1);
	printf("workload_instance_info_workload_instance_status :\n%s\n", cJSON_Print(jsonworkload_instance_info_workload_instance_status_1));
	workload_instance_info_workload_instance_status_t* workload_instance_info_workload_instance_status_2 = workload_instance_info_workload_instance_status_parseFromJSON(jsonworkload_instance_info_workload_instance_status_1);
	cJSON* jsonworkload_instance_info_workload_instance_status_2 = workload_instance_info_workload_instance_status_convertToJSON(workload_instance_info_workload_instance_status_2);
	printf("repeating workload_instance_info_workload_instance_status:\n%s\n", cJSON_Print(jsonworkload_instance_info_workload_instance_status_2));
}

int main() {
  test_workload_instance_info_workload_instance_status(1);
  test_workload_instance_info_workload_instance_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // workload_instance_info_workload_instance_status_MAIN
#endif // workload_instance_info_workload_instance_status_TEST

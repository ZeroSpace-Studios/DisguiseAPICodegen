#ifndef status_health_report_TEST
#define status_health_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_health_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_health_report.h"
status_health_report_t* instantiate_status_health_report(int include_optional);

#include "test_statusd3_machine.c"
#include "test_statusd3_machine.c"
#include "test_status_health_status.c"


status_health_report_t* instantiate_status_health_report(int include_optional) {
  status_health_report_t* status_health_report = NULL;
  if (include_optional) {
    status_health_report = status_health_report_create(
       // false, not to have infinite recursion
      instantiate_statusd3_machine(0),
       // false, not to have infinite recursion
      instantiate_statusd3_machine(0),
       // false, not to have infinite recursion
      instantiate_status_health_status(0)
    );
  } else {
    status_health_report = status_health_report_create(
      NULL,
      NULL,
      NULL
    );
  }

  return status_health_report;
}


#ifdef status_health_report_MAIN

void test_status_health_report(int include_optional) {
    status_health_report_t* status_health_report_1 = instantiate_status_health_report(include_optional);

	cJSON* jsonstatus_health_report_1 = status_health_report_convertToJSON(status_health_report_1);
	printf("status_health_report :\n%s\n", cJSON_Print(jsonstatus_health_report_1));
	status_health_report_t* status_health_report_2 = status_health_report_parseFromJSON(jsonstatus_health_report_1);
	cJSON* jsonstatus_health_report_2 = status_health_report_convertToJSON(status_health_report_2);
	printf("repeating status_health_report:\n%s\n", cJSON_Print(jsonstatus_health_report_2));
}

int main() {
  test_status_health_report(1);
  test_status_health_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_health_report_MAIN
#endif // status_health_report_TEST

#ifndef status_notifications_report_TEST
#define status_notifications_report_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_notifications_report_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_notifications_report.h"
status_notifications_report_t* instantiate_status_notifications_report(int include_optional);

#include "test_statusd3_machine.c"


status_notifications_report_t* instantiate_status_notifications_report(int include_optional) {
  status_notifications_report_t* status_notifications_report = NULL;
  if (include_optional) {
    status_notifications_report = status_notifications_report_create(
       // false, not to have infinite recursion
      instantiate_statusd3_machine(0),
      list_create()
    );
  } else {
    status_notifications_report = status_notifications_report_create(
      NULL,
      list_create()
    );
  }

  return status_notifications_report;
}


#ifdef status_notifications_report_MAIN

void test_status_notifications_report(int include_optional) {
    status_notifications_report_t* status_notifications_report_1 = instantiate_status_notifications_report(include_optional);

	cJSON* jsonstatus_notifications_report_1 = status_notifications_report_convertToJSON(status_notifications_report_1);
	printf("status_notifications_report :\n%s\n", cJSON_Print(jsonstatus_notifications_report_1));
	status_notifications_report_t* status_notifications_report_2 = status_notifications_report_parseFromJSON(jsonstatus_notifications_report_1);
	cJSON* jsonstatus_notifications_report_2 = status_notifications_report_convertToJSON(status_notifications_report_2);
	printf("repeating status_notifications_report:\n%s\n", cJSON_Print(jsonstatus_notifications_report_2));
}

int main() {
  test_status_notifications_report(1);
  test_status_notifications_report(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_notifications_report_MAIN
#endif // status_notifications_report_TEST

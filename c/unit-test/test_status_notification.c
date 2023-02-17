#ifndef status_notification_TEST
#define status_notification_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_notification_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_notification.h"
status_notification_t* instantiate_status_notification(int include_optional);



status_notification_t* instantiate_status_notification(int include_optional) {
  status_notification_t* status_notification = NULL;
  if (include_optional) {
    status_notification = status_notification_create(
      "0",
      "0"
    );
  } else {
    status_notification = status_notification_create(
      "0",
      "0"
    );
  }

  return status_notification;
}


#ifdef status_notification_MAIN

void test_status_notification(int include_optional) {
    status_notification_t* status_notification_1 = instantiate_status_notification(include_optional);

	cJSON* jsonstatus_notification_1 = status_notification_convertToJSON(status_notification_1);
	printf("status_notification :\n%s\n", cJSON_Print(jsonstatus_notification_1));
	status_notification_t* status_notification_2 = status_notification_parseFromJSON(jsonstatus_notification_1);
	cJSON* jsonstatus_notification_2 = status_notification_convertToJSON(status_notification_2);
	printf("repeating status_notification:\n%s\n", cJSON_Print(jsonstatus_notification_2));
}

int main() {
  test_status_notification(1);
  test_status_notification(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_notification_MAIN
#endif // status_notification_TEST

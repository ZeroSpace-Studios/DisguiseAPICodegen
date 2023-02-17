#ifndef status_d3_version_info_TEST
#define status_d3_version_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define status_d3_version_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/status_d3_version_info.h"
status_d3_version_info_t* instantiate_status_d3_version_info(int include_optional);



status_d3_version_info_t* instantiate_status_d3_version_info(int include_optional) {
  status_d3_version_info_t* status_d3_version_info = NULL;
  if (include_optional) {
    status_d3_version_info = status_d3_version_info_create(
      56,
      56,
      56,
      56
    );
  } else {
    status_d3_version_info = status_d3_version_info_create(
      56,
      56,
      56,
      56
    );
  }

  return status_d3_version_info;
}


#ifdef status_d3_version_info_MAIN

void test_status_d3_version_info(int include_optional) {
    status_d3_version_info_t* status_d3_version_info_1 = instantiate_status_d3_version_info(include_optional);

	cJSON* jsonstatus_d3_version_info_1 = status_d3_version_info_convertToJSON(status_d3_version_info_1);
	printf("status_d3_version_info :\n%s\n", cJSON_Print(jsonstatus_d3_version_info_1));
	status_d3_version_info_t* status_d3_version_info_2 = status_d3_version_info_parseFromJSON(jsonstatus_d3_version_info_1);
	cJSON* jsonstatus_d3_version_info_2 = status_d3_version_info_convertToJSON(status_d3_version_info_2);
	printf("repeating status_d3_version_info:\n%s\n", cJSON_Print(jsonstatus_d3_version_info_2));
}

int main() {
  test_status_d3_version_info(1);
  test_status_d3_version_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // status_d3_version_info_MAIN
#endif // status_d3_version_info_TEST

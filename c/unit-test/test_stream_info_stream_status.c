#ifndef stream_info_stream_status_TEST
#define stream_info_stream_status_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define stream_info_stream_status_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/stream_info_stream_status.h"
stream_info_stream_status_t* instantiate_stream_info_stream_status(int include_optional);



stream_info_stream_status_t* instantiate_stream_info_stream_status(int include_optional) {
  stream_info_stream_status_t* stream_info_stream_status = NULL;
  if (include_optional) {
    stream_info_stream_status = stream_info_stream_status_create(
    );
  } else {
    stream_info_stream_status = stream_info_stream_status_create(
    );
  }

  return stream_info_stream_status;
}


#ifdef stream_info_stream_status_MAIN

void test_stream_info_stream_status(int include_optional) {
    stream_info_stream_status_t* stream_info_stream_status_1 = instantiate_stream_info_stream_status(include_optional);

	cJSON* jsonstream_info_stream_status_1 = stream_info_stream_status_convertToJSON(stream_info_stream_status_1);
	printf("stream_info_stream_status :\n%s\n", cJSON_Print(jsonstream_info_stream_status_1));
	stream_info_stream_status_t* stream_info_stream_status_2 = stream_info_stream_status_parseFromJSON(jsonstream_info_stream_status_1);
	cJSON* jsonstream_info_stream_status_2 = stream_info_stream_status_convertToJSON(stream_info_stream_status_2);
	printf("repeating stream_info_stream_status:\n%s\n", cJSON_Print(jsonstream_info_stream_status_2));
}

int main() {
  test_stream_info_stream_status(1);
  test_stream_info_stream_status(0);

  printf("Hello world \n");
  return 0;
}

#endif // stream_info_stream_status_MAIN
#endif // stream_info_stream_status_TEST

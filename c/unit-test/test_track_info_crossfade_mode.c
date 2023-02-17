#ifndef track_info_crossfade_mode_TEST
#define track_info_crossfade_mode_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define track_info_crossfade_mode_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/track_info_crossfade_mode.h"
track_info_crossfade_mode_t* instantiate_track_info_crossfade_mode(int include_optional);



track_info_crossfade_mode_t* instantiate_track_info_crossfade_mode(int include_optional) {
  track_info_crossfade_mode_t* track_info_crossfade_mode = NULL;
  if (include_optional) {
    track_info_crossfade_mode = track_info_crossfade_mode_create(
    );
  } else {
    track_info_crossfade_mode = track_info_crossfade_mode_create(
    );
  }

  return track_info_crossfade_mode;
}


#ifdef track_info_crossfade_mode_MAIN

void test_track_info_crossfade_mode(int include_optional) {
    track_info_crossfade_mode_t* track_info_crossfade_mode_1 = instantiate_track_info_crossfade_mode(include_optional);

	cJSON* jsontrack_info_crossfade_mode_1 = track_info_crossfade_mode_convertToJSON(track_info_crossfade_mode_1);
	printf("track_info_crossfade_mode :\n%s\n", cJSON_Print(jsontrack_info_crossfade_mode_1));
	track_info_crossfade_mode_t* track_info_crossfade_mode_2 = track_info_crossfade_mode_parseFromJSON(jsontrack_info_crossfade_mode_1);
	cJSON* jsontrack_info_crossfade_mode_2 = track_info_crossfade_mode_convertToJSON(track_info_crossfade_mode_2);
	printf("repeating track_info_crossfade_mode:\n%s\n", cJSON_Print(jsontrack_info_crossfade_mode_2));
}

int main() {
  test_track_info_crossfade_mode(1);
  test_track_info_crossfade_mode(0);

  printf("Hello world \n");
  return 0;
}

#endif // track_info_crossfade_mode_MAIN
#endif // track_info_crossfade_mode_TEST

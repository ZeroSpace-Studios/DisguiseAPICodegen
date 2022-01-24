#ifndef content_mesh_metadata_TEST
#define content_mesh_metadata_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define content_mesh_metadata_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/content_mesh_metadata.h"
content_mesh_metadata_t* instantiate_content_mesh_metadata(int include_optional);

#include "test_content_vector3.c"
#include "test_content_vector3.c"
#include "test_content_vector3.c"


content_mesh_metadata_t* instantiate_content_mesh_metadata(int include_optional) {
  content_mesh_metadata_t* content_mesh_metadata = NULL;
  if (include_optional) {
    content_mesh_metadata = content_mesh_metadata_create(
      56,
      56,
       // false, not to have infinite recursion
      instantiate_content_vector3(0),
       // false, not to have infinite recursion
      instantiate_content_vector3(0),
       // false, not to have infinite recursion
      instantiate_content_vector3(0)
    );
  } else {
    content_mesh_metadata = content_mesh_metadata_create(
      56,
      56,
      NULL,
      NULL,
      NULL
    );
  }

  return content_mesh_metadata;
}


#ifdef content_mesh_metadata_MAIN

void test_content_mesh_metadata(int include_optional) {
    content_mesh_metadata_t* content_mesh_metadata_1 = instantiate_content_mesh_metadata(include_optional);

	cJSON* jsoncontent_mesh_metadata_1 = content_mesh_metadata_convertToJSON(content_mesh_metadata_1);
	printf("content_mesh_metadata :\n%s\n", cJSON_Print(jsoncontent_mesh_metadata_1));
	content_mesh_metadata_t* content_mesh_metadata_2 = content_mesh_metadata_parseFromJSON(jsoncontent_mesh_metadata_1);
	cJSON* jsoncontent_mesh_metadata_2 = content_mesh_metadata_convertToJSON(content_mesh_metadata_2);
	printf("repeating content_mesh_metadata:\n%s\n", cJSON_Print(jsoncontent_mesh_metadata_2));
}

int main() {
  test_content_mesh_metadata(1);
  test_content_mesh_metadata(0);

  printf("Hello world \n");
  return 0;
}

#endif // content_mesh_metadata_MAIN
#endif // content_mesh_metadata_TEST

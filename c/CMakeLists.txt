cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "d3_api")
set(VERSION 0.0.1) # this default version can be overridden in PreTarget.cmake

find_package(CURL 7.58.0 REQUIRED)
if(CURL_FOUND)
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else(CURL_FOUND)
    message(FATAL_ERROR "Could not find the CURL library and development files.")
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/cameracalibration_add_observation_request.c
    model/cameracalibration_camera_info.c
    model/cameracalibration_enable_observation_request.c
    model/cameracalibration_enable_observation_response.c
    model/cameracalibration_float3.c
    model/cameracalibration_get_mr_set_response.c
    model/cameracalibration_get_observation_progress_response.c
    model/cameracalibration_list_mr_sets_response.c
    model/cameracalibration_mr_set_info.c
    model/cameracalibration_observation_info.c
    model/cameracalibration_reset_all_observations_request.c
    model/content_audio_metadata.c
    model/content_get_media_metadata_response.c
    model/content_image_metadata.c
    model/content_image_sequence_metadata.c
    model/content_list_media_metadata_response.c
    model/content_media_metadata.c
    model/content_mesh_metadata.c
    model/content_resolution.c
    model/content_vector3.c
    model/content_video_metadata.c
    model/indirections_get_indirection_response.c
    model/indirections_indirection.c
    model/indirections_list_indirection.c
    model/indirections_list_indirections_response.c
    model/indirections_manual_indirection.c
    model/indirections_set_indirections_request.c
    model/indirections_set_indirections_response.c
    model/render_machine_info_status.c
    model/renderstream_adapter_info.c
    model/renderstream_asset_info.c
    model/renderstream_clipping_region.c
    model/renderstream_cluster_info.c
    model/renderstream_failover_info.c
    model/renderstream_failover_render_machine_response.c
    model/renderstream_failover_workload_instance_response.c
    model/renderstream_get_cluster_response.c
    model/renderstream_get_render_machine_response.c
    model/renderstream_get_workload_instance_response.c
    model/renderstream_get_workload_response.c
    model/renderstream_list_clusters_response.c
    model/renderstream_list_render_machines_response.c
    model/renderstream_list_workloads_response.c
    model/renderstream_render_machine_info.c
    model/renderstream_stream_info.c
    model/renderstream_workload_info.c
    model/renderstream_workload_instance_info.c
    model/resources_get_resource_response.c
    model/resources_list_resources_response.c
    model/resources_resource_info.c
    model/set_indirections_request_assignment.c
    model/set_indirections_response_failed_assignment.c
    model/stream_info_stream_status.c
    model/thumbnails_get_thumbnail_response.c
    model/workload_instance_info_workload_instance_status.c
    api/CameraCalibrationAPI.c
    api/ContentAPI.c
    api/IndirectionsAPI.c
    api/RenderstreamAPI.c
    api/ResourcesAPI.c
    api/ThumbnailsAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/cameracalibration_add_observation_request.h
    model/cameracalibration_camera_info.h
    model/cameracalibration_enable_observation_request.h
    model/cameracalibration_enable_observation_response.h
    model/cameracalibration_float3.h
    model/cameracalibration_get_mr_set_response.h
    model/cameracalibration_get_observation_progress_response.h
    model/cameracalibration_list_mr_sets_response.h
    model/cameracalibration_mr_set_info.h
    model/cameracalibration_observation_info.h
    model/cameracalibration_reset_all_observations_request.h
    model/content_audio_metadata.h
    model/content_get_media_metadata_response.h
    model/content_image_metadata.h
    model/content_image_sequence_metadata.h
    model/content_list_media_metadata_response.h
    model/content_media_metadata.h
    model/content_mesh_metadata.h
    model/content_resolution.h
    model/content_vector3.h
    model/content_video_metadata.h
    model/indirections_get_indirection_response.h
    model/indirections_indirection.h
    model/indirections_list_indirection.h
    model/indirections_list_indirections_response.h
    model/indirections_manual_indirection.h
    model/indirections_set_indirections_request.h
    model/indirections_set_indirections_response.h
    model/render_machine_info_status.h
    model/renderstream_adapter_info.h
    model/renderstream_asset_info.h
    model/renderstream_clipping_region.h
    model/renderstream_cluster_info.h
    model/renderstream_failover_info.h
    model/renderstream_failover_render_machine_response.h
    model/renderstream_failover_workload_instance_response.h
    model/renderstream_get_cluster_response.h
    model/renderstream_get_render_machine_response.h
    model/renderstream_get_workload_instance_response.h
    model/renderstream_get_workload_response.h
    model/renderstream_list_clusters_response.h
    model/renderstream_list_render_machines_response.h
    model/renderstream_list_workloads_response.h
    model/renderstream_render_machine_info.h
    model/renderstream_stream_info.h
    model/renderstream_workload_info.h
    model/renderstream_workload_instance_info.h
    model/resources_get_resource_response.h
    model/resources_list_resources_response.h
    model/resources_resource_info.h
    model/set_indirections_request_assignment.h
    model/set_indirections_response_failed_assignment.h
    model/stream_info_stream_status.h
    model/thumbnails_get_thumbnail_response.h
    model/workload_instance_info_workload_instance_status.h
    api/CameraCalibrationAPI.h
    api/ContentAPI.h
    api/IndirectionsAPI.h
    api/RenderstreamAPI.h
    api/ResourcesAPI.h
    api/ThumbnailsAPI.h

)

include(PreTarget.cmake OPTIONAL)

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX})
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION ${CMAKE_INSTALL_PREFIX} EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${VERSION}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-CameraCalibrationAPI.c
#    unit-tests/manual-ContentAPI.c
#    unit-tests/manual-IndirectionsAPI.c
#    unit-tests/manual-RenderstreamAPI.c
#    unit-tests/manual-ResourcesAPI.c
#    unit-tests/manual-ThumbnailsAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})

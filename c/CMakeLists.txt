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
    model/colour_cdl_info.c
    model/colour_list_cdls_response.c
    model/colour_set_cdl_request.c
    model/d3api_bool_response.c
    model/d3api_empty_response.c
    model/d3api_locator.c
    model/d3api_vec2_float.c
    model/d3api_vec3_float.c
    model/machine_info_machine_type.c
    model/mixedreality_camera_identity_info.c
    model/mixedreality_camera_info.c
    model/mixedreality_capture_observation_request.c
    model/mixedreality_delete_all_observations_request.c
    model/mixedreality_delete_observations_request.c
    model/mixedreality_enable_observation_params.c
    model/mixedreality_enable_observations_request.c
    model/mixedreality_get_cameras_response.c
    model/mixedreality_get_mr_sets_response.c
    model/mixedreality_list_spatial_calibrations_response.c
    model/mixedreality_mr_set.c
    model/mixedreality_mr_set_info.c
    model/mixedreality_observation_info.c
    model/mixedreality_observation_type.c
    model/mixedreality_pose.c
    model/mixedreality_select_camera_request.c
    model/mixedreality_select_spatial_calibration_request.c
    model/mixedreality_spatial_calibration_detailed.c
    model/mixedreality_spatial_calibration_info.c
    model/protobuf_any.c
    model/quickcal_line_up_current_pose_request.c
    model/quickcal_list_reference_points_response.c
    model/quickcal_reference_point_info.c
    model/quickcal_reset_line_up_request.c
    model/renderstream_adapter_info.c
    model/renderstream_asset.c
    model/renderstream_assigner.c
    model/renderstream_assigner_info.c
    model/renderstream_channel_mapping_info.c
    model/renderstream_failover_request.c
    model/renderstream_get_assigners_response.c
    model/renderstream_get_layer_config_response.c
    model/renderstream_get_layer_config_result.c
    model/renderstream_get_layer_status_response.c
    model/renderstream_get_layer_status_result.c
    model/renderstream_get_layers_response.c
    model/renderstream_get_pools_response.c
    model/renderstream_machine_info.c
    model/renderstream_mapping.c
    model/renderstream_network_info.c
    model/renderstream_pool.c
    model/renderstream_pool_info.c
    model/renderstream_reference_info.c
    model/renderstream_render_stream_info.c
    model/renderstream_restart_layers_request.c
    model/renderstream_start_layers_request.c
    model/renderstream_stop_layers_request.c
    model/renderstream_stream_info.c
    model/renderstream_stream_status.c
    model/renderstream_sync_layers_request.c
    model/renderstream_transport_info.c
    model/renderstream_workload_info.c
    model/renderstream_workload_instance_info.c
    model/rpc_status.c
    model/sequencing_change_indirections_request.c
    model/sequencing_indirection_change_assignment.c
    model/sequencing_indirection_resource.c
    model/sequencing_list_available_resources_response.c
    model/sequencing_list_indirection_item.c
    model/sequencing_list_indirections_response.c
    model/status_d3_version_info.c
    model/status_get_project_response.c
    model/status_get_project_result.c
    model/status_get_session_response.c
    model/status_get_session_result.c
    model/status_health_report.c
    model/status_health_states.c
    model/status_health_status.c
    model/status_list_health_response.c
    model/status_list_notifications_response.c
    model/status_machine_info.c
    model/status_notification.c
    model/status_notifications_report.c
    model/statusd3_machine.c
    model/track_info_crossfade_mode.c
    model/transport_annotation_info.c
    model/transport_api_play_mode.c
    model/transport_get_active_transport_response.c
    model/transport_go_to_frame_info.c
    model/transport_go_to_frame_request.c
    model/transport_go_to_next_prev_info.c
    model/transport_go_to_next_section_request.c
    model/transport_go_to_next_track_request.c
    model/transport_go_to_note_request.c
    model/transport_go_to_prev_section_request.c
    model/transport_go_to_prev_track_request.c
    model/transport_go_to_section_info.c
    model/transport_go_to_section_request.c
    model/transport_go_to_tag_info.c
    model/transport_go_to_tag_request.c
    model/transport_go_to_time_code_info.c
    model/transport_go_to_time_code_request.c
    model/transport_go_to_time_info.c
    model/transport_go_to_time_request.c
    model/transport_go_to_track_info.c
    model/transport_go_to_track_request.c
    model/transport_goto_note_info.c
    model/transport_list_annotations_response.c
    model/transport_list_annotations_result.c
    model/transport_list_set_lists_response.c
    model/transport_list_tracks_response.c
    model/transport_note_info.c
    model/transport_play_loop_section_request.c
    model/transport_play_request.c
    model/transport_play_section_request.c
    model/transport_return_to_start_request.c
    model/transport_section_info.c
    model/transport_set_brightness_info.c
    model/transport_set_brightness_request.c
    model/transport_set_engaged_info.c
    model/transport_set_engaged_request.c
    model/transport_set_list_info.c
    model/transport_set_volume_info.c
    model/transport_set_volume_request.c
    model/transport_stop_request.c
    model/transport_tag_info.c
    model/transport_tag_type.c
    model/transport_track_info.c
    model/transport_transport_info.c
    api/ColourAPI.c
    api/MixedRealityAPI.c
    api/QuickcalAPI.c
    api/RenderStreamAPI.c
    api/SequencingAPI.c
    api/StatusAPI.c
    api/TransportAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/colour_cdl_info.h
    model/colour_list_cdls_response.h
    model/colour_set_cdl_request.h
    model/d3api_bool_response.h
    model/d3api_empty_response.h
    model/d3api_locator.h
    model/d3api_vec2_float.h
    model/d3api_vec3_float.h
    model/machine_info_machine_type.h
    model/mixedreality_camera_identity_info.h
    model/mixedreality_camera_info.h
    model/mixedreality_capture_observation_request.h
    model/mixedreality_delete_all_observations_request.h
    model/mixedreality_delete_observations_request.h
    model/mixedreality_enable_observation_params.h
    model/mixedreality_enable_observations_request.h
    model/mixedreality_get_cameras_response.h
    model/mixedreality_get_mr_sets_response.h
    model/mixedreality_list_spatial_calibrations_response.h
    model/mixedreality_mr_set.h
    model/mixedreality_mr_set_info.h
    model/mixedreality_observation_info.h
    model/mixedreality_observation_type.h
    model/mixedreality_pose.h
    model/mixedreality_select_camera_request.h
    model/mixedreality_select_spatial_calibration_request.h
    model/mixedreality_spatial_calibration_detailed.h
    model/mixedreality_spatial_calibration_info.h
    model/protobuf_any.h
    model/quickcal_line_up_current_pose_request.h
    model/quickcal_list_reference_points_response.h
    model/quickcal_reference_point_info.h
    model/quickcal_reset_line_up_request.h
    model/renderstream_adapter_info.h
    model/renderstream_asset.h
    model/renderstream_assigner.h
    model/renderstream_assigner_info.h
    model/renderstream_channel_mapping_info.h
    model/renderstream_failover_request.h
    model/renderstream_get_assigners_response.h
    model/renderstream_get_layer_config_response.h
    model/renderstream_get_layer_config_result.h
    model/renderstream_get_layer_status_response.h
    model/renderstream_get_layer_status_result.h
    model/renderstream_get_layers_response.h
    model/renderstream_get_pools_response.h
    model/renderstream_machine_info.h
    model/renderstream_mapping.h
    model/renderstream_network_info.h
    model/renderstream_pool.h
    model/renderstream_pool_info.h
    model/renderstream_reference_info.h
    model/renderstream_render_stream_info.h
    model/renderstream_restart_layers_request.h
    model/renderstream_start_layers_request.h
    model/renderstream_stop_layers_request.h
    model/renderstream_stream_info.h
    model/renderstream_stream_status.h
    model/renderstream_sync_layers_request.h
    model/renderstream_transport_info.h
    model/renderstream_workload_info.h
    model/renderstream_workload_instance_info.h
    model/rpc_status.h
    model/sequencing_change_indirections_request.h
    model/sequencing_indirection_change_assignment.h
    model/sequencing_indirection_resource.h
    model/sequencing_list_available_resources_response.h
    model/sequencing_list_indirection_item.h
    model/sequencing_list_indirections_response.h
    model/status_d3_version_info.h
    model/status_get_project_response.h
    model/status_get_project_result.h
    model/status_get_session_response.h
    model/status_get_session_result.h
    model/status_health_report.h
    model/status_health_states.h
    model/status_health_status.h
    model/status_list_health_response.h
    model/status_list_notifications_response.h
    model/status_machine_info.h
    model/status_notification.h
    model/status_notifications_report.h
    model/statusd3_machine.h
    model/track_info_crossfade_mode.h
    model/transport_annotation_info.h
    model/transport_api_play_mode.h
    model/transport_get_active_transport_response.h
    model/transport_go_to_frame_info.h
    model/transport_go_to_frame_request.h
    model/transport_go_to_next_prev_info.h
    model/transport_go_to_next_section_request.h
    model/transport_go_to_next_track_request.h
    model/transport_go_to_note_request.h
    model/transport_go_to_prev_section_request.h
    model/transport_go_to_prev_track_request.h
    model/transport_go_to_section_info.h
    model/transport_go_to_section_request.h
    model/transport_go_to_tag_info.h
    model/transport_go_to_tag_request.h
    model/transport_go_to_time_code_info.h
    model/transport_go_to_time_code_request.h
    model/transport_go_to_time_info.h
    model/transport_go_to_time_request.h
    model/transport_go_to_track_info.h
    model/transport_go_to_track_request.h
    model/transport_goto_note_info.h
    model/transport_list_annotations_response.h
    model/transport_list_annotations_result.h
    model/transport_list_set_lists_response.h
    model/transport_list_tracks_response.h
    model/transport_note_info.h
    model/transport_play_loop_section_request.h
    model/transport_play_request.h
    model/transport_play_section_request.h
    model/transport_return_to_start_request.h
    model/transport_section_info.h
    model/transport_set_brightness_info.h
    model/transport_set_brightness_request.h
    model/transport_set_engaged_info.h
    model/transport_set_engaged_request.h
    model/transport_set_list_info.h
    model/transport_set_volume_info.h
    model/transport_set_volume_request.h
    model/transport_stop_request.h
    model/transport_tag_info.h
    model/transport_tag_type.h
    model/transport_track_info.h
    model/transport_transport_info.h
    api/ColourAPI.h
    api/MixedRealityAPI.h
    api/QuickcalAPI.h
    api/RenderStreamAPI.h
    api/SequencingAPI.h
    api/StatusAPI.h
    api/TransportAPI.h

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
#    unit-tests/manual-ColourAPI.c
#    unit-tests/manual-MixedRealityAPI.c
#    unit-tests/manual-QuickcalAPI.c
#    unit-tests/manual-RenderStreamAPI.c
#    unit-tests/manual-SequencingAPI.c
#    unit-tests/manual-StatusAPI.c
#    unit-tests/manual-TransportAPI.c
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

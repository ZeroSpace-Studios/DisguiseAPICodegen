#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/d3api_empty_response.h"
#include "../model/transport_get_active_transport_response.h"
#include "../model/transport_go_to_frame_request.h"
#include "../model/transport_go_to_next_section_request.h"
#include "../model/transport_go_to_next_track_request.h"
#include "../model/transport_go_to_note_request.h"
#include "../model/transport_go_to_prev_section_request.h"
#include "../model/transport_go_to_prev_track_request.h"
#include "../model/transport_go_to_section_request.h"
#include "../model/transport_go_to_tag_request.h"
#include "../model/transport_go_to_time_code_request.h"
#include "../model/transport_go_to_time_request.h"
#include "../model/transport_go_to_track_request.h"
#include "../model/transport_list_annotations_response.h"
#include "../model/transport_list_set_lists_response.h"
#include "../model/transport_list_tracks_response.h"
#include "../model/transport_play_loop_section_request.h"
#include "../model/transport_play_request.h"
#include "../model/transport_play_section_request.h"
#include "../model/transport_return_to_start_request.h"
#include "../model/transport_set_brightness_request.h"
#include "../model/transport_set_engaged_request.h"
#include "../model/transport_set_volume_request.h"
#include "../model/transport_stop_request.h"


// Get the active transport in the project. This is the transport selected in the d3State bar.
//
transport_get_active_transport_response_t*
TransportAPI_transportGetActiveTransports(apiClient_t *apiClient);


// Jump to the specific frame
//
d3api_empty_response_t*
TransportAPI_transportGoToFrame(apiClient_t *apiClient, transport_go_to_frame_request_t * body );


// Jump to the next section of the current track
//
d3api_empty_response_t*
TransportAPI_transportGoToNextSection(apiClient_t *apiClient, transport_go_to_next_section_request_t * body );


// Jump to the start of the next track
//
d3api_empty_response_t*
TransportAPI_transportGoToNextTrack(apiClient_t *apiClient, transport_go_to_next_track_request_t * body );


// Jump to a given note on a given transport
//
d3api_empty_response_t*
TransportAPI_transportGoToNote(apiClient_t *apiClient, transport_go_to_note_request_t * body );


// Jump to the previous section of the current track
//
d3api_empty_response_t*
TransportAPI_transportGoToPrevSection(apiClient_t *apiClient, transport_go_to_prev_section_request_t * body );


// Jump to the start of the previous track
//
d3api_empty_response_t*
TransportAPI_transportGoToPrevTrack(apiClient_t *apiClient, transport_go_to_prev_track_request_t * body );


// Jump to a given section on a given transport
//
d3api_empty_response_t*
TransportAPI_transportGoToSection(apiClient_t *apiClient, transport_go_to_section_request_t * body );


// Jump to a given tag on a given transport
//
d3api_empty_response_t*
TransportAPI_transportGoToTag(apiClient_t *apiClient, transport_go_to_tag_request_t * body );


// Jump to the specific time
//
d3api_empty_response_t*
TransportAPI_transportGoToTime(apiClient_t *apiClient, transport_go_to_time_request_t * body );


// Jump to a given time on a given transport
//
d3api_empty_response_t*
TransportAPI_transportGoToTimeCode(apiClient_t *apiClient, transport_go_to_time_code_request_t * body );


// Jump to the start of the given track
//
d3api_empty_response_t*
TransportAPI_transportGoToTrack(apiClient_t *apiClient, transport_go_to_track_request_t * body );


// List all annotations in the given Track
//
transport_list_annotations_response_t*
TransportAPI_transportListAnnotations(apiClient_t *apiClient, char * uid , char * name );


// List all SetLists in the project
//
transport_list_set_lists_response_t*
TransportAPI_transportListSetLists(apiClient_t *apiClient);


// List all tracks in the project
//
transport_list_tracks_response_t*
TransportAPI_transportListTracks(apiClient_t *apiClient);


// Play a transport (sets playmode to 'play')
//
d3api_empty_response_t*
TransportAPI_transportPlay(apiClient_t *apiClient, transport_play_request_t * body );


// Loop a section on a transport (sets playmode to 'loop section')
//
d3api_empty_response_t*
TransportAPI_transportPlayLoopSection(apiClient_t *apiClient, transport_play_loop_section_request_t * body );


// Play a section on a transport (sets playmode to 'play to end of section')
//
d3api_empty_response_t*
TransportAPI_transportPlaySection(apiClient_t *apiClient, transport_play_section_request_t * body );


// Return to start of a transport
//
d3api_empty_response_t*
TransportAPI_transportReturnToStart(apiClient_t *apiClient, transport_return_to_start_request_t * body );


// Set the brightness of the specified transport manager's current transport
//
d3api_empty_response_t*
TransportAPI_transportSetBrightness(apiClient_t *apiClient, transport_set_brightness_request_t * body );


// Set the engaged status of the current transport
//
d3api_empty_response_t*
TransportAPI_transportSetEngaged(apiClient_t *apiClient, transport_set_engaged_request_t * body );


// Set the volume of the current transport
//
d3api_empty_response_t*
TransportAPI_transportSetVolume(apiClient_t *apiClient, transport_set_volume_request_t * body );


// Stop a transport
//
d3api_empty_response_t*
TransportAPI_transportStop(apiClient_t *apiClient, transport_stop_request_t * body );



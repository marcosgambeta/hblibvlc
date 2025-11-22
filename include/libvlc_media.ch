//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta@outlook.com>
//

#ifndef VLC_LIBVLC_MEDIA_CH
#define VLC_LIBVLC_MEDIA_CH

// enum libvlc_meta_t
#define libvlc_meta_Title       0
#define libvlc_meta_Artist      1
#define libvlc_meta_Genre       2
#define libvlc_meta_Copyright   3
#define libvlc_meta_Album       4
#define libvlc_meta_TrackNumber 5
#define libvlc_meta_Description 6
#define libvlc_meta_Rating      7
#define libvlc_meta_Date        8
#define libvlc_meta_Setting     9
#define libvlc_meta_URL         10
#define libvlc_meta_Language    11
#define libvlc_meta_NowPlaying  12
#define libvlc_meta_Publisher   13
#define libvlc_meta_EncodedBy   14
#define libvlc_meta_ArtworkURL  15
#define libvlc_meta_TrackID     16
#define libvlc_meta_TrackTotal  17
#define libvlc_meta_Director    18
#define libvlc_meta_Season      19
#define libvlc_meta_Episode     20
#define libvlc_meta_ShowName    21
#define libvlc_meta_Actors      22
#define libvlc_meta_AlbumArtist 23
#define libvlc_meta_DiscNumber  24
#define libvlc_meta_DiscTotal   25

// enum libvlc_state_t
#define libvlc_NothingSpecial 0
#define libvlc_Opening        1
#define libvlc_Buffering      2 // deprecated
#define libvlc_Playing        3
#define libvlc_Paused         4
#define libvlc_Stopped        5
#define libvlc_Ended          6
#define libvlc_Error          7

// enum
#define libvlc_media_option_trusted 0x2
#define libvlc_media_option_unique  0x100

// enum libvlc_track_type_t
#define libvlc_track_unknown -1
#define libvlc_track_audio   0
#define libvlc_track_video   1
#define libvlc_track_text    2

// enum libvlc_video_orient_t
#define libvlc_video_orient_top_left     0 // Normal. Top line represents top, left column left.
#define libvlc_video_orient_top_right    1 // Flipped horizontally
#define libvlc_video_orient_bottom_left  2 // Flipped vertically
#define libvlc_video_orient_bottom_right 3 // Rotated 180 degrees
#define libvlc_video_orient_left_top     4 // Transposed
#define libvlc_video_orient_left_bottom  5 // Rotated 90 degrees clockwise (or 270 anti-clockwise)
#define libvlc_video_orient_right_top    6 // Rotated 90 degrees anti-clockwise
#define libvlc_video_orient_right_bottom 7 // Anti-transposed

// enum libvlc_video_projection_t
#define libvlc_video_projection_rectangular             0
#define libvlc_video_projection_equirectangular         1 // 360 spherical
#define libvlc_video_projection_cubemap_layout_standard 0x100

// enum libvlc_media_type_t
#define libvlc_media_type_unknown   0
#define libvlc_media_type_file      1
#define libvlc_media_type_directory 2
#define libvlc_media_type_disc      3
#define libvlc_media_type_stream    4
#define libvlc_media_type_playlist  5

// enum libvlc_media_parse_flag_t
// Parse media if it's a local file
#define libvlc_media_parse_local   0x00
// Parse media even if it's a network file
#define libvlc_media_parse_network 0x01
// Fetch meta and covert art using local resources
#define libvlc_media_fetch_local   0x02
// Fetch meta and covert art using network resources
#define libvlc_media_fetch_network 0x04
// Interact with the user (via libvlc_dialog_cbs) when preparsing this item
// (and not its sub items). Set this flag in order to receive a callback
// when the input is asking for credentials.
#define libvlc_media_do_interact   0x08

// enum libvlc_media_parsed_status_t
#define libvlc_media_parsed_status_skipped 1
#define libvlc_media_parsed_status_failed  2
#define libvlc_media_parsed_status_timeout 3
#define libvlc_media_parsed_status_done    4

// enum libvlc_media_slave_type_t
#define libvlc_media_slave_type_subtitle 0
#define libvlc_media_slave_type_audio    1

#endif // VLC_LIBVLC_MEDIA_CH

//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#ifndef VLC_LIBVLC_MEDIA_PLAYER_CH
#define VLC_LIBVLC_MEDIA_PLAYER_CH

// enum
#define libvlc_title_menu        0x01
#define libvlc_title_interactive 0x02

// enum libvlc_video_marquee_option_t
#define libvlc_marquee_Enable   0
#define libvlc_marquee_Text     1 // string argument
#define libvlc_marquee_Color    2
#define libvlc_marquee_Opacity  3
#define libvlc_marquee_Position 4
#define libvlc_marquee_Refresh  5
#define libvlc_marquee_Size     6
#define libvlc_marquee_Timeout  7
#define libvlc_marquee_X        8
#define libvlc_marquee_Y        9

// enum libvlc_navigate_mode_t
#define libvlc_navigate_activate 0
#define libvlc_navigate_up       1
#define libvlc_navigate_down     2
#define libvlc_navigate_left     3
#define libvlc_navigate_right    4
#define libvlc_navigate_popup    5

// enum libvlc_position_t
#define libvlc_position_disable      -1
#define libvlc_position_center       0
#define libvlc_position_left         1
#define libvlc_position_right        2
#define libvlc_position_top          3
#define libvlc_position_top_left     4
#define libvlc_position_top_right    5
#define libvlc_position_bottom       6
#define libvlc_position_bottom_left  7
#define libvlc_position_bottom_right 8

// enum libvlc_teletext_key_t
#define libvlc_teletext_key_red    HB_BitShift(asc("r"), 16)
#define libvlc_teletext_key_green  HB_BitShift(asc("g"), 16)
#define libvlc_teletext_key_yellow HB_BitShift(asc("y"), 16)
#define libvlc_teletext_key_blue   HB_BitShift(asc("b"), 16)
#define libvlc_teletext_key_index  HB_BitShift(asc("i"), 16)

// enum libvlc_video_logo_option_t
#define libvlc_logo_enable   0
#define libvlc_logo_file     1 // string argument, "file,d,t;file,d,t;..."
#define libvlc_logo_x        2
#define libvlc_logo_y        3
#define libvlc_logo_delay    4
#define libvlc_logo_repeat   5
#define libvlc_logo_opacity  6
#define libvlc_logo_position 7

// enum libvlc_video_adjust_option_t
#define libvlc_adjust_Enable     0
#define libvlc_adjust_Contrast   1
#define libvlc_adjust_Brightness 2
#define libvlc_adjust_Hue        3
#define libvlc_adjust_Saturation 4
#define libvlc_adjust_Gamma      5

// enum libvlc_audio_output_device_types_t
#define libvlc_AudioOutputDevice_Error  -1
#define libvlc_AudioOutputDevice_Mono   1
#define libvlc_AudioOutputDevice_Stereo 2
#define libvlc_AudioOutputDevice_2F2R   4
#define libvlc_AudioOutputDevice_3F2R   5
#define libvlc_AudioOutputDevice_5_1    6
#define libvlc_AudioOutputDevice_6_1    7
#define libvlc_AudioOutputDevice_7_1    8
#define libvlc_AudioOutputDevice_SPDIF  10

// enum libvlc_audio_output_channel_t
#define libvlc_AudioChannel_Error   -1
#define libvlc_AudioChannel_Stereo  1
#define libvlc_AudioChannel_RStereo 2
#define libvlc_AudioChannel_Left    3
#define libvlc_AudioChannel_Right   4
#define libvlc_AudioChannel_Dolbys  5

// enum libvlc_media_player_role
#define libvlc_role_None          0 // Don't use a media player role
#define libvlc_role_Music         1 // Music (or radio) playback
#define libvlc_role_Video         2 // Video playback
#define libvlc_role_Communication 3 // Speech, real-time communication
#define libvlc_role_Game          4 // Video game
#define libvlc_role_Notification  5 // User interaction feedback
#define libvlc_role_Animation     6 // Embedded animation (e.g. in web page)
#define libvlc_role_Production    7 // Audio editting/production
#define libvlc_role_Accessibility 8 // Accessibility
#define libvlc_role_Test          9 // Testing
#define libvlc_role_Last          libvlc_role_Test

#endif // VLC_LIBVLC_MEDIA_PLAYER_CH

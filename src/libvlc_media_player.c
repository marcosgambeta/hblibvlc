//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>

// LIBVLC_API libvlc_media_player_t * libvlc_media_player_new( libvlc_instance_t *p_libvlc_instance )
HB_FUNC(LIBVLC_MEDIA_PLAYER_NEW)
{
  hb_retptr((libvlc_media_player_t *)libvlc_media_player_new((libvlc_instance_t *)hb_parptr(1)));
}

// LIBVLC_API libvlc_media_player_t * libvlc_media_player_new_from_media( libvlc_media_t *p_md )

// LIBVLC_API void libvlc_media_player_release( libvlc_media_player_t *p_mi )
HB_FUNC(LIBVLC_MEDIA_PLAYER_RELEASE)
{
  libvlc_media_player_release((libvlc_media_player_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_player_retain( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_set_media( libvlc_media_player_t *p_mi, libvlc_media_t *p_md )
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_MEDIA)
{
  libvlc_media_player_set_media((libvlc_media_player_t *)hb_parptr(1), (libvlc_media_t *)hb_parptr(2));
}

// LIBVLC_API libvlc_media_t * libvlc_media_player_get_media( libvlc_media_player_t *p_mi )

// LIBVLC_API libvlc_event_manager_t * libvlc_media_player_event_manager ( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_is_playing ( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_play ( libvlc_media_player_t *p_mi )
HB_FUNC(LIBVLC_MEDIA_PLAYER_PLAY)
{
  hb_retni(libvlc_media_player_play((libvlc_media_player_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_player_set_pause ( libvlc_media_player_t *mp, int do_pause )

// LIBVLC_API void libvlc_media_player_pause ( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_stop ( libvlc_media_player_t *p_mi )
HB_FUNC(LIBVLC_MEDIA_PLAYER_STOP)
{
  libvlc_media_player_stop((libvlc_media_player_t *)hb_parptr(1));
}

// LIBVLC_API int libvlc_media_player_set_renderer( libvlc_media_player_t *p_mi, libvlc_renderer_item_t *p_item )

// LIBVLC_API void libvlc_video_set_callbacks( libvlc_media_player_t *mp, libvlc_video_lock_cb lock, libvlc_video_unlock_cb unlock, libvlc_video_display_cb display, void *opaque )

// LIBVLC_API void libvlc_video_set_format( libvlc_media_player_t *mp, const char *chroma, unsigned width, unsigned height, unsigned pitch )

// LIBVLC_API void libvlc_video_set_format_callbacks( libvlc_media_player_t *mp, libvlc_video_format_cb setup, libvlc_video_cleanup_cb cleanup )

// LIBVLC_API void libvlc_media_player_set_nsobject ( libvlc_media_player_t *p_mi, void * drawable )

// LIBVLC_API void * libvlc_media_player_get_nsobject ( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_set_xwindow(libvlc_media_player_t *p_mi, uint32_t drawable)

// LIBVLC_API uint32_t libvlc_media_player_get_xwindow ( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_set_hwnd ( libvlc_media_player_t *p_mi, void *drawable )
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_HWND)
{
  libvlc_media_player_set_hwnd((libvlc_media_player_t *)hb_parptr(1), (void *)hb_parptr(2));
}

// LIBVLC_API void *libvlc_media_player_get_hwnd ( libvlc_media_player_t *p_mi )
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_HWND)
{
  hb_retptr((void *)libvlc_media_player_get_hwnd((libvlc_media_player_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_player_set_android_context( libvlc_media_player_t *p_mi, void *p_awindow_handler )

// LIBVLC_API int libvlc_media_player_set_evas_object( libvlc_media_player_t *p_mi, void *p_evas_object )

// LIBVLC_API
// void libvlc_audio_set_callbacks( libvlc_media_player_t *mp, libvlc_audio_play_cb play, libvlc_audio_pause_cb pause, libvlc_audio_resume_cb resume, libvlc_audio_flush_cb flush, libvlc_audio_drain_cb drain, void *opaque )

// LIBVLC_API void libvlc_audio_set_volume_callback( libvlc_media_player_t *mp, libvlc_audio_set_volume_cb set_volume )

// LIBVLC_API void libvlc_audio_set_format_callbacks( libvlc_media_player_t *mp, libvlc_audio_setup_cb setup, libvlc_audio_cleanup_cb cleanup )

// LIBVLC_API void libvlc_audio_set_format( libvlc_media_player_t *mp, const char *format, unsigned rate, unsigned channels )

// LIBVLC_API libvlc_time_t libvlc_media_player_get_length( libvlc_media_player_t *p_mi )

// LIBVLC_API libvlc_time_t libvlc_media_player_get_time( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_set_time( libvlc_media_player_t *p_mi, libvlc_time_t i_time )

// LIBVLC_API float libvlc_media_player_get_position( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_set_position( libvlc_media_player_t *p_mi, float f_pos )

// LIBVLC_API void libvlc_media_player_set_chapter( libvlc_media_player_t *p_mi, int i_chapter )

// LIBVLC_API int libvlc_media_player_get_chapter( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_get_chapter_count( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_will_play( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_get_chapter_count_for_title(libvlc_media_player_t *p_mi, int i_title )

// LIBVLC_API void libvlc_media_player_set_title( libvlc_media_player_t *p_mi, int i_title )

// LIBVLC_API int libvlc_media_player_get_title( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_get_title_count( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_previous_chapter( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_next_chapter( libvlc_media_player_t *p_mi )

// LIBVLC_API float libvlc_media_player_get_rate( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_set_rate( libvlc_media_player_t *p_mi, float rate )

// LIBVLC_API libvlc_state_t libvlc_media_player_get_state( libvlc_media_player_t *p_mi )

// LIBVLC_API unsigned libvlc_media_player_has_vout( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_is_seekable( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_can_pause( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_media_player_program_scrambled( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_next_frame( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_media_player_navigate( libvlc_media_player_t* p_mi, unsigned navigate )

// LIBVLC_API void libvlc_media_player_set_video_title_display( libvlc_media_player_t *p_mi, libvlc_position_t position, unsigned int timeout )

// LIBVLC_API int libvlc_media_player_add_slave( libvlc_media_player_t *p_mi, libvlc_media_slave_type_t i_type, const char *psz_uri, bool b_select )

// LIBVLC_API void libvlc_track_description_list_release( libvlc_track_description_t *p_track_description )

// LIBVLC_API void libvlc_toggle_fullscreen( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_set_fullscreen( libvlc_media_player_t *p_mi, int b_fullscreen )

// LIBVLC_API int libvlc_get_fullscreen( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_video_set_key_input( libvlc_media_player_t *p_mi, unsigned on )

// LIBVLC_API void libvlc_video_set_mouse_input( libvlc_media_player_t *p_mi, unsigned on )

// LIBVLC_API int libvlc_video_get_size( libvlc_media_player_t *p_mi, unsigned num, unsigned *px, unsigned *py )

// LIBVLC_API int libvlc_video_get_cursor( libvlc_media_player_t *p_mi, unsigned num, int *px, int *py )

// LIBVLC_API float libvlc_video_get_scale( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_video_set_scale( libvlc_media_player_t *p_mi, float f_factor )

// LIBVLC_API char *libvlc_video_get_aspect_ratio( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_video_set_aspect_ratio( libvlc_media_player_t *p_mi, const char *psz_aspect )

// LIBVLC_API libvlc_video_viewpoint_t *libvlc_video_new_viewpoint(void)

// LIBVLC_API int libvlc_video_update_viewpoint( libvlc_media_player_t *p_mi, const libvlc_video_viewpoint_t *p_viewpoint, bool b_absolute)

// LIBVLC_API int libvlc_video_get_spu( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_video_get_spu_count( libvlc_media_player_t *p_mi )

// LIBVLC_API libvlc_track_description_t * libvlc_video_get_spu_description( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_video_set_spu( libvlc_media_player_t *p_mi, int i_spu )

// LIBVLC_API int64_t libvlc_video_get_spu_delay( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_video_set_spu_delay( libvlc_media_player_t *p_mi, int64_t i_delay )

// LIBVLC_API int libvlc_media_player_get_full_title_descriptions( libvlc_media_player_t *p_mi, libvlc_title_description_t ***titles )

// LIBVLC_API void libvlc_title_descriptions_release( libvlc_title_description_t **p_titles, unsigned i_count )

// LIBVLC_API int libvlc_media_player_get_full_chapter_descriptions( libvlc_media_player_t *p_mi, int i_chapters_of_title, libvlc_chapter_description_t *** pp_chapters )

// LIBVLC_API void libvlc_chapter_descriptions_release( libvlc_chapter_description_t **p_chapters, unsigned i_count );

// LIBVLC_API char *libvlc_video_get_crop_geometry( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_video_set_crop_geometry( libvlc_media_player_t *p_mi, const char *psz_geometry )

// LIBVLC_API int libvlc_video_get_teletext( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_video_set_teletext( libvlc_media_player_t *p_mi, int i_page )

// LIBVLC_API int libvlc_video_get_track_count( libvlc_media_player_t *p_mi )

// LIBVLC_API libvlc_track_description_t * libvlc_video_get_track_description( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_video_get_track( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_video_set_track( libvlc_media_player_t *p_mi, int i_track )

// LIBVLC_API int libvlc_video_take_snapshot( libvlc_media_player_t *p_mi, unsigned num, const char *psz_filepath, unsigned int i_width, unsigned int i_height )

// LIBVLC_API void libvlc_video_set_deinterlace( libvlc_media_player_t *p_mi, const char *psz_mode )

// LIBVLC_API int libvlc_video_get_marquee_int( libvlc_media_player_t *p_mi, unsigned option )

// LIBVLC_API char *libvlc_video_get_marquee_string( libvlc_media_player_t *p_mi, unsigned option )

// LIBVLC_API void libvlc_video_set_marquee_int( libvlc_media_player_t *p_mi, unsigned option, int i_val )

// LIBVLC_API void libvlc_video_set_marquee_string( libvlc_media_player_t *p_mi, unsigned option, const char *psz_text )

// LIBVLC_API int libvlc_video_get_logo_int( libvlc_media_player_t *p_mi, unsigned option )

// LIBVLC_API void libvlc_video_set_logo_int( libvlc_media_player_t *p_mi, unsigned option, int value )

// LIBVLC_API void libvlc_video_set_logo_string( libvlc_media_player_t *p_mi, unsigned option, const char *psz_value )

// LIBVLC_API int libvlc_video_get_adjust_int( libvlc_media_player_t *p_mi, unsigned option )

// LIBVLC_API void libvlc_video_set_adjust_int( libvlc_media_player_t *p_mi, unsigned option, int value )

// LIBVLC_API float libvlc_video_get_adjust_float( libvlc_media_player_t *p_mi, unsigned option )

// LIBVLC_API void libvlc_video_set_adjust_float( libvlc_media_player_t *p_mi, unsigned option, float value )

// LIBVLC_API libvlc_audio_output_t * libvlc_audio_output_list_get( libvlc_instance_t *p_instance )

// LIBVLC_API void libvlc_audio_output_list_release( libvlc_audio_output_t *p_list )

// LIBVLC_API int libvlc_audio_output_set( libvlc_media_player_t *p_mi, const char *psz_name )

// LIBVLC_API libvlc_audio_output_device_t * libvlc_audio_output_device_enum( libvlc_media_player_t *mp )

// LIBVLC_API libvlc_audio_output_device_t * libvlc_audio_output_device_list_get( libvlc_instance_t *p_instance, const char *aout )

// LIBVLC_API void libvlc_audio_output_device_list_release(libvlc_audio_output_device_t *p_list )

// LIBVLC_API void libvlc_audio_output_device_set( libvlc_media_player_t *mp, const char *module, const char *device_id )

// LIBVLC_API char *libvlc_audio_output_device_get( libvlc_media_player_t *mp )

// LIBVLC_API void libvlc_audio_toggle_mute( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_get_mute( libvlc_media_player_t *p_mi )

// LIBVLC_API void libvlc_audio_set_mute( libvlc_media_player_t *p_mi, int status )

// LIBVLC_API int libvlc_audio_get_volume( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_set_volume( libvlc_media_player_t *p_mi, int i_volume )

// LIBVLC_API int libvlc_audio_get_track_count( libvlc_media_player_t *p_mi );

// LIBVLC_API libvlc_track_description_t * libvlc_audio_get_track_description( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_get_track( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_set_track( libvlc_media_player_t *p_mi, int i_track )

// LIBVLC_API int libvlc_audio_get_channel( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_set_channel( libvlc_media_player_t *p_mi, int channel )

// LIBVLC_API int64_t libvlc_audio_get_delay( libvlc_media_player_t *p_mi )

// LIBVLC_API int libvlc_audio_set_delay( libvlc_media_player_t *p_mi, int64_t i_delay )

// LIBVLC_API unsigned libvlc_audio_equalizer_get_preset_count( void )

// LIBVLC_API const char *libvlc_audio_equalizer_get_preset_name( unsigned u_index )

// LIBVLC_API unsigned libvlc_audio_equalizer_get_band_count( void )

// LIBVLC_API float libvlc_audio_equalizer_get_band_frequency( unsigned u_index )

// LIBVLC_API libvlc_equalizer_t *libvlc_audio_equalizer_new( void )

// LIBVLC_API libvlc_equalizer_t *libvlc_audio_equalizer_new_from_preset( unsigned u_index )

// LIBVLC_API void libvlc_audio_equalizer_release( libvlc_equalizer_t *p_equalizer )

// LIBVLC_API int libvlc_audio_equalizer_set_preamp( libvlc_equalizer_t *p_equalizer, float f_preamp )

// LIBVLC_API float libvlc_audio_equalizer_get_preamp( libvlc_equalizer_t *p_equalizer )

// LIBVLC_API int libvlc_audio_equalizer_set_amp_at_index( libvlc_equalizer_t *p_equalizer, float f_amp, unsigned u_band )

// LIBVLC_API float libvlc_audio_equalizer_get_amp_at_index( libvlc_equalizer_t *p_equalizer, unsigned u_band )

// LIBVLC_API int libvlc_media_player_set_equalizer( libvlc_media_player_t *p_mi, libvlc_equalizer_t *p_equalizer )

// LIBVLC_API int libvlc_media_player_get_role(libvlc_media_player_t *p_mi)

// LIBVLC_API int libvlc_media_player_set_role(libvlc_media_player_t *p_mi, unsigned role)

//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>

#define libvlc_instance_par(n) (libvlc_instance_t *)hb_parptr(n)

// LIBVLC_API libvlc_media_t *libvlc_media_new_location(libvlc_instance_t *p_instance, const char * psz_mrl )
HB_FUNC(LIBVLC_MEDIA_NEW_LOCATION)
{
  hb_retptr((libvlc_media_t *)libvlc_media_new_location(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API libvlc_media_t *libvlc_media_new_path(libvlc_instance_t *p_instance, const char *path)

// LIBVLC_API libvlc_media_t *libvlc_media_new_fd(libvlc_instance_t *p_instance, int fd)

// LIBVLC_API libvlc_media_t *libvlc_media_new_callbacks(libvlc_instance_t *instance, libvlc_media_open_cb open_cb, libvlc_media_read_cb read_cb, libvlc_media_seek_cb seek_cb, libvlc_media_close_cb close_cb, void *opaque)

// LIBVLC_API libvlc_media_t *libvlc_media_new_as_node(libvlc_instance_t *p_instance, const char *psz_name)

// LIBVLC_API void libvlc_media_add_option(libvlc_media_t *p_md, const char * psz_options)

// LIBVLC_API void libvlc_media_add_option_flag(libvlc_media_t *p_md, const char * psz_options, unsigned i_flags)

// LIBVLC_API void libvlc_media_retain( libvlc_media_t *p_md )

// LIBVLC_API void libvlc_media_release( libvlc_media_t *p_md )
HB_FUNC(LIBVLC_MEDIA_RELEASE)
{
  libvlc_media_release((libvlc_media_t *)hb_parptr(1));
}

// LIBVLC_API char *libvlc_media_get_mrl( libvlc_media_t *p_md )

// LIBVLC_API libvlc_media_t *libvlc_media_duplicate( libvlc_media_t *p_md )

// LIBVLC_API char *libvlc_media_get_meta( libvlc_media_t *p_md, libvlc_meta_t e_meta )

// LIBVLC_API void libvlc_media_set_meta( libvlc_media_t *p_md, libvlc_meta_t e_meta, const char *psz_value )

// LIBVLC_API int libvlc_media_save_meta( libvlc_media_t *p_md )

// LIBVLC_API libvlc_state_t libvlc_media_get_state( libvlc_media_t *p_md )

// LIBVLC_API int libvlc_media_get_stats( libvlc_media_t *p_md, libvlc_media_stats_t *p_stats )

// LIBVLC_API VLC_FORWARD_DECLARE_OBJECT(libvlc_media_list_t *) libvlc_media_subitems( libvlc_media_t *p_md )

// LIBVLC_API libvlc_event_manager_t * libvlc_media_event_manager( libvlc_media_t *p_md )

// LIBVLC_API libvlc_time_t libvlc_media_get_duration( libvlc_media_t *p_md )

// LIBVLC_API int libvlc_media_parse_with_options( libvlc_media_t *p_md, libvlc_media_parse_flag_t parse_flag, int timeout )

// LIBVLC_API void libvlc_media_parse_stop( libvlc_media_t *p_md )

// LIBVLC_API libvlc_media_parsed_status_t libvlc_media_get_parsed_status( libvlc_media_t *p_md )

// LIBVLC_API void libvlc_media_set_user_data( libvlc_media_t *p_md, void *p_new_user_data )

// LIBVLC_API void *libvlc_media_get_user_data( libvlc_media_t *p_md )

// LIBVLC_API unsigned libvlc_media_tracks_get( libvlc_media_t *p_md, libvlc_media_track_t ***tracks )

// LIBVLC_API const char *libvlc_media_get_codec_description( libvlc_track_type_t i_type, uint32_t i_codec )

// LIBVLC_API void libvlc_media_tracks_release( libvlc_media_track_t **p_tracks, unsigned i_count )

// LIBVLC_API libvlc_media_type_t libvlc_media_get_type( libvlc_media_t *p_md )

// LIBVLC_API int libvlc_media_slaves_add( libvlc_media_t *p_md, libvlc_media_slave_type_t i_type, unsigned int i_priority, const char *psz_uri )

// LIBVLC_API void libvlc_media_slaves_clear( libvlc_media_t *p_md )

// LIBVLC_API unsigned int libvlc_media_slaves_get( libvlc_media_t *p_md, libvlc_media_slave_t ***ppp_slaves )

// LIBVLC_API void libvlc_media_slaves_release( libvlc_media_slave_t **pp_slaves, unsigned int i_count )

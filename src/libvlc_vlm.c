//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>

#define libvlc_instance_par(n) (libvlc_instance_t *)hb_parptr(n)

// LIBVLC_API void libvlc_vlm_release( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_VLM_RELEASE)
{
  libvlc_vlm_release(libvlc_instance_par(1));
}

// LIBVLC_API int libvlc_vlm_add_broadcast( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input, const char *psz_output, int i_options, const char * const* ppsz_options, int b_enabled, int b_loop )
#if 0
HB_FUNC(LIBVLC_VLM_ADD_BROADCAST)
{
  hb_retni(libvlc_vlm_add_broadcast(libvlc_instance_par(1), hb_parc(2), hb_parc(3), hb_parc(4), hb_parni(5), hb_parc(6), hb_parni(7), hb_parni(8)));
}
#endif

// LIBVLC_API int libvlc_vlm_add_vod( libvlc_instance_t * p_instance, const char *psz_name, const char *psz_input, int i_options, const char * const* ppsz_options, int b_enabled, const char *psz_mux )
#if 0
HB_FUNC(LIBVLC_VLM_ADD_VOD)
{
  hb_retni(libvlc_vlm_add_vod(libvlc_instance_par(1), hb_parc(2), hb_parc(3), hb_parni(4), hb_parc(5), hb_parni(6), hb_parc(7)));
}
#endif

// LIBVLC_API int libvlc_vlm_del_media( libvlc_instance_t * p_instance, const char *psz_name )
HB_FUNC(LIBVLC_VLM_DEL_MEDIA)
{
  hb_retni(libvlc_vlm_del_media(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API int libvlc_vlm_set_enabled( libvlc_instance_t *p_instance, const char *psz_name, int b_enabled )
HB_FUNC(LIBVLC_VLM_SET_ENABLED)
{
  hb_retni(libvlc_vlm_set_enabled(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

// LIBVLC_API int libvlc_vlm_set_output( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_output )
HB_FUNC(LIBVLC_VLM_SET_OUTPUT)
{
  hb_retni(libvlc_vlm_set_output(libvlc_instance_par(1), hb_parc(2), hb_parc(3)));
}

// LIBVLC_API int libvlc_vlm_set_input( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input )
HB_FUNC(LIBVLC_VLM_SET_INPUT)
{
  hb_retni(libvlc_vlm_set_input(libvlc_instance_par(1), hb_parc(2), hb_parc(3)));
}

// LIBVLC_API int libvlc_vlm_add_input( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input )
HB_FUNC(LIBVLC_VLM_ADD_INPUT)
{
  hb_retni(libvlc_vlm_add_input(libvlc_instance_par(1), hb_parc(3), hb_parc(4)));
}

// LIBVLC_API int libvlc_vlm_set_loop( libvlc_instance_t *p_instance, const char *psz_name, int b_loop )
HB_FUNC(LIBVLC_VLM_SET_LOOP)
{
  hb_retni(libvlc_vlm_set_loop(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

// LIBVLC_API int libvlc_vlm_set_mux( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_mux )
HB_FUNC(LIBVLC_VLM_SET_MUX)
{
  hb_retni(libvlc_vlm_set_mux(libvlc_instance_par(1), hb_parc(2), hb_parc(3)));
}

// LIBVLC_API int libvlc_vlm_change_media( libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input, const char *psz_output, int i_options, const char * const *ppsz_options, int b_enabled, int b_loop )
#if 0
HB_FUNC(LIBVLC_VLM_CHANGE_MEDIA)
{
  hb_retni(libvlc_vlm_change_media(libvlc_instance_par(1), hb_parc(2), hb_parc(3), hb_parc(4), hb_parni(5), hb_parc(6), hb_parni(7), hb_parni(8)));
}
#endif

// LIBVLC_API int libvlc_vlm_play_media ( libvlc_instance_t *p_instance, const char *psz_name )
HB_FUNC(LIBVLC_VLM_PLAY_MEDIA)
{
  hb_retni(libvlc_vlm_play_media(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API int libvlc_vlm_stop_media ( libvlc_instance_t *p_instance, const char *psz_name )
HB_FUNC(LIBVLC_VLM_STOP_MEDIA)
{
  hb_retni(libvlc_vlm_stop_media(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API int libvlc_vlm_pause_media( libvlc_instance_t *p_instance, const char *psz_name )
HB_FUNC(LIBVLC_VLM_PAUSE_MEDIA)
{
  hb_retni(libvlc_vlm_pause_media(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API int libvlc_vlm_seek_media( libvlc_instance_t *p_instance, const char *psz_name, float f_percentage )
HB_FUNC(LIBVLC_VLM_SEEK_MEDIA)
{
  hb_retni(libvlc_vlm_seek_media(libvlc_instance_par(1), hb_parc(2), (float)hb_parnd(3)));
}

// LIBVLC_API const char* libvlc_vlm_show_media( libvlc_instance_t *p_instance, const char *psz_name )
HB_FUNC(LIBVLC_VLM_SHOW_MEDIA)
{
  hb_retc((const char *)libvlc_vlm_show_media(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API float libvlc_vlm_get_media_instance_position( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_POSITION)
{
  hb_retnd((float)libvlc_vlm_get_media_instance_position(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

// LIBVLC_API int libvlc_vlm_get_media_instance_time( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_TIME)
{
  hb_retni(libvlc_vlm_get_media_instance_time(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

// LIBVLC_API int libvlc_vlm_get_media_instance_length( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_LENGTH)
{
  hb_retni(libvlc_vlm_get_media_instance_length(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

// LIBVLC_API int libvlc_vlm_get_media_instance_rate( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_RATE)
{
  hb_retni(libvlc_vlm_get_media_instance_rate(libvlc_instance_par(1), hb_parc(2), hb_parni(3)));
}

#if 0
// LIBVLC_API int libvlc_vlm_get_media_instance_title( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
// LIBVLC_API int libvlc_vlm_get_media_instance_chapter( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
// LIBVLC_API int libvlc_vlm_get_media_instance_seekable( libvlc_instance_t *p_instance, const char *psz_name, int i_instance )
#endif

// LIBVLC_API libvlc_event_manager_t * libvlc_vlm_get_event_manager( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_VLM_GET_EVENT_MANAGER)
{
  hb_retptr((libvlc_event_manager_t *)libvlc_vlm_get_event_manager(libvlc_instance_par(1)));
}

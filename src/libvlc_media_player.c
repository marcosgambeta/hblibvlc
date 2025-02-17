//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_player_t * libvlc_media_player_new(libvlc_instance_t *p_libvlc_instance)
HB_FUNC(LIBVLC_MEDIA_PLAYER_NEW)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media_player(libvlc_media_player_new(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_player_t * libvlc_media_player_new_from_media(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_PLAYER_NEW_FROM_MEDIA)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media_player(libvlc_media_player_new_from_media(libvlc_par_media(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_release(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_release(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_retain(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_RETAIN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_retain(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_media(libvlc_media_player_t *p_mi, libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_player_set_media(libvlc_par_media_player(1), libvlc_par_media(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t * libvlc_media_player_get_media(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_MEDIA)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media(libvlc_media_player_get_media(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_event_manager_t * libvlc_media_player_event_manager(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_event_manager(libvlc_media_player_event_manager(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_is_playing(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_IS_PLAYING)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_is_playing(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_play(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_PLAY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_play(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_pause(libvlc_media_player_t *mp, int do_pause)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_PAUSE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_pause(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_pause(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_PAUSE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_pause(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_stop(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_STOP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_stop(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_set_renderer(libvlc_media_player_t *p_mi, libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_RENDERER)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_player_set_renderer(libvlc_par_media_player(1), libvlc_par_renderer_item(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_callbacks(libvlc_media_player_t *mp, libvlc_video_lock_cb lock, libvlc_video_unlock_cb unlock, libvlc_video_display_cb display, void *opaque)

// LIBVLC_API void libvlc_video_set_format(libvlc_media_player_t *mp, const char *chroma, unsigned width, unsigned height, unsigned pitch)
HB_FUNC(LIBVLC_VIDEO_SET_FORMAT)
{
  if (hb_pcount() == 5)
  {
    libvlc_video_set_format(libvlc_par_media_player(1), hb_parc(2), libvlc_par_unsigned(3), libvlc_par_unsigned(4), libvlc_par_unsigned(5));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_format_callbacks(libvlc_media_player_t *mp, libvlc_video_format_cb setup, libvlc_video_cleanup_cb cleanup)

// LIBVLC_API void libvlc_media_player_set_nsobject(libvlc_media_player_t *p_mi, void * drawable)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_NSOBJECT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_player_set_nsobject(libvlc_par_media_player(1), (void *)hb_parptr(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void * libvlc_media_player_get_nsobject(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_NSOBJECT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_voidptr(libvlc_media_player_get_nsobject(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_xwindow(libvlc_media_player_t *p_mi, uint32_t drawable)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_XWINDOW)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_xwindow(libvlc_par_media_player(1), (uint32_t)hb_parni(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API uint32_t libvlc_media_player_get_xwindow(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_XWINDOW)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retni((uint32_t)libvlc_media_player_get_xwindow(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_hwnd(libvlc_media_player_t *p_mi, void *drawable)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_HWND)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && (HB_ISPOINTER(2) || HB_ISNUM(2)))
  {
    libvlc_media_player_set_hwnd(libvlc_par_media_player(1), HB_ISPOINTER(2) ? (void *)hb_parptr(2) : (void *)hb_parnint(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void *libvlc_media_player_get_hwnd(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_HWND)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_voidptr(libvlc_media_player_get_hwnd(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_android_context(libvlc_media_player_t *p_mi, void *p_awindow_handler)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_ANDROID_CONTEXT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_player_set_android_context(libvlc_par_media_player(1), (void *)hb_parptr(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_set_evas_object(libvlc_media_player_t *p_mi, void *p_evas_object)
#if 0
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_EVAS_OBJECT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_player_set_evas_object(libvlc_par_media_player(1), (void *)hb_parptr(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_audio_set_callbacks(libvlc_media_player_t *mp, libvlc_audio_play_cb play, libvlc_audio_pause_cb pause, libvlc_audio_resume_cb resume, libvlc_audio_flush_cb flush, libvlc_audio_drain_cb drain, void *opaque)

// LIBVLC_API void libvlc_audio_set_volume_callback(libvlc_media_player_t *mp, libvlc_audio_set_volume_cb set_volume)

// LIBVLC_API void libvlc_audio_set_format_callbacks(libvlc_media_player_t *mp, libvlc_audio_setup_cb setup, libvlc_audio_cleanup_cb cleanup)

// LIBVLC_API void libvlc_audio_set_format(libvlc_media_player_t *mp, const char *format, unsigned rate, unsigned channels)
HB_FUNC(LIBVLC_AUDIO_SET_FORMAT)
{
  if (hb_pcount() == 4)
  {
    libvlc_audio_set_format(libvlc_par_media_player(1), hb_parc(2), libvlc_par_unsigned(3), libvlc_par_unsigned(4));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_time_t libvlc_media_player_get_length(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_LENGTH)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retnl((libvlc_time_t)libvlc_media_player_get_length(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_time_t libvlc_media_player_get_time(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_TIME)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retnl((libvlc_time_t)libvlc_media_player_get_time(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_time(libvlc_media_player_t *p_mi, libvlc_time_t i_time)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_TIME)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_time(libvlc_par_media_player(1), (libvlc_time_t)hb_parnl(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_media_player_get_position(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_POSITION)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_float(libvlc_media_player_get_position(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_position(libvlc_media_player_t *p_mi, float f_pos)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_POSITION)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_position(libvlc_par_media_player(1), libvlc_par_float(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_chapter(libvlc_media_player_t *p_mi, int i_chapter)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_CHAPTER)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_chapter(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_chapter(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_CHAPTER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_get_chapter(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_chapter_count(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_CHAPTER_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_get_chapter_count(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_will_play(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_WILL_PLAY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_will_play(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_chapter_count_for_title(libvlc_media_player_t *p_mi, int i_title)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_CHAPTER_COUNT_FOR_TITLE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_media_player_get_chapter_count_for_title(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_title(libvlc_media_player_t *p_mi, int i_title)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_TITLE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_set_title(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_title(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_TITLE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_get_title(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_title_count(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_TITLE_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_get_title_count(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_previous_chapter(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_PREVIOUS_CHAPTER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_previous_chapter(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_next_chapter(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_NEXT_CHAPTER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_next_chapter(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_media_player_get_rate(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_RATE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_float(libvlc_media_player_get_rate(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_set_rate(libvlc_media_player_t *p_mi, float rate)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_RATE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_media_player_set_rate(libvlc_par_media_player(1), libvlc_par_float(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_state_t libvlc_media_player_get_state(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_STATE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retni((libvlc_state_t)libvlc_media_player_get_state(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API unsigned libvlc_media_player_has_vout(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_HAS_VOUT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_unsigned(libvlc_media_player_has_vout(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_is_seekable(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_IS_SEEKABLE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_is_seekable(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_can_pause(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_CAN_PAUSE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_can_pause(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_program_scrambled(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_PROGRAM_SCRAMBLED)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_program_scrambled(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_next_frame(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_NEXT_FRAME)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_player_next_frame(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_navigate(libvlc_media_player_t* p_mi, unsigned navigate)
HB_FUNC(LIBVLC_MEDIA_PLAYER_NAVIGATE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_player_navigate((libvlc_media_player_t*)hb_parptr(1), libvlc_par_unsigned(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_player_set_video_title_display(libvlc_media_player_t *p_mi, libvlc_position_t position, unsigned int timeout)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_VIDEO_TITLE_DISPLAY)
{
  if (hb_pcount() == 3)
  {
    libvlc_media_player_set_video_title_display(libvlc_par_media_player(1), (libvlc_position_t)hb_parni(2), (unsigned int)hb_parni(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_add_slave(libvlc_media_player_t *p_mi, libvlc_media_slave_type_t i_type, const char *psz_uri, bool b_select)
#if 0
HB_FUNC(LIBVLC_MEDIA_PLAYER_ADD_SLAVE)
{
  if (hb_pcount() == 4)
  {
    libvlc_ret_int(libvlc_media_player_add_slave(libvlc_par_media_player(1), (libvlc_media_slave_type_t)hb_parni(2), hb_parc(3), (bool)hb_parl(4)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_track_description_list_release(libvlc_track_description_t *p_track_description)
HB_FUNC(LIBVLC_TRACK_DESCRIPTION_LIST_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_track_description_list_release((libvlc_track_description_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_toggle_fullscreen(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_TOGGLE_FULLSCREEN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_toggle_fullscreen(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_set_fullscreen(libvlc_media_player_t *p_mi, int b_fullscreen)
HB_FUNC(LIBVLC_SET_FULLSCREEN)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_set_fullscreen(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_get_fullscreen(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_GET_FULLSCREEN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_get_fullscreen(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_key_input(libvlc_media_player_t *p_mi, unsigned on)
HB_FUNC(LIBVLC_VIDEO_SET_KEY_INPUT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_video_set_key_input(libvlc_par_media_player(1), libvlc_par_unsigned(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_mouse_input(libvlc_media_player_t *p_mi, unsigned on)
HB_FUNC(LIBVLC_VIDEO_SET_MOUSE_INPUT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_video_set_mouse_input(libvlc_par_media_player(1), libvlc_par_unsigned(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_size(libvlc_media_player_t *p_mi, unsigned num, unsigned *px, unsigned *py)
HB_FUNC(LIBVLC_VIDEO_GET_SIZE)
{
  if (hb_pcount() == 4)
  {
    unsigned px;
    unsigned py;
    libvlc_ret_int(libvlc_video_get_size(libvlc_par_media_player(1), libvlc_par_unsigned(2), &px, &py));
    hb_storni(px, 3);
    hb_storni(py, 4);
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_cursor(libvlc_media_player_t *p_mi, unsigned num, int *px, int *py)
HB_FUNC(LIBVLC_VIDEO_GET_CURSOR)
{
  if (hb_pcount() == 4)
  {
    int px;
    int py;
    libvlc_ret_int(libvlc_video_get_cursor(libvlc_par_media_player(1), libvlc_par_unsigned(2), &px, &py));
    hb_storni(px, 3);
    hb_storni(py, 4);
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_video_get_scale(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_SCALE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_float(libvlc_video_get_scale(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_scale(libvlc_media_player_t *p_mi, float f_factor)
HB_FUNC(LIBVLC_VIDEO_SET_SCALE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_video_set_scale(libvlc_par_media_player(1), libvlc_par_float(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API char *libvlc_video_get_aspect_ratio(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_ASPECT_RATIO)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    char *str = libvlc_video_get_aspect_ratio(libvlc_par_media_player(1));
    hb_retc(str);
    libvlc_free(str);
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_aspect_ratio(libvlc_media_player_t *p_mi, const char *psz_aspect)
HB_FUNC(LIBVLC_VIDEO_SET_ASPECT_RATIO)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_video_set_aspect_ratio(libvlc_par_media_player(1), hb_parc(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_video_viewpoint_t *libvlc_video_new_viewpoint(void)
HB_FUNC(LIBVLC_VIDEO_NEW_VIEWPOINT)
{
  if (hb_pcount() == 0)
  {
    libvlc_ret_video_viewpoint(libvlc_video_new_viewpoint());
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_update_viewpoint(libvlc_media_player_t *p_mi, const libvlc_video_viewpoint_t *p_viewpoint, bool b_absolute)

// LIBVLC_API int libvlc_video_get_spu(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_SPU)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_video_get_spu(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_spu_count(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_SPU_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_video_get_spu_count(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_track_description_t * libvlc_video_get_spu_description(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_SPU_DESCRIPTION)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_track_description(libvlc_video_get_spu_description(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_set_spu(libvlc_media_player_t *p_mi, int i_spu)
HB_FUNC(LIBVLC_VIDEO_SET_SPU)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_set_spu(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int64_t libvlc_video_get_spu_delay(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_SPU_DELAY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int64(libvlc_video_get_spu_delay(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_set_spu_delay(libvlc_media_player_t *p_mi, int64_t i_delay)
HB_FUNC(LIBVLC_VIDEO_SET_SPU_DELAY)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_set_spu_delay(libvlc_par_media_player(1), libvlc_par_int64(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_full_title_descriptions(libvlc_media_player_t *p_mi, libvlc_title_description_t ***titles)

// LIBVLC_API void libvlc_title_descriptions_release(libvlc_title_description_t **p_titles, unsigned i_count)

// LIBVLC_API int libvlc_media_player_get_full_chapter_descriptions(libvlc_media_player_t *p_mi, int i_chapters_of_title, libvlc_chapter_description_t *** pp_chapters)

// LIBVLC_API void libvlc_chapter_descriptions_release(libvlc_chapter_description_t **p_chapters, unsigned i_count)

// LIBVLC_API char *libvlc_video_get_crop_geometry(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_CROP_GEOMETRY) // TOCHECK: release string ?
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retc(libvlc_video_get_crop_geometry(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_crop_geometry(libvlc_media_player_t *p_mi, const char *psz_geometry)
HB_FUNC(LIBVLC_VIDEO_SET_CROP_GEOMETRY)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_video_set_crop_geometry(libvlc_par_media_player(1), hb_parc(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_teletext(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_TELETEXT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_video_get_teletext(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_teletext(libvlc_media_player_t *p_mi, int i_page)
HB_FUNC(LIBVLC_VIDEO_SET_TELETEXT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_video_set_teletext(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_track_count(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_TRACK_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_video_get_track_count(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_track_description_t * libvlc_video_get_track_description(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_TRACK_DESCRIPTION)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_track_description(libvlc_video_get_track_description(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_track(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_VIDEO_GET_TRACK)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_video_get_track(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_set_track(libvlc_media_player_t *p_mi, int i_track)
HB_FUNC(LIBVLC_VIDEO_SET_TRACK)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_set_track(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_take_snapshot(libvlc_media_player_t *p_mi, unsigned num, const char *psz_filepath, unsigned int i_width, unsigned int i_height)
HB_FUNC(LIBVLC_VIDEO_TAKE_SNAPSHOT)
{
  if (hb_pcount() == 5)
  {
    libvlc_ret_int(libvlc_video_take_snapshot(libvlc_par_media_player(1), libvlc_par_unsigned(2), hb_parc(3), (unsigned int)hb_parni(4), (unsigned int)hb_parni(5)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_deinterlace(libvlc_media_player_t *p_mi, const char *psz_mode)
HB_FUNC(LIBVLC_VIDEO_SET_DEINTERLACE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_video_set_deinterlace(libvlc_par_media_player(1), hb_parc(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_marquee_int(libvlc_media_player_t *p_mi, unsigned option)
HB_FUNC(LIBVLC_VIDEO_GET_MARQUEE_INT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_get_marquee_int(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API char *libvlc_video_get_marquee_string(libvlc_media_player_t *p_mi, unsigned option)
HB_FUNC(LIBVLC_VIDEO_GET_MARQUEE_STRING) // TOCHECK: release string ?
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    hb_retc(libvlc_video_get_marquee_string(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_marquee_int(libvlc_media_player_t *p_mi, unsigned option, int i_val)
HB_FUNC(LIBVLC_VIDEO_SET_MARQUEE_INT)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_marquee_int(libvlc_par_media_player(1), libvlc_par_unsigned(2), libvlc_par_int(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_marquee_string(libvlc_media_player_t *p_mi, unsigned option, const char *psz_text)
HB_FUNC(LIBVLC_VIDEO_SET_MARQUEE_STRING)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_marquee_string(libvlc_par_media_player(1), libvlc_par_unsigned(2), hb_parc(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_logo_int(libvlc_media_player_t *p_mi, unsigned option)
HB_FUNC(LIBVLC_VIDEO_GET_LOGO_INT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_get_logo_int(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_logo_int(libvlc_media_player_t *p_mi, unsigned option, int value)
HB_FUNC(LIBVLC_VIDEO_SET_LOGO_INT)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_logo_int(libvlc_par_media_player(1), libvlc_par_unsigned(2), libvlc_par_int(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_logo_string(libvlc_media_player_t *p_mi, unsigned option, const char *psz_value)
HB_FUNC(LIBVLC_VIDEO_SET_LOGO_STRING)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_logo_string(libvlc_par_media_player(1), libvlc_par_unsigned(2), hb_parc(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_video_get_adjust_int(libvlc_media_player_t *p_mi, unsigned option)
HB_FUNC(LIBVLC_VIDEO_GET_ADJUST_INT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_video_get_adjust_int(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_adjust_int(libvlc_media_player_t *p_mi, unsigned option, int value)
HB_FUNC(LIBVLC_VIDEO_SET_ADJUST_INT)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_adjust_int(libvlc_par_media_player(1), libvlc_par_unsigned(2), libvlc_par_int(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_video_get_adjust_float(libvlc_media_player_t *p_mi, unsigned option)
HB_FUNC(LIBVLC_VIDEO_GET_ADJUST_FLOAT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_float(libvlc_video_get_adjust_float(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_video_set_adjust_float(libvlc_media_player_t *p_mi, unsigned option, float value)
HB_FUNC(LIBVLC_VIDEO_SET_ADJUST_FLOAT)
{
  if (hb_pcount() == 3)
  {
    libvlc_video_set_adjust_float(libvlc_par_media_player(1), libvlc_par_unsigned(2), libvlc_par_float(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_audio_output_t * libvlc_audio_output_list_get(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_LIST_GET)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_audio_output(libvlc_audio_output_list_get(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_output_list_release(libvlc_audio_output_t *p_list)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_LIST_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_audio_output_list_release((libvlc_audio_output_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_output_set(libvlc_media_player_t *p_mi, const char *psz_name)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_SET)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_int(libvlc_audio_output_set(libvlc_par_media_player(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_audio_output_device_t * libvlc_audio_output_device_enum(libvlc_media_player_t *mp)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_DEVICE_ENUM)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_audio_output_device(libvlc_audio_output_device_enum(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_audio_output_device_t * libvlc_audio_output_device_list_get(libvlc_instance_t *p_instance, const char *aout)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_DEVICE_LIST_GET)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_audio_output_device(libvlc_audio_output_device_list_get(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_output_device_list_release(libvlc_audio_output_device_t *p_list)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_DEVICE_LIST_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_audio_output_device_list_release((libvlc_audio_output_device_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_output_device_set(libvlc_media_player_t *mp, const char *module, const char *device_id)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_DEVICE_SET)
{
  if (hb_pcount() == 3)
  {
    libvlc_audio_output_device_set(libvlc_par_media_player(1), hb_parc(2), hb_parc(3));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API char *libvlc_audio_output_device_get(libvlc_media_player_t *mp)
HB_FUNC(LIBVLC_AUDIO_OUTPUT_DEVICE_GET)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    char *str = libvlc_audio_output_device_get(libvlc_par_media_player(1));
    hb_retc(str);
    libvlc_free(str);
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_toggle_mute(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_TOGGLE_MUTE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_audio_toggle_mute(libvlc_par_media_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_get_mute(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_MUTE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_audio_get_mute(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_set_mute(libvlc_media_player_t *p_mi, int status)
HB_FUNC(LIBVLC_AUDIO_SET_MUTE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_audio_set_mute(libvlc_par_media_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_get_volume(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_VOLUME)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_audio_get_volume(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_set_volume(libvlc_media_player_t *p_mi, int i_volume)
HB_FUNC(LIBVLC_AUDIO_SET_VOLUME)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_audio_set_volume(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_get_track_count(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_TRACK_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_audio_get_track_count(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_track_description_t * libvlc_audio_get_track_description(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_TRACK_DESCRIPTION)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_track_description(libvlc_audio_get_track_description(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_get_track(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_TRACK)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_audio_get_track(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_set_track(libvlc_media_player_t *p_mi, int i_track)
HB_FUNC(LIBVLC_AUDIO_SET_TRACK)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_audio_set_track(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_get_channel(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_CHANNEL)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_audio_get_channel(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_set_channel(libvlc_media_player_t *p_mi, int channel)
HB_FUNC(LIBVLC_AUDIO_SET_CHANNEL)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_audio_set_channel(libvlc_par_media_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int64_t libvlc_audio_get_delay(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_AUDIO_GET_DELAY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int64(libvlc_audio_get_delay(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_set_delay(libvlc_media_player_t *p_mi, int64_t i_delay)
HB_FUNC(LIBVLC_AUDIO_SET_DELAY)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_audio_set_delay(libvlc_par_media_player(1), libvlc_par_int64(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API unsigned libvlc_audio_equalizer_get_preset_count(void)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_PRESET_COUNT)
{
  if (hb_pcount() == 0)
  {
    libvlc_ret_unsigned(libvlc_audio_equalizer_get_preset_count());
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char *libvlc_audio_equalizer_get_preset_name(unsigned u_index)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_PRESET_NAME)
{
  if (hb_pcount() == 1 && HB_ISNUM(1))
  {
    hb_retc((const char *)libvlc_audio_equalizer_get_preset_name(libvlc_par_unsigned(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API unsigned libvlc_audio_equalizer_get_band_count(void)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_BAND_COUNT)
{
  if (hb_pcount() == 0)
  {
    libvlc_ret_unsigned(libvlc_audio_equalizer_get_band_count());
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_audio_equalizer_get_band_frequency(unsigned u_index)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_BAND_FREQUENCY)
{
  if (hb_pcount() == 1 && HB_ISNUM(1))
  {
    libvlc_ret_float(libvlc_audio_equalizer_get_band_frequency(libvlc_par_unsigned(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_equalizer_t *libvlc_audio_equalizer_new(void)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_NEW)
{
  if (hb_pcount() == 0)
  {
    libvlc_ret_equalizer(libvlc_audio_equalizer_new());
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_equalizer_t *libvlc_audio_equalizer_new_from_preset(unsigned u_index)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_NEW_FROM_PRESET)
{
  if (hb_pcount() == 1 && HB_ISNUM(1))
  {
    libvlc_ret_equalizer(libvlc_audio_equalizer_new_from_preset(libvlc_par_unsigned(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_audio_equalizer_release(libvlc_equalizer_t *p_equalizer)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_audio_equalizer_release(libvlc_par_equalizer(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_equalizer_set_preamp(libvlc_equalizer_t *p_equalizer, float f_preamp)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_SET_PREAMP)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_audio_equalizer_set_preamp(libvlc_par_equalizer(1), libvlc_par_float(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_audio_equalizer_get_preamp(libvlc_equalizer_t *p_equalizer)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_PREAMP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_float(libvlc_audio_equalizer_get_preamp(libvlc_par_equalizer(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_audio_equalizer_set_amp_at_index(libvlc_equalizer_t *p_equalizer, float f_amp, unsigned u_band)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_SET_AMP_AT_INDEX)
{
  if (hb_pcount() == 3)
  {
    libvlc_ret_int(libvlc_audio_equalizer_set_amp_at_index(libvlc_par_equalizer(1), libvlc_par_float(2), libvlc_par_unsigned(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_audio_equalizer_get_amp_at_index(libvlc_equalizer_t *p_equalizer, unsigned u_band)
HB_FUNC(LIBVLC_AUDIO_EQUALIZER_GET_AMP_AT_INDEX)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_float(libvlc_audio_equalizer_get_amp_at_index(libvlc_par_equalizer(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_set_equalizer(libvlc_media_player_t *p_mi, libvlc_equalizer_t *p_equalizer)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_EQUALIZER)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_player_set_equalizer(libvlc_par_media_player(1), libvlc_par_equalizer(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_get_role(libvlc_media_player_t *p_mi)
HB_FUNC(LIBVLC_MEDIA_PLAYER_GET_ROLE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_player_get_role(libvlc_par_media_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_player_set_role(libvlc_media_player_t *p_mi, unsigned role)
HB_FUNC(LIBVLC_MEDIA_PLAYER_SET_ROLE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_media_player_set_role(libvlc_par_media_player(1), libvlc_par_unsigned(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

// $BEGIN_LICENSE$
// MIT License
//
// Copyright (c) 2025 Marcos Antonio Gambeta
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// $END_LICENSE$

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API void libvlc_vlm_release(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_VLM_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_vlm_release(libvlc_par_instance(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_add_broadcast(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input, const char *psz_output, int i_options, const char * const* ppsz_options, int b_enabled, int b_loop)
#if 0
HB_FUNC(LIBVLC_VLM_ADD_BROADCAST) // TODO: parameter 6
{
  if (hb_pcount() == 8 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3) && HB_ISCHAR(4) && HB_ISNUM(5) && HB_IS###(6) && HB_ISNUM(7) && HB_ISNUM(8))
  {
    libvlc_ret_int(libvlc_vlm_add_broadcast(libvlc_par_instance(1), hb_parc(2), hb_parc(3), hb_parc(4), libvlc_par_int(5), hb_par###(6), libvlc_par_int(7), libvlc_par_int(8)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_vlm_add_vod(libvlc_instance_t * p_instance, const char *psz_name, const char *psz_input, int i_options, const char * const* ppsz_options, int b_enabled, const char *psz_mux)
#if 0
HB_FUNC(LIBVLC_VLM_ADD_VOD)
{
  if (hb_pcount() == 7 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3) && HB_ISNUM(4) && HB_ISCHAR(5) && HB_ISNUM(6) && HB_ISNUM(7))
  {
    libvlc_ret_int(libvlc_vlm_add_vod(libvlc_par_instance(1), hb_parc(2), hb_parc(3), libvlc_par_int(4), hb_parc(5), libvlc_par_int(6), libvlc_par_int(7)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_vlm_del_media(libvlc_instance_t * p_instance, const char *psz_name)
HB_FUNC(LIBVLC_VLM_DEL_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_int(libvlc_vlm_del_media(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_set_enabled(libvlc_instance_t *p_instance, const char *psz_name, int b_enabled)
HB_FUNC(LIBVLC_VLM_SET_ENABLED)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_set_enabled(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_set_output(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_output)
HB_FUNC(LIBVLC_VLM_SET_OUTPUT)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3))
  {
    libvlc_ret_int(libvlc_vlm_set_output(libvlc_par_instance(1), hb_parc(2), hb_parc(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_set_input(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input)
HB_FUNC(LIBVLC_VLM_SET_INPUT)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3))
  {
    libvlc_ret_int(libvlc_vlm_set_input(libvlc_par_instance(1), hb_parc(2), hb_parc(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_add_input(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input)
HB_FUNC(LIBVLC_VLM_ADD_INPUT)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3))
  {
    libvlc_ret_int(libvlc_vlm_add_input(libvlc_par_instance(1), hb_parc(2), hb_parc(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_set_loop(libvlc_instance_t *p_instance, const char *psz_name, int b_loop)
HB_FUNC(LIBVLC_VLM_SET_LOOP)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_set_loop(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_set_mux(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_mux)
HB_FUNC(LIBVLC_VLM_SET_MUX)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3))
  {
    libvlc_ret_int(libvlc_vlm_set_mux(libvlc_par_instance(1), hb_parc(2), hb_parc(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_change_media(libvlc_instance_t *p_instance, const char *psz_name, const char *psz_input, const char *psz_output, int i_options, const char * const *ppsz_options, int b_enabled, int b_loop)
#if 0
HB_FUNC(LIBVLC_VLM_CHANGE_MEDIA) // TODO: parameter 6
{
  if (hb_pcount() == 8 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3) && HB_ISCHAR(4) && HB_ISNUM(5) && HB_IS###(6) && HB_ISNUM(7) && HB_ISNUM(8))
  {
    libvlc_ret_int(libvlc_vlm_change_media(libvlc_par_instance(1), hb_parc(2), hb_parc(3), hb_parc(4), libvlc_par_int(5), hb_par###(6), libvlc_par_int(7), libvlc_par_int(8)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_vlm_play_media(libvlc_instance_t *p_instance, const char *psz_name)
HB_FUNC(LIBVLC_VLM_PLAY_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_int(libvlc_vlm_play_media(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_stop_media(libvlc_instance_t *p_instance, const char *psz_name)
HB_FUNC(LIBVLC_VLM_STOP_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_int(libvlc_vlm_stop_media(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_pause_media(libvlc_instance_t *p_instance, const char *psz_name)
HB_FUNC(LIBVLC_VLM_PAUSE_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_int(libvlc_vlm_pause_media(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_seek_media(libvlc_instance_t *p_instance, const char *psz_name, float f_percentage)
HB_FUNC(LIBVLC_VLM_SEEK_MEDIA)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_seek_media(libvlc_par_instance(1), hb_parc(2), libvlc_par_float(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char* libvlc_vlm_show_media(libvlc_instance_t *p_instance, const char *psz_name)
HB_FUNC(LIBVLC_VLM_SHOW_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    hb_retc((const char *)libvlc_vlm_show_media(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API float libvlc_vlm_get_media_instance_position(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_POSITION)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_float(libvlc_vlm_get_media_instance_position(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_get_media_instance_time(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_TIME)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_get_media_instance_time(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_get_media_instance_length(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_LENGTH)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_get_media_instance_length(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_vlm_get_media_instance_rate(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
HB_FUNC(LIBVLC_VLM_GET_MEDIA_INSTANCE_RATE)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_vlm_get_media_instance_rate(libvlc_par_instance(1), hb_parc(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

#if 0
// LIBVLC_API int libvlc_vlm_get_media_instance_title(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
// LIBVLC_API int libvlc_vlm_get_media_instance_chapter(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
// LIBVLC_API int libvlc_vlm_get_media_instance_seekable(libvlc_instance_t *p_instance, const char *psz_name, int i_instance)
#endif

// LIBVLC_API libvlc_event_manager_t * libvlc_vlm_get_event_manager(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_VLM_GET_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_event_manager(libvlc_vlm_get_event_manager(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

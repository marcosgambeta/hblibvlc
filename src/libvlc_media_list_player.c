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

// LIBVLC_API libvlc_media_list_player_t * libvlc_media_list_player_new(libvlc_instance_t * p_instance)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEW)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media_list_player(libvlc_media_list_player_new(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_release(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_player_release(libvlc_par_media_list_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_retain(libvlc_media_list_player_t *p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_RETAIN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_player_retain(libvlc_par_media_list_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_event_manager_t * libvlc_media_list_player_event_manager(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_event_manager(libvlc_media_list_player_event_manager(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_media_player(libvlc_media_list_player_t * p_mlp, libvlc_media_player_t * p_mi)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_PLAYER)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_list_player_set_media_player(libvlc_par_media_list_player(1), libvlc_par_media_player(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_player_t * libvlc_media_list_player_get_media_player(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_MEDIA_PLAYER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media_player(libvlc_media_list_player_get_media_player(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_media_list(libvlc_media_list_player_t * p_mlp, libvlc_media_list_t * p_mlist)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_LIST)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_list_player_set_media_list(libvlc_par_media_list_player(1), libvlc_par_media_list(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_play(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_player_play(libvlc_par_media_list_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_pause(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PAUSE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_player_pause(libvlc_par_media_list_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_pause(libvlc_media_list_player_t * p_mlp, int do_pause)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PAUSE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_list_player_set_pause(libvlc_par_media_list_player(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_media_list_player_is_playing(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_IS_PLAYING)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_list_player_is_playing(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_state_t libvlc_media_list_player_get_state(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_STATE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retni((libvlc_state_t)libvlc_media_list_player_get_state(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_play_item_at_index(libvlc_media_list_player_t * p_mlp, int i_index)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM_AT_INDEX)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_media_list_player_play_item_at_index(libvlc_par_media_list_player(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_play_item(libvlc_media_list_player_t * p_mlp, libvlc_media_t * p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_list_player_play_item(libvlc_par_media_list_player(1), libvlc_par_media(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_stop(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_STOP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_player_stop(libvlc_par_media_list_player(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_next(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEXT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_list_player_next(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_previous(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PREVIOUS)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_list_player_previous(libvlc_par_media_list_player(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_playback_mode(libvlc_media_list_player_t * p_mlp, libvlc_playback_mode_t e_mode)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PLAYBACK_MODE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_media_list_player_set_playback_mode(libvlc_par_media_list_player(1), (libvlc_playback_mode_t)hb_parni(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

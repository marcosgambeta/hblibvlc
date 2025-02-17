//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_list_player_t * libvlc_media_list_player_new(libvlc_instance_t * p_instance)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEW)
{
  if (hb_pcount() == 1)
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
  if (hb_pcount() == 1)
  {
    libvlc_media_list_player_release((libvlc_media_list_player_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_retain(libvlc_media_list_player_t *p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_RETAIN)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_list_player_retain((libvlc_media_list_player_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_event_manager_t * libvlc_media_list_player_event_manager(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_EVENT_MANAGER)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_event_manager(libvlc_media_list_player_event_manager((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_media_player(libvlc_media_list_player_t * p_mlp, libvlc_media_player_t * p_mi)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_PLAYER)
{
  if (hb_pcount() == 2)
  {
    libvlc_media_list_player_set_media_player((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_media_player(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_player_t * libvlc_media_list_player_get_media_player(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_MEDIA_PLAYER)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_media_player(libvlc_media_list_player_get_media_player((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_media_list(libvlc_media_list_player_t * p_mlp, libvlc_media_list_t * p_mlist)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_LIST)
{
  if (hb_pcount() == 2)
  {
    libvlc_media_list_player_set_media_list((libvlc_media_list_player_t *)hb_parptr(1), (libvlc_media_list_t *)hb_parptr(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_play(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_list_player_play((libvlc_media_list_player_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_pause(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PAUSE)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_list_player_pause((libvlc_media_list_player_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_pause(libvlc_media_list_player_t * p_mlp, int do_pause)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PAUSE)
{
  if (hb_pcount() == 2)
  {
    libvlc_media_list_player_set_pause((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_int(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_is_playing(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_IS_PLAYING)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_list_player_is_playing((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_state_t libvlc_media_list_player_get_state(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_STATE)
{
  if (hb_pcount() == 1)
  {
    hb_retni((libvlc_state_t)libvlc_media_list_player_get_state((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_play_item_at_index(libvlc_media_list_player_t * p_mlp, int i_index)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM_AT_INDEX)
{
  if (hb_pcount() == 2)
  {
    libvlc_ret_int(libvlc_media_list_player_play_item_at_index((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_play_item(libvlc_media_list_player_t * p_mlp, libvlc_media_t * p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM)
{
  if (hb_pcount() == 2)
  {
    libvlc_ret_int(libvlc_media_list_player_play_item((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_media(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_stop(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_STOP)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_list_player_stop((libvlc_media_list_player_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_next(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEXT)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_list_player_next((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_player_previous(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PREVIOUS)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_list_player_previous((libvlc_media_list_player_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_player_set_playback_mode(libvlc_media_list_player_t * p_mlp, libvlc_playback_mode_t e_mode)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PLAYBACK_MODE)
{
  if (hb_pcount() == 2)
  {
    libvlc_media_list_player_set_playback_mode((libvlc_media_list_player_t *)hb_parptr(1), (libvlc_playback_mode_t)hb_parni(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

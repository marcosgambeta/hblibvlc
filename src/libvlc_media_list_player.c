//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_list_player_t * libvlc_media_list_player_new(libvlc_instance_t * p_instance)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEW)
{
  hb_retptr((libvlc_media_list_player_t *)libvlc_media_list_player_new(libvlc_par_instance(1)));
}

// LIBVLC_API void libvlc_media_list_player_release(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_RELEASE)
{
  libvlc_media_list_player_release((libvlc_media_list_player_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_list_player_retain(libvlc_media_list_player_t *p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_RETAIN)
{
  libvlc_media_list_player_retain((libvlc_media_list_player_t *)hb_parptr(1));
}

// LIBVLC_API libvlc_event_manager_t * libvlc_media_list_player_event_manager(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_EVENT_MANAGER)
{
  hb_retptr((libvlc_event_manager_t *)libvlc_media_list_player_event_manager((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_list_player_set_media_player(libvlc_media_list_player_t * p_mlp, libvlc_media_player_t * p_mi)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_PLAYER)
{
  libvlc_media_list_player_set_media_player((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_media_player(1));
}

// LIBVLC_API libvlc_media_player_t * libvlc_media_list_player_get_media_player(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_MEDIA_PLAYER)
{
  hb_retptr((libvlc_media_player_t *)libvlc_media_list_player_get_media_player((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_list_player_set_media_list(libvlc_media_list_player_t * p_mlp, libvlc_media_list_t * p_mlist)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_MEDIA_LIST)
{
  libvlc_media_list_player_set_media_list((libvlc_media_list_player_t *)hb_parptr(1), (libvlc_media_list_t *)hb_parptr(2));
}

// LIBVLC_API void libvlc_media_list_player_play(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY)
{
  libvlc_media_list_player_play((libvlc_media_list_player_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_list_player_pause(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PAUSE)
{
  libvlc_media_list_player_pause((libvlc_media_list_player_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_list_player_set_pause(libvlc_media_list_player_t * p_mlp, int do_pause)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PAUSE)
{
  libvlc_media_list_player_set_pause((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_int(2));
}

// LIBVLC_API int libvlc_media_list_player_is_playing(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_IS_PLAYING)
{
  libvlc_ret_int(libvlc_media_list_player_is_playing((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API libvlc_state_t libvlc_media_list_player_get_state(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_GET_STATE)
{
  hb_retni((libvlc_state_t)libvlc_media_list_player_get_state((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API int libvlc_media_list_player_play_item_at_index(libvlc_media_list_player_t * p_mlp, int i_index)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM_AT_INDEX)
{
  libvlc_ret_int(libvlc_media_list_player_play_item_at_index((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_int(2)));
}

// LIBVLC_API int libvlc_media_list_player_play_item(libvlc_media_list_player_t * p_mlp, libvlc_media_t * p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PLAY_ITEM)
{
  libvlc_ret_int(libvlc_media_list_player_play_item((libvlc_media_list_player_t *)hb_parptr(1), libvlc_par_media(2)));
}

// LIBVLC_API void libvlc_media_list_player_stop(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_STOP)
{
  libvlc_media_list_player_stop((libvlc_media_list_player_t *)hb_parptr(1));
}

// LIBVLC_API int libvlc_media_list_player_next(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_NEXT)
{
  libvlc_ret_int(libvlc_media_list_player_next((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API int libvlc_media_list_player_previous(libvlc_media_list_player_t * p_mlp)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_PREVIOUS)
{
  libvlc_ret_int(libvlc_media_list_player_previous((libvlc_media_list_player_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_list_player_set_playback_mode(libvlc_media_list_player_t * p_mlp, libvlc_playback_mode_t e_mode)
HB_FUNC(LIBVLC_MEDIA_LIST_PLAYER_SET_PLAYBACK_MODE)
{
  libvlc_media_list_player_set_playback_mode((libvlc_media_list_player_t *)hb_parptr(1), (libvlc_playback_mode_t)hb_parni(2));
}

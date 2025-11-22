//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta@outlook.com>
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
#include <vlc/libvlc_version.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_t *libvlc_media_new_location(libvlc_instance_t *p_instance, const char * psz_mrl)
HB_FUNC(LIBVLC_MEDIA_NEW_LOCATION)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_ret_media(libvlc_media_new_location(libvlc_par_instance(1), hb_parc(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t *libvlc_media_new_path(libvlc_instance_t *p_instance, const char *path)
HB_FUNC(LIBVLC_MEDIA_NEW_PATH)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_ret_media(libvlc_media_new_path(libvlc_par_instance(1), hb_parc(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t *libvlc_media_new_fd(libvlc_instance_t *p_instance, int fd)
#if LIBVLC_VERSION_INT >= 0x01010500
HB_FUNC(LIBVLC_MEDIA_NEW_FD)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2)) {
    libvlc_ret_media(libvlc_media_new_fd(libvlc_par_instance(1), libvlc_par_int(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API libvlc_media_t *libvlc_media_new_callbacks(libvlc_instance_t *instance, libvlc_media_open_cb open_cb,
// libvlc_media_read_cb read_cb, libvlc_media_seek_cb seek_cb, libvlc_media_close_cb close_cb, void *opaque)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

// LIBVLC_API libvlc_media_t *libvlc_media_new_as_node(libvlc_instance_t *p_instance, const char *psz_name)
HB_FUNC(LIBVLC_MEDIA_NEW_AS_NODE)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_ret_media(libvlc_media_new_as_node(libvlc_par_instance(1), hb_parc(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_add_option(libvlc_media_t *p_md, const char * psz_options)
HB_FUNC(LIBVLC_MEDIA_ADD_OPTION)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_media_add_option(libvlc_par_media(1), hb_parc(2));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_add_option_flag(libvlc_media_t *p_md, const char * psz_options, unsigned i_flags)
HB_FUNC(LIBVLC_MEDIA_ADD_OPTION_FLAG)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISNUM(3)) {
    libvlc_media_add_option_flag(libvlc_par_media(1), hb_parc(2), libvlc_par_unsigned(3));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_retain(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_RETAIN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_retain(libvlc_par_media(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_release(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_release(libvlc_par_media(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API char *libvlc_media_get_mrl(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_GET_MRL) // TOCHECK: release string ?
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    hb_retc(libvlc_media_get_mrl(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t *libvlc_media_duplicate(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_DUPLICATE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_media(libvlc_media_duplicate(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API char *libvlc_media_get_meta(libvlc_media_t *p_md, libvlc_meta_t e_meta)
HB_FUNC(LIBVLC_MEDIA_GET_META) // TOCHECK: release string ?
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2)) {
    hb_retc(libvlc_media_get_meta(libvlc_par_media(1), (libvlc_meta_t)hb_parni(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_set_meta(libvlc_media_t *p_md, libvlc_meta_t e_meta, const char *psz_value)
HB_FUNC(LIBVLC_MEDIA_SET_META)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISNUM(2) && HB_ISCHAR(3)) {
    libvlc_media_set_meta(libvlc_par_media(1), (libvlc_meta_t)hb_parni(2), hb_parc(3));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_save_meta(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_SAVE_META)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_int(libvlc_media_save_meta(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_state_t libvlc_media_get_state(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_GET_STATE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    hb_retni((libvlc_state_t)libvlc_media_get_state(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_get_stats(libvlc_media_t *p_md, libvlc_media_stats_t *p_stats)

// LIBVLC_API VLC_FORWARD_DECLARE_OBJECT(libvlc_media_list_t *) libvlc_media_subitems(libvlc_media_t *p_md)

// LIBVLC_API libvlc_event_manager_t * libvlc_media_event_manager(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_event_manager(libvlc_media_event_manager(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_time_t libvlc_media_get_duration(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_GET_DURATION)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    hb_retnl((libvlc_time_t)libvlc_media_get_duration(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_parse_with_options(libvlc_media_t *p_md, libvlc_media_parse_flag_t parse_flag, int
// timeout)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_PARSE_WITH_OPTIONS)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISNUM(2) && HB_ISNUM(3)) {
    libvlc_ret_int(libvlc_media_parse_with_options(libvlc_par_media(1), (libvlc_media_parse_flag_t)hb_parni(2),
                                                   libvlc_par_int(3)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_parse_stop(libvlc_media_t *p_md)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_PARSE_STOP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_parse_stop(libvlc_par_media(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API libvlc_media_parsed_status_t libvlc_media_get_parsed_status(libvlc_media_t *p_md)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_GET_PARSED_STATUS)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    hb_retni((libvlc_media_parsed_status_t)libvlc_media_get_parsed_status(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_set_user_data(libvlc_media_t *p_md, void *p_new_user_data)
HB_FUNC(LIBVLC_MEDIA_SET_USER_DATA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2)) {
    libvlc_media_set_user_data(libvlc_par_media(1), (void *)hb_parptr(2));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void *libvlc_media_get_user_data(libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_GET_USER_DATA)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_voidptr(libvlc_media_get_user_data(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API unsigned libvlc_media_tracks_get(libvlc_media_t *p_md, libvlc_media_track_t ***tracks)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API const char *libvlc_media_get_codec_description(libvlc_track_type_t i_type, uint32_t i_codec)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_GET_CODEC_DESCRIPTION)
{
  if (hb_pcount() == 2 && HB_ISNUM(1) && HB_ISNUM(2)) {
    hb_retc(libvlc_media_get_codec_description((libvlc_track_type_t)hb_parni(1), (uint32_t)hb_parni(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_tracks_release(libvlc_media_track_t **p_tracks, unsigned i_count)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API libvlc_media_type_t libvlc_media_get_type(libvlc_media_t *p_md)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_GET_TYPE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    hb_retni((libvlc_media_type_t)libvlc_media_get_type(libvlc_par_media(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_media_slaves_add(libvlc_media_t *p_md, libvlc_media_slave_type_t i_type, unsigned int
// i_priority, const char *psz_uri)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_SLAVES_ADD)
{
  if (hb_pcount() == 4 && HB_ISPOINTER(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISCHAR(4)) {
    libvlc_ret_int(libvlc_media_slaves_add(libvlc_par_media(1), (libvlc_media_slave_type_t)hb_parni(2),
                                           libvlc_par_unsigned(3), hb_parc(4)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_slaves_clear(libvlc_media_t *p_md)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_SLAVES_CLEAR)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_slaves_clear(libvlc_par_media(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API unsigned int libvlc_media_slaves_get(libvlc_media_t *p_md, libvlc_media_slave_t ***ppp_slaves)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

// LIBVLC_API void libvlc_media_slaves_release(libvlc_media_slave_t **pp_slaves, unsigned int i_count)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

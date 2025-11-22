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

// LIBVLC_API libvlc_media_discoverer_t * libvlc_media_discoverer_new(libvlc_instance_t * p_inst, const char * psz_name)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_NEW)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_ret_media_discoverer(libvlc_media_discoverer_new(libvlc_par_instance(1), hb_parc(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_media_discoverer_start(libvlc_media_discoverer_t * p_mdis)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_START)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_int(libvlc_media_discoverer_start(libvlc_par_media_discoverer(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_discoverer_stop(libvlc_media_discoverer_t * p_mdis)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_STOP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_discoverer_stop(libvlc_par_media_discoverer(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_media_discoverer_release(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_media_discoverer_release(libvlc_par_media_discoverer(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_discoverer_media_list(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_MEDIA_LIST)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_media_list(libvlc_media_discoverer_media_list(libvlc_par_media_discoverer(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_discoverer_is_running(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_IS_RUNNING)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_int(libvlc_media_discoverer_is_running(libvlc_par_media_discoverer(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API size_t libvlc_media_discoverer_list_get(libvlc_instance_t *p_inst, libvlc_media_discoverer_category_t
// i_cat, libvlc_media_discoverer_description_t ***ppp_services)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

// LIBVLC_API void libvlc_media_discoverer_list_release(libvlc_media_discoverer_description_t **pp_services, size_t
// i_count)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

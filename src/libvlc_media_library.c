//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_library_t * libvlc_media_library_new(libvlc_instance_t * p_instance)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_NEW)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_media_library(libvlc_media_library_new(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_library_release(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RELEASE)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_library_release(libvlc_par_media_library(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_library_retain(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RETAIN)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_library_retain(libvlc_par_media_library(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_library_load(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_LOAD)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_library_load(libvlc_par_media_library(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_library_media_list(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_MEDIA_LIST)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_media_list(libvlc_media_library_media_list(libvlc_par_media_library(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

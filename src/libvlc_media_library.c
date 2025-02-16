//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_library_t * libvlc_media_library_new(libvlc_instance_t * p_instance)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_NEW)
{
  hb_retptr((libvlc_media_library_t *)libvlc_media_library_new(libvlc_par_instance(1)));
}

// LIBVLC_API void libvlc_media_library_release(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RELEASE)
{
  libvlc_media_library_release(libvlc_par_media_library(1));
}

// LIBVLC_API void libvlc_media_library_retain(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RETAIN)
{
  libvlc_media_library_retain(libvlc_par_media_library(1));
}

// LIBVLC_API int libvlc_media_library_load(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_LOAD)
{
  libvlc_ret_int(libvlc_media_library_load(libvlc_par_media_library(1)));
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_library_media_list(libvlc_media_library_t * p_mlib)
HB_FUNC(LIBVLC_MEDIA_LIBRARY_MEDIA_LIST)
{
  hb_retptr((libvlc_media_list_t *)libvlc_media_library_media_list(libvlc_par_media_library(1)));
}

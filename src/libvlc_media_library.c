//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>

#define libvlc_instance_par(n) (libvlc_instance_t *)hb_parptr(n)

// LIBVLC_API libvlc_media_library_t * libvlc_media_library_new( libvlc_instance_t * p_instance )
HB_FUNC(LIBVLC_MEDIA_LIBRARY_NEW)
{
  hb_retptr((libvlc_media_library_t *)libvlc_media_library_new(libvlc_instance_par(1)));
}

// LIBVLC_API void libvlc_media_library_release( libvlc_media_library_t * p_mlib )
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RELEASE)
{
  libvlc_media_library_release((libvlc_media_library_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_library_retain( libvlc_media_library_t * p_mlib )
HB_FUNC(LIBVLC_MEDIA_LIBRARY_RETAIN)
{
  libvlc_media_library_retain((libvlc_media_library_t *)hb_parptr(1));
}

// LIBVLC_API int libvlc_media_library_load( libvlc_media_library_t * p_mlib )
HB_FUNC(LIBVLC_MEDIA_LIBRARY_LOAD)
{
  hb_retni(libvlc_media_library_load((libvlc_media_library_t *)hb_parptr(1)));
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_library_media_list( libvlc_media_library_t * p_mlib )
HB_FUNC(LIBVLC_MEDIA_LIBRARY_MEDIA_LIST)
{
  hb_retptr((libvlc_media_list_t *)libvlc_media_library_media_list((libvlc_media_library_t *)hb_parptr(1)));
}
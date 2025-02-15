//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>

#define libvlc_instance_par(n) (libvlc_instance_t *)hb_parptr(n)

// LIBVLC_API libvlc_media_discoverer_t * libvlc_media_discoverer_new( libvlc_instance_t * p_inst, const char * psz_name )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_NEW)
{
  hb_retptr((libvlc_media_discoverer_t *)libvlc_media_discoverer_new(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API int libvlc_media_discoverer_start( libvlc_media_discoverer_t * p_mdis )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_START)
{
  hb_retni(libvlc_media_discoverer_start((libvlc_media_discoverer_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_media_discoverer_stop( libvlc_media_discoverer_t * p_mdis )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_STOP)
{
  libvlc_media_discoverer_stop((libvlc_media_discoverer_t *)hb_parptr(1));
}

// LIBVLC_API void libvlc_media_discoverer_release( libvlc_media_discoverer_t * p_mdis )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_RELEASE)
{
  libvlc_media_discoverer_release((libvlc_media_discoverer_t *)hb_parptr(1));
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_discoverer_media_list( libvlc_media_discoverer_t * p_mdis )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_MEDIA_LIST)
{
  hb_retptr((libvlc_media_list_t *)libvlc_media_discoverer_media_list((libvlc_media_discoverer_t *)hb_parptr(1)));
}

// LIBVLC_API int libvlc_media_discoverer_is_running( libvlc_media_discoverer_t * p_mdis )
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_IS_RUNNING)
{
  hb_retni(libvlc_media_discoverer_is_running((libvlc_media_discoverer_t *)hb_parptr(1)));
}

// LIBVLC_API size_t libvlc_media_discoverer_list_get( libvlc_instance_t *p_inst, libvlc_media_discoverer_category_t i_cat, libvlc_media_discoverer_description_t ***ppp_services )

// LIBVLC_API void libvlc_media_discoverer_list_release( libvlc_media_discoverer_description_t **pp_services, size_t i_count )

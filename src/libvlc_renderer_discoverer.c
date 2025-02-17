//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_renderer_item_t * libvlc_renderer_item_hold(libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_HOLD)
{
  libvlc_ret_renderer_item(libvlc_renderer_item_hold(libvlc_par_renderer_item(1)));
}

// LIBVLC_API void libvlc_renderer_item_release(libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_RELEASE)
{
  libvlc_renderer_item_release(libvlc_par_renderer_item(1));
}

// LIBVLC_API const char * libvlc_renderer_item_name(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_NAME)
{
  hb_retc((const char *)libvlc_renderer_item_name((const libvlc_renderer_item_t *)hb_parptr(1)));
}

// LIBVLC_API const char * libvlc_renderer_item_type(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_TYPE)
{
  hb_retc((const char *)libvlc_renderer_item_type((const libvlc_renderer_item_t *)hb_parptr(1)));
}

// LIBVLC_API const char * libvlc_renderer_item_icon_uri(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_ICON_URI)
{
  hb_retc((const char *)libvlc_renderer_item_icon_uri((const libvlc_renderer_item_t *)hb_parptr(1)));
}

// LIBVLC_API int libvlc_renderer_item_flags(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_FLAGS)
{
  libvlc_ret_int(libvlc_renderer_item_flags((const libvlc_renderer_item_t *)hb_parptr(1)));
}

// LIBVLC_API libvlc_renderer_discoverer_t * libvlc_renderer_discoverer_new(libvlc_instance_t *p_inst, const char *psz_name)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_NEW)
{
  hb_retptr((libvlc_renderer_discoverer_t *)libvlc_renderer_discoverer_new(libvlc_par_instance(1), hb_parc(2)));
}

// LIBVLC_API void libvlc_renderer_discoverer_release(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_RELEASE)
{
  libvlc_renderer_discoverer_release((libvlc_renderer_discoverer_t *)hb_parptr(1));
}

// LIBVLC_API int libvlc_renderer_discoverer_start(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_START)
{
  libvlc_ret_int(libvlc_renderer_discoverer_start((libvlc_renderer_discoverer_t *)hb_parptr(1)));
}

// LIBVLC_API void libvlc_renderer_discoverer_stop(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_STOP)
{
  libvlc_renderer_discoverer_stop((libvlc_renderer_discoverer_t *)hb_parptr(1));
}

// LIBVLC_API libvlc_event_manager_t * libvlc_renderer_discoverer_event_manager(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_EVENT_MANAGER)
{
  libvlc_ret_event_manager(libvlc_renderer_discoverer_event_manager((libvlc_renderer_discoverer_t *)hb_parptr(1)));
}

// LIBVLC_API size_t libvlc_renderer_discoverer_list_get(libvlc_instance_t *p_inst, libvlc_rd_description_t ***ppp_services)

// LIBVLC_API void libvlc_renderer_discoverer_list_release(libvlc_rd_description_t **pp_services, size_t i_count)

//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_renderer_item_t * libvlc_renderer_item_hold(libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_HOLD)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_renderer_item(libvlc_renderer_item_hold(libvlc_par_renderer_item(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_renderer_item_release(libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_renderer_item_release(libvlc_par_renderer_item(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char * libvlc_renderer_item_name(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_NAME)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retc((const char *)libvlc_renderer_item_name((const libvlc_renderer_item_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char * libvlc_renderer_item_type(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_TYPE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retc((const char *)libvlc_renderer_item_type((const libvlc_renderer_item_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char * libvlc_renderer_item_icon_uri(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_ICON_URI)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    hb_retc((const char *)libvlc_renderer_item_icon_uri((const libvlc_renderer_item_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_renderer_item_flags(const libvlc_renderer_item_t *p_item)
HB_FUNC(LIBVLC_RENDERER_ITEM_FLAGS)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_renderer_item_flags((const libvlc_renderer_item_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_renderer_discoverer_t * libvlc_renderer_discoverer_new(libvlc_instance_t *p_inst, const char *psz_name)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_NEW)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2))
  {
    libvlc_ret_renderer_discoverer(libvlc_renderer_discoverer_new(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_renderer_discoverer_release(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_renderer_discoverer_release((libvlc_renderer_discoverer_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_renderer_discoverer_start(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_START)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_renderer_discoverer_start((libvlc_renderer_discoverer_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_renderer_discoverer_stop(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_STOP)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_renderer_discoverer_stop((libvlc_renderer_discoverer_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_event_manager_t * libvlc_renderer_discoverer_event_manager(libvlc_renderer_discoverer_t *p_rd)
HB_FUNC(LIBVLC_RENDERER_DISCOVERER_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_event_manager(libvlc_renderer_discoverer_event_manager((libvlc_renderer_discoverer_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API size_t libvlc_renderer_discoverer_list_get(libvlc_instance_t *p_inst, libvlc_rd_description_t ***ppp_services)

// LIBVLC_API void libvlc_renderer_discoverer_list_release(libvlc_rd_description_t **pp_services, size_t i_count)

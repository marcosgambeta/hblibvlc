//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_discoverer_t * libvlc_media_discoverer_new(libvlc_instance_t * p_inst, const char * psz_name)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_NEW)
{
  if (hb_pcount() == 2)
  {
    libvlc_ret_media_discoverer(libvlc_media_discoverer_new(libvlc_par_instance(1), hb_parc(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_discoverer_start(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_START)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_discoverer_start((libvlc_media_discoverer_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_discoverer_stop(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_STOP)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_discoverer_stop((libvlc_media_discoverer_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_discoverer_release(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_RELEASE)
{
  if (hb_pcount() == 1)
  {
    libvlc_media_discoverer_release((libvlc_media_discoverer_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_list_t * libvlc_media_discoverer_media_list(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_MEDIA_LIST)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_media_list(libvlc_media_discoverer_media_list((libvlc_media_discoverer_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_discoverer_is_running(libvlc_media_discoverer_t * p_mdis)
HB_FUNC(LIBVLC_MEDIA_DISCOVERER_IS_RUNNING)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_media_discoverer_is_running((libvlc_media_discoverer_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API size_t libvlc_media_discoverer_list_get(libvlc_instance_t *p_inst, libvlc_media_discoverer_category_t i_cat, libvlc_media_discoverer_description_t ***ppp_services)

// LIBVLC_API void libvlc_media_discoverer_list_release(libvlc_media_discoverer_description_t **pp_services, size_t i_count)

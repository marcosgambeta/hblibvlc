//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API void libvlc_dialog_set_callbacks(libvlc_instance_t *p_instance, const libvlc_dialog_cbs *p_cbs, void *p_data)

// LIBVLC_API void libvlc_dialog_set_context(libvlc_dialog_id *p_id, void *p_context)
HB_FUNC(LIBVLC_DIALOG_SET_CONTEXT)
{
  if (hb_pcount() == 2)
  {
    libvlc_dialog_set_context(libvlc_par_dialog_id(1), (void *)hb_parptr(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void * libvlc_dialog_get_context(libvlc_dialog_id *p_id)
HB_FUNC(LIBVLC_DIALOG_GET_CONTEXT)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_voidptr(libvlc_dialog_get_context(libvlc_par_dialog_id(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_dialog_post_login(libvlc_dialog_id *p_id, const char *psz_username, const char *psz_password, bool b_store)

// LIBVLC_API int libvlc_dialog_post_action(libvlc_dialog_id *p_id, int i_action)
HB_FUNC(LIBVLC_DIALOG_POST_ACTION)
{
  if (hb_pcount() == 2)
  {
    libvlc_ret_int(libvlc_dialog_post_action(libvlc_par_dialog_id(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_dialog_dismiss(libvlc_dialog_id *p_id)
HB_FUNC(LIBVLC_DIALOG_DISMISS)
{
  if (hb_pcount() == 1)
  {
    libvlc_ret_int(libvlc_dialog_dismiss(libvlc_par_dialog_id(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

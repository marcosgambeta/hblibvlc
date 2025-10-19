//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
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

// LIBVLC_API void libvlc_dialog_set_callbacks(libvlc_instance_t *p_instance, const libvlc_dialog_cbs *p_cbs, void *p_data)
#if LIBVLC_VERSION_INT >= 0x03000000
#endif

// LIBVLC_API void libvlc_dialog_set_context(libvlc_dialog_id *p_id, void *p_context)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_DIALOG_SET_CONTEXT)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2)) {
    libvlc_dialog_set_context(libvlc_par_dialog_id(1), (void *)hb_parptr(2));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void * libvlc_dialog_get_context(libvlc_dialog_id *p_id)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_DIALOG_GET_CONTEXT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_voidptr(libvlc_dialog_get_context(libvlc_par_dialog_id(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_dialog_post_login(libvlc_dialog_id *p_id, const char *psz_username, const char *psz_password, bool b_store)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_DIALOG_POST_LOGIN)
{
  if (hb_pcount() == 4 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3) && HB_ISLOG(4)) {
     libvlc_ret_int(libvlc_dialog_post_login(libvlc_par_dialog_id(1), hb_parc(2), hb_parc(3), (bool)hb_parl(4)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_dialog_post_action(libvlc_dialog_id *p_id, int i_action)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_DIALOG_POST_ACTION)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2)) {
    libvlc_ret_int(libvlc_dialog_post_action(libvlc_par_dialog_id(1), libvlc_par_int(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API int libvlc_dialog_dismiss(libvlc_dialog_id *p_id)
#if LIBVLC_VERSION_INT >= 0x03000000
HB_FUNC(LIBVLC_DIALOG_DISMISS)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_int(libvlc_dialog_dismiss(libvlc_par_dialog_id(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

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

// LIBVLC_API const char *libvlc_errmsg(void)
HB_FUNC(LIBVLC_ERRMSG)
{
  if (hb_pcount() == 0) {
    hb_retc(libvlc_errmsg());
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_clearerr(void)
HB_FUNC(LIBVLC_CLEARERR)
{
  if (hb_pcount() == 0) {
    libvlc_clearerr();
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char *libvlc_vprinterr(const char *fmt, va_list ap)

// LIBVLC_API const char *libvlc_printerr(const char *fmt, ...)

// LIBVLC_API libvlc_instance_t * libvlc_new(int argc , const char *const *argv)
HB_FUNC(LIBVLC_NEW)
{
  if (hb_pcount() == 2 && HB_ISNUM(1) && HB_ISNIL(2)) {
    libvlc_ret_instance(libvlc_new(libvlc_par_int(1), NULL));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_release(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_release(libvlc_par_instance(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_retain(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_RETAIN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_retain(libvlc_par_instance(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_add_intf(libvlc_instance_t *p_instance, const char *name)
HB_FUNC(LIBVLC_ADD_INTF)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISCHAR(2)) {
    libvlc_ret_int(libvlc_add_intf(libvlc_par_instance(1), hb_parc(2)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_set_exit_handler(libvlc_instance_t *p_instance, void (*cb) (void *), void *opaque)

// LIBVLC_API void libvlc_set_user_agent(libvlc_instance_t *p_instance, const char *name, const char *http)
#if LIBVLC_VERSION_INT >= 0x01010100
HB_FUNC(LIBVLC_SET_USER_AGENT)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3)) {
    libvlc_set_user_agent(libvlc_par_instance(1), hb_parc(2), hb_parc(3));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_set_app_id(libvlc_instance_t *p_instance, const char *id, const char *version, const char
// *icon)
#if LIBVLC_VERSION_INT >= 0x02010000
HB_FUNC(LIBVLC_SET_APP_ID)
{
  if (hb_pcount() == 4 && HB_ISPOINTER(1) && HB_ISCHAR(2) && HB_ISCHAR(3) && HB_ISCHAR(4)) {
    libvlc_set_app_id(libvlc_par_instance(1), hb_parc(2), hb_parc(3), hb_parc(4));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API const char * libvlc_get_version(void)
HB_FUNC(LIBVLC_GET_VERSION)
{
  if (hb_pcount() == 0) {
    hb_retc(libvlc_get_version());
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char * libvlc_get_compiler(void)
HB_FUNC(LIBVLC_GET_COMPILER)
{
  if (hb_pcount() == 0) {
    hb_retc(libvlc_get_compiler());
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API const char * libvlc_get_changeset(void)
HB_FUNC(LIBVLC_GET_CHANGESET)
{
  if (hb_pcount() == 0) {
    hb_retc(libvlc_get_changeset());
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_free(void *ptr)
HB_FUNC(LIBVLC_FREE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_free(hb_parptr(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_event_attach(libvlc_event_manager_t *p_event_manager, libvlc_event_type_t i_event_type,
// libvlc_callback_t f_callback, void *user_data)

// LIBVLC_API void libvlc_event_detach(libvlc_event_manager_t *p_event_manager, libvlc_event_type_t i_event_type,
// libvlc_callback_t f_callback, void *p_user_data)

// LIBVLC_API const char * libvlc_event_type_name(libvlc_event_type_t event_type)
HB_FUNC(LIBVLC_EVENT_TYPE_NAME)
{
  if (hb_pcount() == 1 && HB_ISNUM(1)) {
    hb_retc(libvlc_event_type_name(libvlc_par_event_type(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_log_get_context(const libvlc_log_t *ctx, const char **module, const char **file, unsigned
// *line)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API void libvlc_log_get_object(const libvlc_log_t *ctx, const char **name, const char **header, uintptr_t *id)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API void libvlc_log_unset(libvlc_instance_t *p_instance)
#if LIBVLC_VERSION_INT >= 0x02010000
HB_FUNC(LIBVLC_LOG_UNSET)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_log_unset(libvlc_par_instance(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LIBVLC_API void libvlc_log_set(libvlc_instance_t *p_instance, libvlc_log_cb cb, void *data)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API void libvlc_log_set_file(libvlc_instance_t *p_instance, FILE *stream)
#if LIBVLC_VERSION_INT >= 0x02010000
#endif

// LIBVLC_API void libvlc_module_description_list_release(libvlc_module_description_t *p_list)
HB_FUNC(LIBVLC_MODULE_DESCRIPTION_LIST_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_module_description_list_release(libvlc_par_module_description(1));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_module_description_t *libvlc_audio_filter_list_get(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_AUDIO_FILTER_LIST_GET)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_module_description(libvlc_audio_filter_list_get(libvlc_par_instance(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_module_description_t *libvlc_video_filter_list_get(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_VIDEO_FILTER_LIST_GET)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1)) {
    libvlc_ret_module_description(libvlc_video_filter_list_get(libvlc_par_instance(1)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int64_t libvlc_clock(void)
HB_FUNC(LIBVLC_CLOCK)
{
  if (hb_pcount() == 0) {
    libvlc_ret_int64(libvlc_clock());
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

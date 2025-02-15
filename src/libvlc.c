//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include "hblibvlc.h"

// LIBVLC_API const char *libvlc_errmsg (void)
HB_FUNC(LIBVLC_ERRMSG)
{
  hb_retc((const char *)libvlc_errmsg());
}

// LIBVLC_API void libvlc_clearerr (void)
HB_FUNC(LIBVLC_CLEARERR)
{
  libvlc_clearerr();
}

// LIBVLC_API const char *libvlc_vprinterr (const char *fmt, va_list ap)

// LIBVLC_API const char *libvlc_printerr (const char *fmt, ...)

// LIBVLC_API libvlc_instance_t * libvlc_new( int argc , const char *const *argv )
HB_FUNC(LIBVLC_NEW)
{
  hb_retptr((libvlc_instance_t *)libvlc_new(hb_parni(1), NULL));
}

// LIBVLC_API void libvlc_release( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_RELEASE)
{
  libvlc_release(libvlc_instance_par(1));
}

// LIBVLC_API void libvlc_retain( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_RETAIN)
{
  libvlc_retain(libvlc_instance_par(1));
}

// LIBVLC_API int libvlc_add_intf( libvlc_instance_t *p_instance, const char *name )
HB_FUNC(LIBVLC_ADD_INTF)
{
  hb_retni((int)libvlc_add_intf(libvlc_instance_par(1), hb_parc(2)));
}

// LIBVLC_API void libvlc_set_exit_handler( libvlc_instance_t *p_instance, void (*cb) (void *), void *opaque )

// LIBVLC_API void libvlc_set_user_agent( libvlc_instance_t *p_instance, const char *name, const char *http )
HB_FUNC(LIBVLC_SET_USER_AGENT)
{
  libvlc_set_user_agent(libvlc_instance_par(1), hb_parc(2), hb_parc(3));
}

// LIBVLC_API void libvlc_set_app_id( libvlc_instance_t *p_instance, const char *id, const char *version, const char *icon )
HB_FUNC(LIBVLC_SET_APP_ID)
{
  libvlc_set_app_id(libvlc_instance_par(1), hb_parc(2), hb_parc(3), hb_parc(4));
}

// LIBVLC_API const char * libvlc_get_version(void)
HB_FUNC(LIBVLC_GET_VERSION)
{
  hb_retc(libvlc_get_version());
}

// LIBVLC_API const char * libvlc_get_compiler(void)
HB_FUNC(LIBVLC_GET_COMPILER)
{
  hb_retc(libvlc_get_compiler());
}

// LIBVLC_API const char * libvlc_get_changeset(void)
HB_FUNC(LIBVLC_GET_CHANGESET)
{
  hb_retc(libvlc_get_changeset());
}

// LIBVLC_API void libvlc_free( void *ptr )
HB_FUNC(LIBVLC_FREE)
{
  libvlc_free(hb_parptr(1));
}

// LIBVLC_API int libvlc_event_attach( libvlc_event_manager_t *p_event_manager, libvlc_event_type_t i_event_type, libvlc_callback_t f_callback, void *user_data )

// LIBVLC_API void libvlc_event_detach( libvlc_event_manager_t *p_event_manager, libvlc_event_type_t i_event_type, libvlc_callback_t f_callback, void *p_user_data )

// LIBVLC_API const char * libvlc_event_type_name( libvlc_event_type_t event_type )
HB_FUNC(LIBVLC_EVENT_TYPE_NAME)
{
  hb_retc(libvlc_event_type_name((libvlc_event_type_t)hb_parni(1)));
}

// LIBVLC_API void libvlc_log_get_context(const libvlc_log_t *ctx, const char **module, const char **file, unsigned *line)

// LIBVLC_API void libvlc_log_get_object(const libvlc_log_t *ctx, const char **name, const char **header, uintptr_t *id)

// LIBVLC_API void libvlc_log_unset( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_LOG_UNSET)
{
  libvlc_log_unset(libvlc_instance_par(1));
}

// LIBVLC_API void libvlc_log_set( libvlc_instance_t *p_instance, libvlc_log_cb cb, void *data )

// LIBVLC_API void libvlc_log_set_file( libvlc_instance_t *p_instance, FILE *stream )

// LIBVLC_API void libvlc_module_description_list_release( libvlc_module_description_t *p_list )
HB_FUNC(LIBVLC_MODULE_DESCRIPTION_LIST_RELEASE)
{
  libvlc_module_description_list_release(libvlc_module_description_par(1));
}

// LIBVLC_API libvlc_module_description_t *libvlc_audio_filter_list_get( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_AUDIO_FILTER_LIST_GET)
{
  hb_retptr((libvlc_module_description_t *)libvlc_audio_filter_list_get(libvlc_instance_par(1)));
}

// LIBVLC_API libvlc_module_description_t *libvlc_video_filter_list_get( libvlc_instance_t *p_instance )
HB_FUNC(LIBVLC_VIDEO_FILTER_LIST_GET)
{
  hb_retptr((libvlc_module_description_t *)libvlc_video_filter_list_get(libvlc_instance_par(1)));
}

// LIBVLC_API int64_t libvlc_clock(void)
HB_FUNC(LIBVLC_CLOCK)
{
  hb_retnl(libvlc_clock());
}

//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#include <vlc/vlc.h>
#include <hbapi.h>
#include <hbapierr.h>
#include "hblibvlc.h"

// LIBVLC_API libvlc_media_list_t * libvlc_media_list_new(libvlc_instance_t *p_instance)
HB_FUNC(LIBVLC_MEDIA_LIST_NEW)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media_list(libvlc_media_list_new(libvlc_par_instance(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_release(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_RELEASE)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_release((libvlc_media_list_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_retain(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_RETAIN)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_retain((libvlc_media_list_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_set_media(libvlc_media_list_t *p_ml, libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_SET_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_media_list_set_media((libvlc_media_list_t *)hb_parptr(1), libvlc_par_media(2));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t * libvlc_media_list_media(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_MEDIA)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_media(libvlc_media_list_media((libvlc_media_list_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_add_media(libvlc_media_list_t *p_ml, libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_ADD_MEDIA)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_list_add_media((libvlc_media_list_t *)hb_parptr(1), libvlc_par_media(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_insert_media(libvlc_media_list_t *p_ml, libvlc_media_t *p_md, int i_pos)
HB_FUNC(LIBVLC_MEDIA_LIST_INSERT_MEDIA)
{
  if (hb_pcount() == 3 && HB_ISPOINTER(1) && HB_ISPOINTER(2) && HB_ISNUM(3))
  {
    libvlc_ret_int(libvlc_media_list_insert_media((libvlc_media_list_t *)hb_parptr(1), libvlc_par_media(2), libvlc_par_int(3)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_remove_index(libvlc_media_list_t *p_ml, int i_pos)
HB_FUNC(LIBVLC_MEDIA_LIST_REMOVE_INDEX)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_int(libvlc_media_list_remove_index((libvlc_media_list_t *)hb_parptr(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_count(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_COUNT)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_list_count((libvlc_media_list_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_media_t * libvlc_media_list_item_at_index(libvlc_media_list_t *p_ml, int i_pos)
HB_FUNC(LIBVLC_MEDIA_LIST_ITEM_AT_INDEX)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISNUM(2))
  {
    libvlc_ret_media(libvlc_media_list_item_at_index((libvlc_media_list_t *)hb_parptr(1), libvlc_par_int(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_index_of_item(libvlc_media_list_t *p_ml, libvlc_media_t *p_md)
HB_FUNC(LIBVLC_MEDIA_LIST_INDEX_OF_ITEM)
{
  if (hb_pcount() == 2 && HB_ISPOINTER(1) && HB_ISPOINTER(2))
  {
    libvlc_ret_int(libvlc_media_list_index_of_item((libvlc_media_list_t *)hb_parptr(1), libvlc_par_media(2)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API int libvlc_media_list_is_readonly(libvlc_media_list_t * p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_IS_READONLY)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_int(libvlc_media_list_is_readonly((libvlc_media_list_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_lock(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_LOCK)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_lock((libvlc_media_list_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API void libvlc_media_list_unlock(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_UNLOCK)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_media_list_unlock((libvlc_media_list_t *)hb_parptr(1));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

// LIBVLC_API libvlc_event_manager_t * libvlc_media_list_event_manager(libvlc_media_list_t *p_ml)
HB_FUNC(LIBVLC_MEDIA_LIST_EVENT_MANAGER)
{
  if (hb_pcount() == 1 && HB_ISPOINTER(1))
  {
    libvlc_ret_event_manager(libvlc_media_list_event_manager((libvlc_media_list_t *)hb_parptr(1)));
  }
  else
  {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}

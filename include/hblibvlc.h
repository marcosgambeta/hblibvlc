//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

#ifndef HBLIBVLC_H
#define HBLIBVLC_H

// macros for parameters
#define libvlc_par_instance(n) (libvlc_instance_t *)hb_parptr(n)
#define libvlc_par_module_description(n) (libvlc_module_description_t *)hb_parptr(n)
#define libvlc_par_media_player(n) (libvlc_media_player_t *)hb_parptr(n)
#define libvlc_par_media(n) (libvlc_media_t *)hb_parptr(n)
#define libvlc_par_equalizer(n) (libvlc_equalizer_t *)hb_parptr(n)
#define libvlc_par_renderer_item(n) (libvlc_renderer_item_t *)hb_parptr(n)
#define libvlc_par_unsigned(n) (unsigned)hb_parni(n)
#define libvlc_par_event_type(n) (libvlc_event_type_t)hb_parni(n)
#define libvlc_par_float(n) (float)hb_parnd(n)
#define libvlc_par_int(n) hb_parni(n)
#define libvlc_par_dialog_id(n) (libvlc_dialog_id *)hb_parptr(n)
#define libvlc_par_int64(n) (int64_t)hb_parnl(n) // TODO: fix
#define libvlc_par_media_library(n) (libvlc_media_library_t *)hb_parptr(n)
#define libvlc_par_media_discoverer(n) (libvlc_media_discoverer_t *)hb_parptr(n)
#define libvlc_par_media_list(n) (libvlc_media_list_t *)hb_parptr(n)
#define libvlc_par_media_list_player(n) (libvlc_media_list_player_t *)hb_parptr(n)
#define libvlc_par_track_description(n) (libvlc_track_description_t *)hb_parptr(n)
#define libvlc_par_audio_output(n) (libvlc_audio_output_t *)hb_parptr(n)

// macros for return
#define libvlc_ret_int(x) hb_retni(x)
#define libvlc_ret_unsigned(x) hb_retni(x)
#define libvlc_ret_float(x) hb_retnd(x)
#define libvlc_ret_instance(x) hb_retptr(x)
#define libvlc_ret_module_description(x) hb_retptr(x)
#define libvlc_ret_int64(x) hb_retnl(x) // TODO: fix
#define libvlc_ret_equalizer(x) hb_retptr(x)
#define libvlc_ret_media(x) hb_retptr(x)
#define libvlc_ret_event_manager(x) hb_retptr(x)
#define libvlc_ret_voidptr(x) hb_retptr(x)
#define libvlc_ret_media_discoverer(x) hb_retptr(x)
#define libvlc_ret_media_list(x) hb_retptr(x)
#define libvlc_ret_media_player(x) hb_retptr(x)
#define libvlc_ret_media_library(x) hb_retptr(x)
#define libvlc_ret_media_list_player(x) hb_retptr(x)
#define libvlc_ret_video_viewpoint(x) hb_retptr(x)
#define libvlc_ret_track_description(x) hb_retptr(x)
#define libvlc_ret_audio_output(x) hb_retptr(x)
#define libvlc_ret_audio_output_device(x) hb_retptr(x)
#define libvlc_ret_renderer_item(x) hb_retptr(x)
#define libvlc_ret_renderer_discoverer(x) hb_retptr(x)

#endif // HBLIBVLC_H

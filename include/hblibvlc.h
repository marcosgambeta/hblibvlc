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

// macros for return
#define libvlc_ret_int(x) hb_retni(x)
#define libvlc_ret_unsigned(x) hb_retni(x)
#define libvlc_ret_float(x) hb_retnd(x)

#endif // HBLIBVLC_H

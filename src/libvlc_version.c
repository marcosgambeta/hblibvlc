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

// LibVLC major version number
#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION_MAJOR)
{
  if (hb_pcount() == 0) {
    hb_retni(LIBVLC_VERSION_MAJOR);
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LibVLC minor version number
#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION_MINOR)
{
  if (hb_pcount() == 0) {
    hb_retni(LIBVLC_VERSION_MINOR);
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LibVLC revision
#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION_REVISION)
{
  if (hb_pcount() == 0) {
    hb_retni(LIBVLC_VERSION_REVISION);
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION_EXTRA)
{
  if (hb_pcount() == 0) {
    hb_retni(LIBVLC_VERSION_EXTRA);
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// Makes a single integer from a LibVLC version numbers
#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION)
{
  if (hb_pcount() == 4 && HB_ISNUM(1) && HB_ISNUM(2) && HB_ISNUM(3) && HB_ISNUM(4)) {
    hb_retni(LIBVLC_VERSION(hb_parni(1), hb_parni(2), hb_parni(3), hb_parni(4)));
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

// LibVLC full version as a single integer (for comparison)
#if LIBVLC_VERSION_INT >= 0x01010400
HB_FUNC(LIBVLC_VERSION_INT)
{
  if (hb_pcount() == 0) {
    hb_retni(LIBVLC_VERSION_INT);
  } else {
    hb_errRT_BASE(EG_ARG, 3012, NULL, HB_ERR_FUNCNAME, HB_ERR_ARGS_BASEPARAMS);
  }
}
#endif

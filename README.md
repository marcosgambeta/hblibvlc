# hblibvlc
libvlc for Harbour++, Harbour and xHarbour

This library is a work in progress.

Binaries for MS-Windows - download and extract the file below:

https://www.nuget.org/api/v2/package/VideoLAN.LibVLC.Windows/3.0.21

build\x86: libvlc for 32-bit

build\x64: libvlc for 64-bit

Set the variables below for 32-bit:

```
set VLC_INC_DIR=\libvlc\build\x86\include  
set VLC_LIB_DIR=\libvlc\build\x86  
```

Set the variables below for 64-bit:

```
set VLC_INC_DIR=\libvlc\build\x64\include  
set VLC_LIB_DIR=\libvlc\build\x64  
```

Adjust the paths to your environment.

To compile the library:

```
hbmk2 hblibvlc.hbp
```

To compile the tests:

```
hbmk2 test1 ../hblibvlc.hbc
```

Requisites to run the tests:

plugins folder  
libvlc.dll  
libvlccore.dll  

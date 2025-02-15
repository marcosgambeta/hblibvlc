rem batch to import the libvlc libraries using BCC64

mkexp lib\libvlc64.a %LIBVLC_LIB_DIR%\libvlc.dll
mkexp lib\libvlccore64.a %LIBVLC_LIB_DIR%\libvlccore.dll

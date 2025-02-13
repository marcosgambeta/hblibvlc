rem batch to import the libvlc libraries using BCC

implib -a lib\libvlc %LIBVLC_LIB_DIR%\libvlc.dll
implib -a lib\libvlccore %LIBVLC_LIB_DIR%\libvlccore.dll

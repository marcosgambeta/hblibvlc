rem batch to compile the library using xHarbour and BCC64

del lib\hblibvlc64.a

bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_dialog.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media_discoverer.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media_library.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media_list.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media_list_player.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_media_player.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_renderer_discoverer.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_version.c
bcc64 -O2 -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude -Wno-typedef-redefinition src\libvlc_vlm.c

for %%1 in (*.o) do tlib64 /P64 lib\hblibvlc64.a +%%1

del *.o
del lib\*.bak

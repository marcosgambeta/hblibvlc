rem batch to compile the library using xHarbour and BCC

del lib\hblibvlc.lib

bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_dialog.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_discoverer.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_library.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_list.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_list_player.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_player.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_renderer_discoverer.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_version.c
bcc32 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_vlm.c

for %%1 in (*.obj) do tlib /P64 lib\hblibvlc.lib +%%1

del *.obj
del lib\*.bak

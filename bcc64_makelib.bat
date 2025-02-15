rem batch to compile the library using xHarbour and BCC64

del lib\hblibvlc64.a

bcc64 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc.c
bcc64 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media.c
bcc64 -O2 -d -c -I%HB_PATH%\include -I%LIBVLC_INC_DIR% -Iinclude src\libvlc_media_player.c

for %%1 in (*.o) do tlib64 /P64 lib\hblibvlc64.a +%%1

del *.o
del lib\*.bak

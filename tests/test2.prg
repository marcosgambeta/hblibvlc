//
// hblibvlc test
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta@outlook.com>
//

// Compile with:
// hbmk2 test2

FUNCTION Main()

   LOCAL vlc_instance
   LOCAL player
   LOCAL video_path
   LOCAL media

   CLS

   ? "version=", version()
   ? "compiler=", hb_compiler()
   ? "libvlc version=", libvlc_get_version()
   ? "libvlc compiler=", libvlc_get_compiler()
   ? "libvlc changeset=", libvlc_get_changeset()

   // initialize libVLC
   vlc_instance := libvlc_new(0, NIL)
   ? "vlc_instance=", vlc_instance

   IF Empty(vlc_instance)
      ? "libvlc_new failed"
      ? libvlc_errmsg()
      QUIT
   ENDIF

   // create a media player
   player := libvlc_media_player_new(vlc_instance)
   ? "player=", player

   IF Empty(player)
      ? "libvlc_media_player_new failed"
      ? libvlc_errmsg()
      libvlc_release(vlc_instance)
      QUIT
   ENDIF

   // create media from a path (put the path in a file named path.txt)
   video_path := memoread("path.txt")
   ? "video_path=", video_path
   media := libvlc_media_new_path(vlc_instance, video_path)
   ? "media=", media

   IF Empty(media)
      ? "libvlc_media_new_path failed"
      ? libvlc_errmsg()
      libvlc_media_player_release(player)
      libvlc_release(vlc_instance)
      QUIT
   ENDIF

   // set the media to the player
   libvlc_media_player_set_media(player, media)

   // play the video
   libvlc_media_player_play(player)

   ? "Press Enter to stop playing..."
   WAIT // wait for user input to stop

   // clean up
   libvlc_media_player_stop(player)
   libvlc_media_release(media)
   libvlc_media_player_release(player)
   libvlc_release(vlc_instance)

RETURN NIL

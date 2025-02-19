//
// hblibvlc test
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta AT outlook DOT com>
//

// Compile with:
// hbmk2 test1 ../hblibvlc.hbc

FUNCTION Main()

   LOCAL vlc_instance
   LOCAL player
   LOCAL video_url
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
      QUIT
   ENDIF

   // create media from a URL (put the URL in a file named url.txt)
   video_url := memoread("url.txt")
   ? "video_url=", video_url
   media := libvlc_media_new_location(vlc_instance, video_url)
   ? "media=", media

   IF Empty(media)
      ? "libvlc_media_new_location failed"
      ? libvlc_errmsg()
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

RETURN 0

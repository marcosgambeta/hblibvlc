//
// hblibvlc test
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta@outlook.com>
//

// Compile with:
// hbmk2 hmgextpp1 \path_to_hmgextpp\hmgextpp.hbc

#include "minigui.ch"

PROCEDURE Main()

   LOCAL vlc_instance
   LOCAL player
   LOCAL video_url
   LOCAL media

   // initialize libVLC
   vlc_instance := libvlc_new(0, NIL)

   IF Empty(vlc_instance)
      MsgInfo("libvlc_new failed")
      QUIT
   ENDIF

   // create a media player
   player := libvlc_media_player_new(vlc_instance)

   IF Empty(player)
      MsgInfo("libvlc_media_player_new failed")
      libvlc_release(vlc_instance)
      QUIT
   ENDIF

   // create media from a URL (put the URL in a file named url.txt)
   video_url := memoread("url.txt")
   media := libvlc_media_new_location(vlc_instance, video_url)

   IF Empty(media)
      MsgInfo("libvlc_media_new_location failed")
      libvlc_media_player_release(player)
      libvlc_release(vlc_instance)
      QUIT
   ENDIF

   // set the media to the player
   libvlc_media_player_set_media(player, media)

   DEFINE WINDOW MainWindow ;
      AT 100, 100 ;
      WIDTH 640 ;
      HEIGHT 480 ;
      TITLE "Test1" ;
      MAIN ;
      ON INIT {|| ;
         libvlc_media_player_set_hwnd(player, MainWindow.handle), ;
         libvlc_media_player_play(player)}

      DEFINE MAIN MENU
         POPUP "Menu"
            ITEM "Option &1" ACTION MsgInfo("Option 1")
            ITEM "Option &2" ACTION MsgInfo("Option 2")
            ITEM "E&xit" ACTION MainWindow.Release
         END POPUP
      END MENU

   END WINDOW

   ACTIVATE WINDOW MainWindow

   // clean up
   libvlc_media_player_stop(player)
   libvlc_media_release(media)
   libvlc_media_player_release(player)
   libvlc_release(vlc_instance)

RETURN

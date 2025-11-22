//
// hblibvlc - Binding library for Harbour++/Harbour/xHarbour and libvlc
//
// Copyright (c) 2025 Marcos Antonio Gambeta <marcosgambeta@outlook.com>
//

#ifndef LIBVLC_EVENTS_CH
#define LIBVLC_EVENTS_CH

// enum libvlc_event_e
#define libvlc_MediaMetaChanged              0
#define libvlc_MediaSubItemAdded             1
#define libvlc_MediaDurationChanged          2
#define libvlc_MediaParsedChanged            3
#define libvlc_MediaFreed                    4
#define libvlc_MediaStateChanged             5
#define libvlc_MediaSubItemTreeAdded         6
#define libvlc_MediaPlayerMediaChanged=0x100 7
#define libvlc_MediaPlayerNothingSpecial     8
#define libvlc_MediaPlayerOpening            9
#define libvlc_MediaPlayerBuffering          10
#define libvlc_MediaPlayerPlaying            11
#define libvlc_MediaPlayerPaused             12
#define libvlc_MediaPlayerStopped            13
#define libvlc_MediaPlayerForward            14
#define libvlc_MediaPlayerBackward           15
#define libvlc_MediaPlayerEndReached         16
#define libvlc_MediaPlayerEncounteredError   17
#define libvlc_MediaPlayerTimeChanged        18
#define libvlc_MediaPlayerPositionChanged    19
#define libvlc_MediaPlayerSeekableChanged    20
#define libvlc_MediaPlayerPausableChanged    21
#define libvlc_MediaPlayerTitleChanged       22
#define libvlc_MediaPlayerSnapshotTaken      23
#define libvlc_MediaPlayerLengthChanged      24
#define libvlc_MediaPlayerVout               25
#define libvlc_MediaPlayerScrambledChanged   26
#define libvlc_MediaPlayerESAdded            27
#define libvlc_MediaPlayerESDeleted          28
#define libvlc_MediaPlayerESSelected         29
#define libvlc_MediaPlayerCorked             30
#define libvlc_MediaPlayerUncorked           31
#define libvlc_MediaPlayerMuted              32
#define libvlc_MediaPlayerUnmuted            33
#define libvlc_MediaPlayerAudioVolume        34
#define libvlc_MediaPlayerAudioDevice        35
#define libvlc_MediaPlayerChapterChanged     36
#define libvlc_MediaListItemAdded=0x200      37
#define libvlc_MediaListWillAddItem          38
#define libvlc_MediaListItemDeleted          39
#define libvlc_MediaListWillDeleteItem       40
#define libvlc_MediaListEndReached           41
#define libvlc_MediaListViewItemAdded=0x300  42
#define libvlc_MediaListViewWillAddItem      43
#define libvlc_MediaListViewItemDeleted      44
#define libvlc_MediaListViewWillDeleteItem   45
#define libvlc_MediaListPlayerPlayed=0x400   46
#define libvlc_MediaListPlayerNextItemSet    47
#define libvlc_MediaListPlayerStopped        48
#define libvlc_MediaDiscovererStarted=0x500  49
#define libvlc_MediaDiscovererEnded          50
#define libvlc_RendererDiscovererItemAdded   51
#define libvlc_RendererDiscovererItemDeleted 52
#define libvlc_VlmMediaAdded=0x600           53
#define libvlc_VlmMediaRemoved               54
#define libvlc_VlmMediaChanged               55
#define libvlc_VlmMediaInstanceStarted       56
#define libvlc_VlmMediaInstanceStopped       57
#define libvlc_VlmMediaInstanceStatusInit    58
#define libvlc_VlmMediaInstanceStatusOpening 59
#define libvlc_VlmMediaInstanceStatusPlaying 60
#define libvlc_VlmMediaInstanceStatusPause   61
#define libvlc_VlmMediaInstanceStatusEnd     62
#define libvlc_VlmMediaInstanceStatusError   63

#endif // _LIBVLC_EVENTS_CH

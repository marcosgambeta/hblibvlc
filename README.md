# hblibvlc

* [English](#english)
* [Portuguese](#portuguese)

## English

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
hbmk2 test1
```

The tests require a file called url.txt with a link to reproduce.

Example:  
https://archive.org/download/CC_1916_09_04_TheCount/CC_1916_09_04_TheCount_512kb.mp4  

Note that test2.prg requires a file called path.txt pointing to a local file.

Example:  
C:\Users\marco\Videos\CC_1916_09_04_TheCount/CC_1916_09_04_TheCount_512kb.mp4  

Requisites to run the tests:

plugins folder  
libvlc.dll  
libvlccore.dll  

### Links

https://www.videolan.org/vlc/libvlc.html  
https://www.nuget.org/packages/VideoLAN.LibVLC.Windows  

## Portuguese

libvlc para Harbour++, Harbour e xHarbour

Esta biblioteca é um trabalho em progresso.

Binários para MS-Windows - baixe e extraia o arquivo abaixo:

https://www.nuget.org/api/v2/package/VideoLAN.LibVLC.Windows/3.0.21

build\x86: libvlc para 32-bit

build\x64: libvlc para 64-bit

Defina as variáveis abaixo para 32-bit:

```
set VLC_INC_DIR=\libvlc\build\x86\include  
set VLC_LIB_DIR=\libvlc\build\x86  
```

Defina as variáveis abaixo para 64-bit:

```
set VLC_INC_DIR=\libvlc\build\x64\include  
set VLC_LIB_DIR=\libvlc\build\x64  
```

Ajuste os caminhos conforme seu ambiente de desenvolvimento.

Para compilar a biblioteca:

```
hbmk2 hblibvlc.hbp
```

Para compilar os testes:

```
hbmk2 test1
```

Os testes requerem um arquivo denominado url.txt contendo um link para ser reproduzido.

Exemplo:  
https://archive.org/download/CC_1916_09_04_TheCount/CC_1916_09_04_TheCount_512kb.mp4  

Note que test2.prg requer um arquivo chamado path.txt apontando para um arquivo local.

Exemplo:  
C:\Users\marco\Videos\CC_1916_09_04_TheCount/CC_1916_09_04_TheCount_512kb.mp4  

Requisitos para executar os testes:

pasta de plugins  
libvlc.dll  
libvlccore.dll  

### Links

https://www.videolan.org/vlc/libvlc.html  
https://www.nuget.org/packages/VideoLAN.LibVLC.Windows  

### Donativos

Se esta biblioteca for útil para você e desejar apoiar seu desenvolvimento através de donativos,
basta utilizar a chave Pix abaixo:

marcosgambeta@outlook.com

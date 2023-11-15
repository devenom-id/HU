# Bash::Manejando la Terminal - De 0 a 1000 #3
<b>By: Darth Venom - 18/12/2020</b>
<br>
<br>
Instalar y desinstalar programas es algo que comúnmente se hace a través de tiendas como Google Play Store en Android, los instaladores que existen para los programas de Windows y la App Store para las aplicaciones de los sistemas IOS. En este blog se explicará cuál es la forma de instalar y desinstalar paquetes desde la terminal en varias de las distribuciones GNU/Linux más famosas.

<center>Algunos lectores podrían preguntarse qué es un paquete cuando hablamos de instalar paquetes, o si existe una diferencia entre decir paquete y decir programa. Hay diferencia, porque un programa es un archivo ejecutable que posee un código fuente que contiene instrucciones que serán llevadas a cabo por la computadora, en cambio, un paquete es un conjunto de archivos comprimidos. Entre los archivos que puede contener un paquete se encuentran programas, archivos de bases de datos, Readme y archivos varios.</center>

Lo que se usa para instalar fácil, rápida y seguramente los programas en GNU/Linux es un gestor de paquetes, y cada distribución tiene su gestor de paquetes. Lo que hacen estos gestores es administrar los programas en el sistema, por ejemplo, si el usuario quisiera instalar un programa usa su gestor de paquetes, el cuál descarga el paquete solicitado desde los repositorios de la distribución, luego descomprime el paquete, lo configura y coloca los archivos del paquete en las carpetas que corresponden. El gestor sabe dónde poner los programas y otros archivos que traen los paquetes debido a que hay cierto archivo que viene en cada paquete que indica en qué directorio va cada cosa.

<center>*Otra cosa que algunos lectores podrían desconocer es el término "dependencia". Un programa A es dependencia de otro programa B cuando el programa B requiere de la existencia del programa A en el sistema para poder funcionar. Los gestores de paquetes resuelven automáticamente las dependencias de cada paquete a la hora de instalarlos.*</center>

Entre las distribuciones que serán tratadas en este blog no puede faltar Debian, teniendo esto en cuenta, el lector debe reconocer que la sección sobre gestión de paquetes en Debian también se puede aplicar al emulador Termux disponible para sistemas Android.

Hay un dato importante, el índice que se encuentra más abajo apunta a las distribuciones GNU/Linux independientes más grandes, ocurre que si estás usando una distribución derivada tendrás que saber de cuál de las distribuciones grandes deriva. Para eso la siguiente lista que contiene algunas de las derivadas más famosas y de qué distro provienen:

## [Debian](http://aminoapps.com/p/t0emz38)

Ubuntu (Lubuntu, Kubuntu, Xubuntu)
Linux Mint
Deepin
AntiX
PureOS
Kali Linux
Parrot OS
Devuan
Knoppix
Av Linux

## [Arch](http://aminoapps.com/p/j2817l)

Manjaro
Anarchy Linux
Artix Linux
Chakra
Velt/OS
ArcoLinux
ArchLabs Linux
Archman Linux
EndeavourOS
Black Arch

## OpenSUSE

SUSE Studio
SUSE Linux Enterprise Desktop
SUSE Linux Enterprise Server
GeckoLinux
Linux Kamarada

## [Fedora](http://aminoapps.com/p/w07w8w)

Berry Linux
FX64 Linux
Network Security Toolkit (NST)
FedBerry
Amahi
Qubes OS
IGOS Nusantara (IGN)
VortexBox
Korora
Arquetype

## Slackware

Wifislax
BackTrack
DeLi Linux
Frugalware
Porteus
Salix OS
Slax
VectorLinux
Zenwalk Linux
RIPLinux

## Gentoo

Sabayon Linux
Calculate Linux
RedCore Linux
Gentoo Studio
Funtoo
Exherbo
Daphile
Pentoo
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

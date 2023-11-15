# Bash::Manejando la Terminal - De 0 a 1000 #3
<b>By: Darth Venom - 18/12/2020</b>
<br>
<br>
Instalar y desinstalar programas es algo que comúnmente se hace a través de tiendas como Google Play Store en Android, los instaladores que existen para los programas de Windows y la App Store para las aplicaciones de los sistemas IOS. En este blog se explicará cuál es la forma de instalar y desinstalar paquetes desde la terminal en varias de las distribuciones GNU/Linux más famosas.

Algunos lectores podrían preguntarse qué es un paquete cuando hablamos de instalar paquetes, o si existe una diferencia entre decir paquete y decir programa. Hay diferencia, porque un programa es un archivo ejecutable que posee un código fuente que contiene instrucciones que serán llevadas a cabo por la computadora, en cambio, un paquete es un conjunto de archivos comprimidos. Entre los archivos que puede contener un paquete se encuentran programas, archivos de bases de datos, Readme y archivos varios.

Lo que se usa para instalar fácil, rápida y seguramente los programas en GNU/Linux es un gestor de paquetes, y cada distribución tiene su gestor de paquetes. Lo que hacen estos gestores es administrar los programas en el sistema, por ejemplo, si el usuario quisiera instalar un programa usa su gestor de paquetes, el cuál descarga el paquete solicitado desde los repositorios de la distribución, luego descomprime el paquete, lo configura y coloca los archivos del paquete en las carpetas que corresponden. El gestor sabe dónde poner los programas y otros archivos que traen los paquetes debido a que hay cierto archivo que viene en cada paquete que indica en qué directorio va cada cosa.

Otra cosa que algunos lectores podrían desconocer es el término "dependencia". Un programa A es dependencia de otro programa B cuando el programa B requiere de la existencia del programa A en el sistema para poder funcionar. Los gestores de paquetes resuelven automáticamente las dependencias de cada paquete a la hora de instalarlos.*

Entre las distribuciones que serán tratadas en este blog no puede faltar Debian, teniendo esto en cuenta, el lector debe reconocer que la sección sobre gestión de paquetes en Debian también se puede aplicar al emulador Termux disponible para sistemas Android.

Hay un dato importante, el índice que se encuentra más abajo apunta a las distribuciones GNU/Linux independientes más grandes, ocurre que si estás usando una distribución derivada tendrás que saber de cuál de las distribuciones grandes deriva. Para eso la siguiente lista que contiene algunas de las derivadas más famosas y de qué distro provienen:

## [Debian](http://aminoapps.com/p/t0emz38)

Ubuntu (Lubuntu, Kubuntu, Xubuntu)<br>
Linux Mint<br>
Deepin<br>
AntiX<br>
PureOS<br>
Kali Linux<br>
Parrot OS<br>
Devuan<br>
Knoppix<br>
Av Linux<br>

## [Arch](http://aminoapps.com/p/j2817l)

Manjaro<br>
Anarchy Linux<br>
Artix Linux<br>
Chakra<br>
Velt/OS<br>
ArcoLinux<br>
ArchLabs Linux<br>
Archman Linux<br>
EndeavourOS<br>
Black Arch<br>

## OpenSUSE

SUSE Studio<br>
SUSE Linux Enterprise Desktop<br>
SUSE Linux Enterprise Server<br>
GeckoLinux<br>
Linux Kamarada<br>

## [Fedora](http://aminoapps.com/p/w07w8w)

Berry Linux<br>
FX64 Linux<br>
Network Security Toolkit (NST)<br>
FedBerry<br>
Amahi<br>
Qubes OS<br>
IGOS Nusantara (IGN)<br>
VortexBox<br>
Korora<br>
Arquetype<br>

## Slackware

Wifislax<br>
BackTrack<br>
DeLi Linux<br>
Frugalware<br>
Porteus<br>
Salix OS<br>
Slax<br>
VectorLinux<br>
Zenwalk Linux<br>
RIPLinux<br>

## Gentoo

Sabayon Linux<br>
Calculate Linux<br>
RedCore Linux<br>
Gentoo Studio<br>
Funtoo<br>
Exherbo<br>
Daphile<br>
Pentoo<br>
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

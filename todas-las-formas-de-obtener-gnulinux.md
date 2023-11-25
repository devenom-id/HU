# Todas Las Formas De Obtener GNU/Linux
<b>By: Darth Venom - 11/03/2022</b>
<br>
<br>
Este blog tenía pensado hacerlo para aquellos usuarios que quieren obtener GNU/Linux pero no terminan de convencerse. En este blog podrán ver que hay montones de opciones para adquirir GNU/Linux, por lo tanto, si alguna no es conveniente para algunos usuarios, puede que otra de las opciones sí lo sea, así que hay muchas formas de interactuar con este sistema, ya sea para tener un primer acercamiento, para probarlo, o para uso diario.
<br>
<center><i>¿No sabes qué es GNU/Linux?</i></center>
<br>
<center>Entérate <a href="http://aminoapps.com/p/2m7h3f">aquí</a>.</center>
<br>
## SISTEMA ANFITRIÓN
<br>
Una de las formas que hay para instalar GNU es reemplazando el sistema operativo que venía con la computadora y dejando GNU/Linux como sistema único en la máquina. Como GNU no es Windows, muchos usuarios sin experiencia en el tema tal vez opten por posponer una opción así hasta al menos tener experiencia con sistemas GNU.
<br>
Esta opción es la más fácil de todas. Lo único que se requiere para hacer esto es un disco de instalación o una unidad USB booteable con una imagen ISO de instalación de alguna distribución GNU/Linux. La creación de unidad USB se explica en el blog [GNU/Linux - Introducción](linux4.html). Si no sabes qué es una distribución o cuál elegir, esto se explica en el blog [Cuál distro de GNU/Linux elegir y por qué](linux3.html).
<br>
Teniendo la unidad USB lista, arrancarás el programa de instalación y cuando pregunte cómo quieres instalar el sistema habrá una opción de "borrar disco", esto borrará todos los datos del disco dejando la distribución que hayas elegido como sistema único.
<br>
## DUAL BOOT
<br>
Esta opción es similar a la anterior, ya que implica instalar el sistema directamente en una partición del disco duro, la única diferencia es que no implica eliminar ningún dato ni otros sistemas. Es decir, de esta forma se puede almacenar más de un sistema operativo en un mismo disco duro, pero sólo podrás usar uno a la vez. A esto se lo llama dual boot, y al tener más de un sistema en el disco podrás elegir cuál usar al momento de encender la computadora.
<br>
Para hacer un dual boot necesitarás lo mismo que para instalar GNU como sistema anfitrión, un disco de instalación o una unidad USB booteable con una imagen ISO de instalación de alguna distribución GNU/Linux. La creación de unidad USB se explica en el blog [GNU/Linux - Introducción](linux4.html). Si no sabes qué es una distribución o cuál elegir, esto se explica en el blog [Cuál distro de GNU/Linux elegir y por qué](linux3.html).
<br>
Durante el programa de instalación cuando pregunte cómo quieres instalar el sistema posiblemente haya una opción de instalar junto a otro sistema. Esta opción te permitirá crear un dual boot. Y una opción mejor es la opción de particionado avanzado que siempre se encuentra en esos menúes independientemente de la distribución, pero esta última opción es para usuarios avanzados.
<br>
## VIRTUAL MACHINE
<br>
Usar máquinas virtuales es una opción un tanto más segura que las anteriores si no estás convencido de instalar GNU directamente en el disco. Las máquinas virtuales son pseudo-computadoras emuladas por software, es como tener una computadora dentro de tu computadora. El software de los programas de máquinas virtuales emula el hardware usando la tecnología de virtualización, y así es como se puede correr un sistema completo de forma aislada, de una forma en la que todo lo que ocurra en la máquina virtual no afectará al sistema principal.
<br>
Para crear una máquina virtual necesitarás un programa que sirva para eso, por ejemplo, VirtualBox o VMware. A parte de eso, necesitarás la ISO de la distro que quieres instalarle a la máquina.
<br>
La máquina incluso emula un disco duro, así que a la hora de seleccionar dónde quieres instalar el sistema, simplemente seleccionas que usarás todo el disco, el disco duro real no se verá afectado por lo que suceda en la máquina virtual.
<br>
Una máquina virtual puede encenderse y apagarse desde la aplicación de virtualización que tengas. Si ya no quieres más la máquina puedes simplemente hacer click derecho en ella y eliminarla. Puedes tener cuantas quieras.
<br>
## WINDOWS SUBSYSTEM FOR LINUX (WSL)
<br>
Existe un método para instalar un sistema GNU/Linux en tu disco y correrlo de forma simultanea junto a Windows sin necesidad de máquinas virtuales ni dual boot. El método consiste en usar WSL (Windows Subsystem For Linux). WSL es una característica opcional de Windows, lo que significa que esta debe ser activada a través de los ajustes del sistema; afortunadamente, [hay un artículo en la comunidad que explica cómo activarlo](wsl1.html).
<br>
WSL es una capa de compatibilidad mediante la cual se habilita la ejecución de binarios de Linux en Windows de forma nativa, actualmente este subsistema incluye un kernel Linux real, el cual se incorporó desde el lanzamiento de WSL2.
<br>
Tras activar WSL podrás dirigirte a la aplicación de la tienda de Microsoft y buscar el nombre de alguna distribución GNU/Linux por nombre, por ejemplo, Debian. Tras instalar cualquiera de estas distribuciones estarán disponibles en el menú de inicio de Windows como si fueran aplicaciones comunes y corrientes. En la primera ejecución muy probablemente se configuren las credenciales para el usuario, pero a simple vista lo primero que notarás es que no habrá entorno gráfico, tendrás acceso al sistema pero sólo podrás interactuar con él a través de la terminal.
<br>
Para habilitar interacciones con componentes gráficos se tendrán que instalar los paquetes pertinentes para el correcto funcionamiento de: Xorg, un entorno de escritorio (Fluxbox, por ejemplo), y VNC. Para visualizar el escritorio, desde la terminal del sistema GNU/Linux se iniciará un servidor VNC, y desde Windows, usando un cliente de VNC (TigerVNC o RealVNC, por ejemplo) el usuario se conectará al sistema GNU consiguiendo así interactuar de forma gráfica.
<br>
## LINUX CONTAINERS (LXC)
<br>
Si tienes un sistema GNU/Linux y te apetece hacer distro hopping, es decir, ir probando de distro en distro, pero no te agrada la idea de tener que estar particionando el disco, formateando y cambiando entradas en la EFI todo el tiempo, entonces debes echarle un vistazo a LXC.
<br>
LXC o Linux Containers, es una tecnología de virtualización a nivel de sistema operativo; no emula el hardware, sino que sólo corre sistemas operativos usando el kernel anfitrión, corriendo los programas en un espacio de memoria separado.
<br>
El punto interesante es que es relativamente sencillo de instalar y configurar y ofrece un sistema completamente funcional que puede ser utilizado para distintos propósitos; por ejemplo, probar programas, experimentar con el sistema de forma segura, o algo más útil e interesante, correr determinados programas demandantes en el contenedor para que al detener el contenedor se liberen totalmente los recursos utilizados por el programa y no queden demonios activos en segundo plano.
<br>
Para instalar LXC basta con instalar el paquete lxd.
El paquete lxd contiene el demonio lxd y el cliente lxc, a través del cual se pueden descargar e instalar distribuciones, encenderlas, apagarlas, o configurarlas. Lo que es relativamente más complicado es la configuración de red. Basta con configurar el firewall y configurar un bridge para poder usar la conexión a internet del sistema anfitrión.
<br>
Un aspecto más a destacar es que al igual que en VirtualBox con las máquinas virtuales, lxc soporta "carpetas compartidas", estos son directorios que pueden ser accedidos desde los dos sistemas.
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

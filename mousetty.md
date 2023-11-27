# Habilitar el mouse en la TTY
<b>By: Darth Venom - 29/03/2022</b>
<br>
<br>
Si eres un usuario de GNU/Linux que ha estudiado el sistema o ha explorado distribuciones enfocadas en la simpleza como Arch Linux, Gentoo o Slackware, seguramente te has topado o has interactuado con la TTY alguna vez.
<br>
Y para aquellos usuarios que han comenzado a leer este artículo pero no saben qué es una TTY, a continuación se dará un resumen al respecto. Una TTY es una terminal, pero no es como la terminal que abres comúnmente en tu entorno gráfico; la TTY es una terminal especial, es la forma más básica de interacción entre un usuario y una máquina. Las terminales que comúnmente se usan en realidad se llaman PTY o pseudoterminales, porque las terminales son las TTYs. Todas las capacidades y el funcionamiento en general que tienen las pseudoterminales es prestado por su TTY padre, y lo de TTY padre se dice porque las PTYs siempre son procesos que se ejecutan dentro de una TTY. Aquí ya hay una pregunta seguramente.
<br>
<center><i>¿Cómo es que las PTYs se abren dentro de TTYs si simplemente solemos abrirlas con la combinación de teclas CTRL+ALT+T?</i></center>
<br>
Y la respuesta para varios implicará una explosión cerebral. El entorno gráfico que ejecutas comúnmente, el navegador, los juegos que juegas y todo eso está corriendo sobre una TTY, o sea, sobre una terminal.
<br>
Retomando, si has instalado un sistema como Arch Linux, muy probablemente al arrancar el sistema ya hayas interactuado con la TTY, y tu principal sorpresa pudo haber sido que no hay ningún elemento gráfico, es decir, ni siquiera puedes usar el mouse, por lo tanto no puedes ni presionar cosas ni seleccionar texto, ni copiar, ni pegar. Y claro, las funciones de copiar y pegar son muy importantes por lo prácticas que son.
<br>
Existe una solución para el problema de que la TTY no soporte el uso del mouse, y para ello vamos a usar el paquete gpm.
<br>
<center><b>PASOS DE INSTALACIÓN DE GPM</b></center>
<br>
El primer paso es [instalar el paquete](term3.md) *gpm*. Posteriormente se debe configurar gpm, y para eso tenemos que abrir una shell con permisos de superusuario, para lo que usaremos el comando
<br>
```
sudo su
```
<br>
Al haber iniciado una shell con el usuario root, procederemos a configurar gpm ejecutando dicho programa del siguiente modo:
<br>
```
gpm -m /dev/psaux -t ps2
```
<br>
Tras hacer esto, lo que sigue es habilitar gpm.service en systemd usando:
<br>
```
systemctl enable gpm
```
<br>
Habiendo hecho esto, gpm se cargará en el arranque del sistema. El paso final es reiniciar el sistema para que se carguen los módulos correspondientes al gpm en el kernel. Y ya tras reiniciar e iniciar sesión en la TTY podrás usar el mouse o touchpad como acostumbrarías en tu entorno gráfico.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

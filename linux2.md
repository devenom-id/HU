# Diferencia entre Linux y GNU/Linux
<b>By: Darth Venom - 22/09/2020</b>
<br>
<br>
*Tras haber subido el blog definiendo qué es Linux, muchas cosas quedaron claras, pero aún así es necesario tener un blog al cuál referirse a la hora de entender específicamente cuál es la diferencia entre Linux y GNU/Linux, y por supuesto, para eso está este blog.*

Recapitulando, Linux es un Kernel de código libre basado en Unix pero completamente independiente de él, es un Kernel de arquitectura monolítica y se caracteriza por ser rápido, seguro y por sobre todo, por ser de código libre, lo que significa que no es desarrollado por una persona o una empresa, los encargados de contribuir en el Kernel son miles y miles de programadores alrededor del mundo. Las ventajas del código libre son muy grandes, tanto así que grandes organizaciones y entidades como la NSA, Red Hat, Samsung e Intel han hecho contribuciones a la Linux Foundation y han hecho aportes en el código. La NSA ha intentado reiteradas veces introducir backdoors en el código fuente, contradictoriamente, fue la misma organización la que creo SELinux (Security Enhanced Linux). SELinux es un módulo de seguridad para el Kernel que introduce mecanismos para el soporte de reglas para el control de acceso con el fin de evitar amenazas e incluso ataques de 0day (se explicarán en blogs más avanzados).

*Hasta ahí vimos qué bonito es Linux, pero un Kernel sin un sistema operativo que lo aproveche no tiene sentido, de la misma forma un sistema operativo sin Kernel no sirve, y es ahí donde presentamos al proyecto GNU.*

**GNU** se pronuncia nu o ñu. Según Richard Stallman, el fundador, se puede pronunciar de cualquier forma. La única pronunciación errónea es llamarlo Linux. Las siglas significan GNU Not Unix, es un acrónimo recursivo. El proyecto GNU tiene como objetivo crear software de código libre, entre los grandes programas adjudicados a GNU se encuentra GCC (GNU C Compiler), GIMP (GNU Image Manipulation Program), Bash (El mismísimo bash), Bison, GNOME (GNU Network Object Model Environment), etc.

El proyecto GNU surgió en la época en la que reinaba Unix, y según Stallman, surgió como una forma de evitar un mundo repleto de Software Propietario. El equipo de desarrolladores crearon el sistema GNU, un sistema compatible con Unix, modular.

*Bien, se creó el sistema GNU que es compatible con Unix, es modular y usa las herramientas del proyecto, pero falta algo, algo esencial.*

Releyendo los blogs anteriores recordaremos que un sistema operativo no puede ser absolutamente nada sin un Kernel que lo conecte al Hardware, maneje los servicios, administre los recursos, etc.

En un principio se apostó más que nada por el Kernel Hurd de GNU, luego las cosas cambiaron bastante. En aquel tiempo cuando Linus Torvalds decidió poner Linux bajo la licencia GPL y montones de programadores se fueron uniendo al desarrollo del Kernel, Linux se volvió mucho más potente y compatible con Unix que Hurd, se lo acabó combinando con el sistema GNU. Esto es a lo que se llama GNU/Linux, a la combinación entre el sistema GNU y el Kernel Linux.

Por lo anterior es que es importante volver y resaltar que "GNU se pronuncia nu o ñu. Según Richard Stallman, el fundador, se puede pronunciar de cualquier forma. La única pronunciación errónea es llamarlo Linux." Ahora se sabe el porqué, **GNU es un sistema operativo, Linux es un Kernel y GNU/Linux es un sistema operativo.**

A raíz del sistema GNU/Linux surgieron montones y montones de **distribuciones**, sistemas operativos basados en el sistema anteriormente mencionado.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

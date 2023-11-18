# Cmus - C music player
<b>By: Darth Venom - 23/12/2020</b>
<br>
<br>
<center><b>Bienvenidos</b></center>

*En este blog vamos a introducir Cmus y veremos cómo instalarlo y hacerlo funcionar.*<br>

Cmus es un reproductor multimedia para sistemas tipo Unix, corre en terminal. Es rápido, intuitivo y tiene una gran cantidad de opciones y vistas para operar más cómodamente. Otro aspecto a destacar de Cmus es que es bastante personalizable, pueden personalizarse las funciones del teclado, la apariencia, los ajustes, los colores, entre otras cosas.

## Instalación

1. Para comenzar con la instalación vamos a abrir una instancia de Terminal y procederemos a [instalar Cmus](linux3.md).
2. Una vez se haya instalado Cmus seguirá [instalar pulseaudio](linux3.md).
3. Tras instalar Cmus, el programa puede abrirse simplemente escribiendo `cmus` en la terminal.

## Funcionamiento

### Agregar música

**Nota:** Si está usando Termux probablemente tenga su carpeta de música fuera de los archivos del emulador. Para acceder a ellos desde Termux y poder añadir la música tendrá que brindar permisos de almacenamiento a Termux y usar el siguiente comando `cd /sdcard`, una vez hecho esto estará en la carpeta principal del móvil y podrá buscar su carpeta de música con los comandos de administración de archivos básicos (`cd`, `ls`, `mv` y `cp`).

- Abra cmus usa el comando `cmus`.

(En cmus los comandos para administración de archivos son los siguientes: `:cd`, `:rm`, `:mv`).

1. Si desea tener una vista de sus archivos presione 5 para ver un explorador de archivos.<br>
2. Ubique su directorio de música y sin entrar en ella escriba:

```
:add "nombre del directorio"
```

*Con esto su música habrá sido añadida con éxito.*

### Controles básicos

`+`  Sube el volumen 10%<br>
`-`  Baja el volumen 10%<br>
`,`  Retrocede 1 minuto<br>
`.`  Avanza 1 minuto<br>
`c`  Pausar o Reanudar<br>
`d`  Remover canción\*<br>
`e`  Añadir canción a cola<br>

*La tecla `d` elimina cosas distintas según la vista actual. En la vista 1, 2, 3 y 4 elimina la canción de cmus pero no elimina el archivo del almacenamiento.* En la vista 5 elimina el archivo del almacenamiento.

### Vistas o ventanas

Las vistas o ventanas son 7 y pueden accederse a ellas simplemente tipeando el número.<br>

`1`  Visualización de la música por álbumes<br>
`2`  Visualización de toda la música<br>
`3`  Visualización por lista de reproducción<br>
`4`  Cola de reproducción<br>
`5` = Administrador de archivos<br>
`6` = Filtros<br>
`7` = Configuración y personalización<br>

Finalmente si deseas salir de cmus y te das cuenta de que es igual que en Vim y `CTRL+c` no funciona

![img](media/c53.jpg)

Solo debes tipear `:q` y darle a enter.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

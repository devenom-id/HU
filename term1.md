# Bash::Manejando la Terminal - De 0 a 1000 #1
<b>By: Darth Venom - 09/11/2020</b>
<br>
<br>
*Finalmente, la tan esperada guía sobre la terminal se hace presente. Si deseas aprender a dominar la terminal desde 0 y no tienes ningún conocimiento previo relacionado al tema, te recomiendo que leas los primeros dos blogs sobre Unix, alternativamente puedes leer el tercero y el cuarto que explican como funciona una terminal, el conocimiento nunca sobra.*

- [UNIX::Introducción](http://aminoapps.com/p/1p1s72)

- [UNIX::Árbol de Directorios](http://aminoapps.com/p/acjg6k)

- [UNIX::Subsistema de TTY](http://aminoapps.com/p/13sczv)

- [UNIX::Subsistema de TTY #2](http://aminoapps.com/p/pmqzivz)

Con el presente se inaugura la serie de blogs sobre el manejo de la terminal. Esta guía es sobre el intérprete de comandos Bash, este intérprete está disponible en sistemas GNU/Linux, MacOS y Android. Por defecto, Android usa Sh. Para usar Bash hay que descargar el emulador Termux. Termux fue cubierto en un blog anterior, además de ser un emulador de terminal consigue adaptar software de Debian para poder emular un comportamiento similar a esta distro GNU/Linux y así poder correr programas de la misma.

Termux actualmente no se encuentra en la playstore pero puedes encontrar el apk en internet.

<center>Si usas un sistema operativo Windows 10, puedes conseguir usar bash activando el subsistema de Linux para Windows desde las características opcionales en ajustes. Esto se explicará en otro blog.</center>

## Punto de partida

Para empezar, abre una sesión de terminal. Es una costumbre entre la comunidad de programadores que el primer paso en un nuevo lenguaje sea imprimir las palabras "Hello world!" u "¡Hola mundo!", esto será lo primero que hagamos, pero antes tenemos que saber qué es lo que estaremos haciendo.

<center>Comenzaremos por aprender acerca de las operaciones de entrada y salida en bash.</center>

Para explicar qué son las operaciones de entrada y salida (i/o) citaré una parte del blog "UNIX::Subsistema de TTY #2".

> "Anteriormente se habló de operaciones de entrada y salida, para aquellos que no saben qué significa esto, lo explicaré, es sencillo. Se llama salida a todo dato que un programa envía a otro programa, archivo, o a un dispositivo físico. Un ejemplo de lo anterior es cuando un programa imprime cosas en la pantalla, o cuando un programa envía datos a una impresora para que esta imprima. En este caso, el programa envía esos datos (salida) y la impresora los recibe y los procesa (entrada). Así como la salida son los datos que un programa envía o escribe, la entrada son los datos que un programa recibe, por ejemplo, cuando escribes en una terminal, el intérprete de comandos bash, por decir un ejemplo, lee (recibe) las letras que ingresas a través del teclado."

## Hola mundo

En bash, las operaciones de salida se usan con los comandos `echo` y `printf`. Comenzaremos imprimiendo un Hola mundo, para esto usaremos el comando:

```
echo "Hola mundo"
```

o el comando:

```
printf "Hola mundo\n"
```

[img](media/term1_1.jpg "img")

La sintaxis de estos comandos es la siguiente:

```
echo [opción] [string]

printf [formato] [string]
```

Más adelante hablaremos de los formatos de printf

> Un string es una cadena de caracteres. un ejemplo de string es "Hola mundo" o "Hacking-Utils".

## Entrada

En bash, la entrada se da a través del comando read. Este comando toma una línea del stdin (entrada estándar), o sea, lo que escriba el usuario y luego lo guarda en una Variable*. Al usar el comando read sin pasar ningún otro argumento, no pasará nada, read se quedará esperando a que el usuario escriba algo y luego lo descartará. Hace un momento se habló de guardar la entrada de read en una variable, las variables serán explicadas en otro blog, por ende, esto también se ampliará en otro blog.

### ¿Qué se puede hacer en la terminal?

Respuesta corta: Todo lo que no implique obligatoriamente un componente gráfico.

Ampliando a lo anterior, podemos revisar el espacio disponible en el disco, ver, crear y eliminar archivos, descargar música, juegos, aplicaciones y utilidades, escuchar música e interactuar con el hardware haciendo cosas como abrir la bandeja del lector de discos o ajustar el brillo de la pantalla. Incluso se puede navegar por internet, ¡y hasta usar Discord!

Hasta ahora vimos operaciones de entrada y salida de forma básica y como introducción a esta serie de blogs. En el siguiente blog veremos cómo navegar entre los directorios y gestionar los archivos.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*


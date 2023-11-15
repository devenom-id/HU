# Bash::Manejando la Terminal - De 0 a 1000 #8
<b>By: Darth Venom - 11/01/2022</b>
<br>
<br>
Este capítulo es más sobre personalización que otra cosa. Este capítulo va dedicado al prompting.

<center><i>¿No sabes qué es prompt ni prompting?</i></center>

> Un prompt es un conjunto de caracteres que se muestran en un programa para indicar que se tiene que ingresar algo a través del teclado.

*(Un ejemplo de prompt es cuando sale el símbolo $ en la terminal)*

En Bash existen 4 prompts que aparecen en situaciones diferentes, y los cuatro son personalizables. El modo mediante el cual se configuran los prompts en bash es a través de strings en variables globales. Estas variables son `PS1`, `PS2`, `PS3` y `PS4`, y los strings para el prompt pueden usar secuencias especiales de bash para obtener cosas como el nombre del usuario, el nombre del host, el directorio actual, etc; cosas que se pueden usar para decorar el prompt. A parte de estas secuencias especiales...
<center><b>¡Se pueden usar escapes ANSI!</b></center>
<center>Lo que significa que se puede colorear el prompt.</center>
<br>
Si no sabes lo que son los escapes ANSI pero te interesó lo de colorear el prompt, puedes aprenderlo en el siguiente artículo: http://aminoapps.com/p/1smfwg

A continuación se explicará en qué situaciones aparecen cada una de las 4 variables dedicadas al prompting.

`PS1`: Este es el prompt principal, este aparece cada vez que el usuario está habilitado a escribir un comando.

`PS2`: Aparece luego de presionar enter y solicita la continuación del comando que se estaba escribiendo. Esto sucede generalmente cuando se está escribiendo una función o un bloque como for o if en múltiples líneas. También puede aparecer cuando el usuario no cierra un string con sus debidas comillas, ya sea por olvido o por estar escribiendo un string multilínea.

`PS3`: Aparece como prompt para el comando select. Este comando permite crear un menú con una o más opciones y el usuario tiene que elegir una de las opciones escribiendo su número, el prompt a la hora de escribir el número es el PS3.

`PS4`: Al usar el comando set -x tanto en el intérprete o a través de un script, bash imprimirá el nombre de los comandos luego de haberlo expandido (expandir es la resolución de aliases y variables) y antes de ejecutarlo. Cada vez que se imprima el nombre del comando será precedido por el string de $PS4.

Si bien se pueden configurar estas variables redefiniéndolas como a cualquier variable o usando el comando export, estos serán cambios temporales. Para cambios permanentes se debe editar el archivo de configuración ~/.bashrc

### Ejemplos de prompt
```
export PS1="\$ "
```
```
export PS1="\u@\h\$ "
```
```
export PS1="{\u}\w\$ "
```

Ejemplo 1: `$`
Ejemplo 2: `usuario@localhost$`
Ejemplo 3: `{usuario}~$`

En estos ejemplos se ve que los strings tienen un formato especial, estas son las secuencias especiales de las que se habló antes, hay varias y serán listadas a continuación.

\a     Caracter ASCII de campana<br>
\d     Fecha actual en formato "Día Mes Fecha" (Ejemplo: Marte Junio 16)<br>
\D{formato} El formato se pasa a la función strftime() de C (<time.h>) y se imprime el resultado<br>
\e     Equivalente a \033<br>
\h     Nombre del host hasta el primer '.'<br>
\H     El nombre del host<br>
\j     Número de tareas (jobs) administradas por la shell<br>
\l     Nombre del archivo de terminal asociado a la shell actual<br>
\n     Nueva línea<br>
\r     Retorno de carril<br>
\s     Nombre de la shell<br>
\t     Tiempo actual en formato 24 horas HH:MM:SS<br>
\T     Tiempo actual en formato 12 horas HH:MM:SS<br>
\@     Tiempo actual en formato 12 horas am/pm<br>
\A     Tiempo actual en formato 24 horas HH:MM<br>
\u     Nombre de usuario<br>
\v     Versión de Bash<br>
\V     Versión + patch level<br>
\w     Directorio actual ($HOME se abrevia con ~)<br>
\!     Número del comando<br>
\#     Número del comando en el historial<br>
\$     Si el UID es 0, es un #, sino es un $<br>
\\     Barra invertida<br>
\[     Inicio de secuencia de escape ANSI<br>
\]     Fin de secuencias de escape ANSI<br>
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

# Códigos de escape ANSI
<b>By: Darth Venom - 28/11/2020</b>
<br>
<br>
En esta ocasión se ahondará acerca de los escapes ANSI. La primera vez que esto se mencionó fue en el blog del subsistema de TTY de Unix. Puedes echarle un vistazo desde aquí: <http://aminoapps.com/p/pmqzivz>

Los códigos de escape ANSI sirven para dar formato a la salida de un programa de terminal. Cuando un código de escape es interceptado por la disciplina de línea, el emulador de terminal actúa en consecuencia. A través de los escapes ANSI se puede mover el cursor de la terminal, cambiar el color de las letras, el color del fondo, borrar letras o borrar partes enteras de la ventana.

Todos los códigos de escape comienzan por el caracter `ESC` (caracter ASCII número 27) seguido del caracter `[`. Si se desea escribir el caracter `ESC`, se usa el escape `"\033"`. A continuación se mencionarán varios ejemplos.

## Control del cursor

`\033[nA`   Desplaza el cursor `n` filas hacia arriba. Ejemplo: `\033[12A`

`\033[nB`   Desplaza el cursor `n` filas hacia abajo. Ejemplo: `\033[5B`

`\033[nC`   Desplaza el cursor `n` filas hacia la derecha. Ejemplo: `\033[20C`

`\033[nD`   Desplaza el cursor `n` filas hacia la izquierda. Ejemplo: `\033[15D`

`\033[n;mf` Desplaza el cursor hacia la fila `n` y la columna `m`. Si n no se especifica, el cursor se mueve a la primera fila. Ejemplo: `\033[10;20f`

`\033[s`    Guarda la posición actual del cursor.

`\033[u`    Coloca el cursor en la posición en la que se guardó.

## Borrar partes de la pantalla

`\033[nJ`   Borra parte de la pantalla. Si `n` vale 0, se borra todo desde el cursor hacia abajo. Si `n` vale 1, se borra hasta el principio de la pantalla desde la posición del cursor. Si `n` vale 2, se borra toda la pantalla.

## Colores

Cada color tiene un código especial, la sintaxis del escape que se utiliza para formatear una cadena de texto con colores es la siguiente.
```
\033[b;fg;bgm
```
En `b` irían algunos atributos que se le pueden conceder a la fuente, por ejemplo, negrita, subrayado, etc. En `b` se puede ubicar:

`0` Reinicia todos los atributos

`1` Negrita

`2` Intensidad débil o disminuida

`3` Itálica

`4` Subrayado

`5` Parpadeo lento

`6` Parpadeo rápido

`7` Invertir colores

`8` Oculto

`9` Tachado

En `fg` van los colores de la fuente. Estos son:

`30` Negro

`31` Rojo

`32` Verde

`33` Amarillo

`34` Azul

`35` Magenta

`36` Cyan

`37` Blanco

En `bg` van los colores del fondo. Estos son:

`40` Negro

`41` Rojo

`42` Verde

`43` Amarillo

`44` Azul

`45` Magenta

`46` Cyan

`47` Blanco

### Ejemplo de cambio de color

Como ejemplo se presentará un escape que ponga las letras en negrita, de color amarillo y con una fuente azul.
```
\033[1;33;44m
```
Si se quisiera sólo cambiar el color de la fuente a amarillo, sería:
```
\033[33m
```
Si en cambio quisiera únicamente cambiar el fondo:
```
\033[44m
```
### RGB

*A parte de los colores anteriormente mencionados, estos escapes también soportan RGB. Para usar RGB se debe seguir la siguiente sintaxis:*

```
\033[38;2;R;G;Bm
```
Ejemplo de un color rosado con escapes ANSI:
```
\033[38;2;255;77;255m
```
## ¿Dónde probar esto?

Puedes probarlo con las funciones para imprimir texto de cualquier lenguaje de programación. Para hacerlo más cómodo, se puede usar echo o printf en bash.

`printf` soporta los escapes ANSI naturalmente, en cambio, si se desea usar `echo`, se debe pasar la opción `-e` para que el comando interprete las secuencias de escape.

**NOTA:** El texto que se desea imprimir debe ir entre comillas.
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

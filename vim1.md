# Vim: Modos del editor, escribir, abrir y guardar
<b>By: Darth Venom - 26/03/2021</b>
<br>
<br>
*Bienvenidos sean a esta nueva serie de blogs acerca de vim. Vim es un potente editor de texto para la terminal, es el sucesor del editor vi presente en la mayoría de los sistemas UNIX, es la versión mejorada del mismo. Es un editor altamente configurable y personalizable, brinda soporte para cientos de lenguajes de programación y tiene montones de excelentes plugins que permiten que la edición de texto sea mucho más cómoda y la apariencia sea más amigable.*

En esta serie de blogs se buscará que el lector aprenda Vim Script (el lenguaje de Vim) y el funcionamiento básico del editor. A parte de eso se enseñarán montones de los más útiles plugins, los infaltables y los no tan conocidos pero que no dejan de ser útiles. Vim es un lenguaje lo suficientemente potente como para igualar y sobrepasar cualquier IDE.

*En este capítulo el enfoque principal será comprender el funcionamiento más básico de Vim, cómo editar, abrir y cerrar un programa.*

## Modos de Vim

Vim tiene varios modos en los que se pueden realizar acciones diferentes. Lo primero será entender la diferencia entre cada uno de ellos, ya que usar Vim no es como usar Nano o cualquier otro editor, hay que tener en cuenta cada modo, no es como que se puede arrancar a escribir en cualquier modo (Para escribir se debe entrar al modo insert). En este capítulo veremos alguno de estos modos y continuaremos en el siguiente.

### Normal

Cuando se inicia vim, por defecto se encuentra en el modo Normal. En este modo el usuario puede moverse a través del texto pero no escribirlo. En Normal como las teclas no se usan para escribir, cada una puede tener un significado diferente. Para moverse por el texto se pueden usar las flechas del teclado como normalmente se haría con cualquier editor o también se puede usar:

`h` Para mover a la izquierda
`j` Para mover abajo
`k` Para mover arriba
`l` Para mover a la derecha

*Lo primero será aprender las teclas disponibles en Normal. Hay varias:*

`w` Mueve el cursor hacia el principio de la siguiente palabra<br>
`W` Mueve el cursor hacia el principio de la siguiente palabra luego de un espacio<br>
`b` Mueve el cursor hacia el principio de la anterior palabra<br>
`B` Mueve el cursor hacia el principio de la anterior palabra luego de un espacio<br>
`e` Mueve el cursor hacia el final de la palabra<br>
`E` Mueve el cursor hacia el final de la palabra luego de un espacio<br>
`0` (Cero) Mueve el cursor hacia el inicio de la línea<br>
`$` Mueve el cursor hacia el final de la línea<br>
`gg` Mueve el cursor hacia el inicio del archivo<br>
`G` Mueve el cursor hacia el final del archivo<br>

**IMPORTANTE:**
`u` Deshacer
`CTRL+r` Rehacer

Esas son las teclas que más se usan en Normal, pero hay bastantes más. Si quieres ver las que faltan puedes echar un vistazo a esta cheatsheet: https://vim.rtorr.com/

### Insert

El modo Insert es el modo en el que el usuario puede escribir libremente como haría con cualquier otro editor. Para entrar al modo insert hay seis teclas que se pueden usar y que hacen cosas distintas, se puede entrar al modo Insert desde el modo Normal.

`i` Cambia al modo insert

`I` Mueve el cursor hacia el inicio de la línea y luego cambia al modo Insert

`a` Mueve el cursor hacia la derecha y luego entra al modo Insert

`A` Mueve el cursor hacia el final de la línea y luego cambia al modo Insert

`o` Inserta una nueva línea y luego entra al modo Insert

`O` (o mayúscula) Inserta una nueva línea encima de la actual y cambia a Insert

Para volver al modo Normal se puede usar la tecla `ESC` o `CTRL+[`

### Command-line

El modo Command es el modo en el que se pueden ingresar comandos de vim. Se puede ingresar a este modo desde el Normal escribiendo `:`. Vim tiene una enorme cantidad de comandos para usar, estos comandos serán descritos en detalle en próximos blogs.

Los comandos principales que deben ser abordados en este blog son aquellos que sirven para las operaciones de guardado y salida de Vim.

`:w [NombreDeArchivo]` Guardar
`:q` Salir
`:q!` Salir descartando los cambios
`:wq` [NombreDeArchivo] Guardar y salir

Cuando dice `[NombreDeArchivo]`, es un parámetro opcional que se le puede pasar al comando `:w`. Este comando por defecto sobreescribe el contenido del archivo que se está editando, si se quiere guardar lo escrito en Vim en otro archivo se puede pasar un nombre de archivo a :w. Si tenemos un archivo llamado *FILE* y usamos `:w`, el contenido de *FILE* se sobreescribirá con lo que hayamos escrito en el buffer de Vim. Pero si usamos: `:w new`, lo que hayamos escrito en el buffer de Vim se guardará en un nuevo archivo llamado `new`, si el archivo existe se sobreescribirá.

Para salir del modo Command-line se puede simplemente borrar el `:` o presionar `ESC` y así volver al *Normal*.

### Replace

El modo *replace* es parecido al *insert*, cada letra presionada reemplazará al caracter que esté en la misma posición que el cursor. Para entrar en modo *Replace* se usa la letra `R`. Para salir y volver a *Normal* se usa `ESC`.

El resto de modos serán descritos en el siguiente capítulo.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

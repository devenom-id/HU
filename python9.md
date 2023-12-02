# Python de 0 a 1000 #9
<b>By: Darth Venom - 10/02/2021</b>
<br>
<br>
En muchas ocasiones un programa tiene que repetir una acción múltiples veces, a veces la cantidad de repeticiones está definida y otras veces puede variar. Antes de leer este blog podrías creer que para que un programa repita una acción sólo basta con escribir una línea de código muchas veces, así si quieres imprimir 100 veces un `"Hola mundo"`, lo escribirías 100 veces. Lo anteriormente dicho sería poco práctico y en muchos casos imposible, ya que hay casos en los que las repeticiones tienen que ser infinitas, y no es como que el programador pueda escribir infinitas líneas...

<center>Para eso están los bucles</center>

En este blog aprenderemos acerca del bucle `while`, otra herramienta fundamental a la hora de crear un programa. En Python hay 2 bucles que funcionan de distinta forma, estos son `for` y `while`. Hay más formas de crear bucles sin usar ni for ni `while`, pero además de que se abarcaran en otro blog, se usan en casos muy específicos y casi nunca son recomendables.

Si comprendiste cómo funciona `if`, entonces `while` será pan comido. Antes de seguir hablando de `while`, si no sabes qué es un bucle, es una secuencia de instrucciones que se ejecutan repetidas veces.

`while` es un bucle que se usa cuando no hay forma de determinar cuantas veces queremos repetir una acción. La sintaxis de `while` es:

```python
while [condición]:
    [instrucciones]
```

La sintaxis es exactamente igual a la de `if`, `while` repite las instrucciones que le pases infinitas veces MIENTRAS QUE LA CONDICIÓN SEA `True`. Cada repetición en un `while` se llama ciclo, cuando el bucle es infinito hay infinitos ciclos. Por cada ciclo `while` chequea si la condición es `True` o `False`, si es `False` el bucle se rompe, sino continúa ejecutándose.

Veamos un ejemplo de `while`:

```python
while True:
    print("Hello world")
```

Como podemos ver, aquí la condición es `True`, por ende siempre va a ser `True`, lo que significa que ese bucle se ejecutará para siempre o hasta que el usuario presione las teclas `CTRL+C`o cierre el programa de otra forma.

Ahora un ejemplo de un `while` no infinito:

```python
var = 200
while var != 100:
    var -= 10
```

Aquí podemos ver que se declara la variable `var` con un `int` 200, luego hay un `while` y la condición es que se ejecutará mientras que var no sea 100. Este bucle no es infinito porque por cada ciclo a var se le restarán 10 unidades, tal y como indica el la línea:

```python
    var -= 10
```

Llegará un punto en el que tras restar tantos 10, var será 100 y por ende el bucle terminará, ya que la condición para que se ejecute era que var no sea 100.

Un ejemplo de un `while` imposible sería

```python
while False:
      print("Hello")
```

Este `while` directamente es imposible ya que `False` nunca podrá ser `True`, y `while` sólo se ejecuta cuando la condición es `True`, igual que `if`.

<hr>

## Sentencias break y continue

Durante la ejecución del bucle podríamos querer interrumpirlo u omitir un ciclo según la necesidad del programador, para eso existen las sentencias `break` y `continue`.

`break` se usa para romper el bucle, sin importar en qué parte del bucle se encuentre el programa, llamar a `break` romperá el bucle y el código continuará inmediatamente después.

`continue` termina el ciclo. Normalmente un ciclo termina cuando ya se ejecutaron todas las instrucciones y recién ahí empieza el siguiente ciclo, pero cuando se usa `continue`, el bucle ignora todas las instrucciones que quedaron sin ejecutar y hace que empiece el próximo ciclo. Un ejemplo para entenderlo mejor:

```python
while True:
    print("Hello")
    continue
    print("world")
```

Aquí lo que pasará es que se imprimirán infinitos "Hello", pero nunca se imprimirá un "world" porque cada vez que se ejecute el `continue`, empezará el siguiente ciclo. Si reemplazamos `continue` por `break`:

```python
while True:
    print("Hello")
    break
    print("world")
```

En este caso se imprimirá un sólo "Hello" y el bucle terminará ya que como dijimos, `break` rompe el bucle.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*
# Python de 0 a 1000 #14
<b>By: Darth Venom - 09/08/2021</b>
<br>
<br>
En este capítulo aprenderemos qué son las funciones, para qué sirven y cómo usarlas. Sobre las funciones se ampliará en los siguientes tres capítulos.

## ¿QUÉ ES UNA FUNCIÓN?

Una función es una pieza de código que contiene un nombre (identificador), opcionalmente datos de entrada (parámetro), y un dato de retorno. Las funciones deben declararse antes de poder usarse, igual que las variables. En la declaración de una función se especifica qué lineas de código se ejecutarán cuando se llame a la función.

Se dice que se llama a una función cuando se la ejecuta en el código.

El nombre de una función puede comenzar con una letra o un guión bajo '_', puede contener números, puede tener la longitud que uno quiera (mientras más corto mejor). El nombre de una función no puede ser igual que el nombre de una palabra clave de Python, por ejemplo, no puede existir una función de nombre `if` o `for`.

Los parámetros de una función son datos de cualquier tipo que se le pueden pasar a la función, la cantidad de parámetros permitidos debe ser especificada en la declaración de la función. Una función puede no recibir ningún parámetro.

Las funciones siempre devuelven un dato, que es el "dato de retorno". Este dato puede ser de cualquier tipo, incluso puede ser una estructura de datos. El dato que retorna una función es definido por el programador como parte del código de la función usando la palabra clave `return`; veremos esto pronto en este capítulo.

## ¿PARA QUÉ SIRVEN LAS FUNCIONES?

Las funciones son demasiado útiles, permiten acortar la cantidad de líneas de codigo, acelerar la velocidad de escritura de un programa, hacer que el código del programa sea fácil de leer y entender, y un montón de cosas más. Un ejemplo de utilidad de una función es por ejemplo, si queremos imprimir 10 veces la palabra hola, podemos usar:

```python
for i in range(10):
    print("Hola")
```

Para cada vez que queramos hacer esto en el código tendríamos que escribir eso, en cambio, esto podría acortarse si usáramos una función. Primero deberíamos declararla. Se hace usando la palabra clave `def` de esta forma:

```python
def hola10():
    for i in range(10):
        print("Hola")
```

Y ya una vez declarada podemos llamar la función cada vez que queramos, y podemos imprimir "Hola" 10 veces con sólo usar:

```python
hola10()
```

En este caso, `hola10` es el nombre que se le dio a la función del ejemplo, pero como vimos anteriormente, las funciones pueden llevar cualquier nombre.

## SINTAXIS

La sintaxis de las funciones se compone de la palabra clave `def` seguida por el nombre de la función, los parámetros y luego el código de la función.

Ejemplo de una función que imprime Hola:

```python
def nombreDeFuncion():
	print("Hola")
```

En este ejemplo no hay ningún parámetro, se ve la palabra clave `def`, el nombre de la función (que es literalmente `NombreDeFuncion`) y luego el código de la función, que es `print("Hola")`. En un ejemplo en el que la función tiene parámetros, estos irían dentro de los paréntesis que se ponen al lado del nombre de la función.

Los parámetros de una función son exactamente lo mismo que las variables, en la parte de la función en la que se especifican los parámetros se ponen los nombres de los parámetros separados por comas. Los nombres de los parámetros, al igual que el de las variables, puede ser cualquier nombre mientras no empiece con números o contenga espacios. Los valores de los parámetros se asignan a la hora de llamar la función, dentro de la función los parámetros pueden ser manipulados como a cualquier variable.

Ejemplo de una función llamada `X` que recibe un parámetro y luego imprime su contenido.

Declaración de la función:

```python
def X(param):
    print(param)
```

Llamada a la función:

```python
X("Hola")  # Esto hará que param == "Hola"
```

Esto imprimirá la palabra "Hola".

En este ejemplo, el parámetro de la función se llama `param`, pero como se dijo anteriormente se puede usar cualquier otro nombre.

## DATO DE RETORNO

Toda función retorna (devuelve) un dato al terminar de ejecutarse. El dato puede ser de cualquier tipo, incluso puede ser una estructura de datos o un objeto (para releer una definición de objeto, lea el capítulo 11).

Para retornar un dato se usa la palabra clave `return`, esta sólo funciona dentro de una función. La sintaxis es:

```python
return <dato>
```

Ejemplos:

```python
return 15
return "Hola"
return True
```

Incluso se puede retornar `None`, que por si no recuerdan qué es,
> "`None` representa un valor nulo".

Para retornar `None` se puede usar:

```python
return None
```

Pero esto es redundante ya que hacer eso es lo mismo que simplemente usar:

```python
return
```

**Si una función termina y no hubo ningún return, se devuelve `None`.**

## ¿CÓMO SE USAN LAS FUNCIONES?

Sabemos que antes de usar una función tenemos que declararla, y luego se pueden usar las funciones como se explicó antes. Para entender mejor el código, al escribir la llamada de una función se debe pensar en el dato que devolverá. Ejemplo, si tengo la función:

```python
def doble(x):
    return x*2
```

Esta función acepta 1 argumento y lo devuelve multiplicado por 2. Teniendo este código:

```python
var = doble(5)
```

Ahí para entender mejor, se debe entender ese ejemplo como:

```python
var = 10
```

Otro ejemplo más elaborado con esa función:

```python
print(f"El doble de 5 es {doble(5)}")
```

Esto se puede entender como:

```python
print("El doble de 5 es 10")
```

Esto que se explica acá sólo es una estrategia para que el programador comprenda mejor el uso de las funciones.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

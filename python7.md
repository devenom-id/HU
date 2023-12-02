# Python de 0 a 1000 #7
<b>By: Darth Venom - 29/01/2021</b>
<br>
<br>
Entre las cosas más importantes y útiles que un programador debe saber se encuentra la comparación y la capacidad de hacer que un programa actúe en función a los resultados extraidos de una comparación. Eso es lo que tratará este blog, la palabra clave `if`.

Recordemos los operadores de comparación del capítulo 5 de esta misma guía, si el lector desea refrescar eso puede [revisar ese capítulo](python5.md).

El bloque `if` permite al usuario evaluar un dato y actuar en función a la respuesta de esa evaluación. Si la respuesta es `True`, `if` puede ejecutar instrucciones específicas, y si la respuesta es `False`, puede ejecutar otras instrucciones distintas.

Vamos por partes, la sintaxis más básica de if es la siguiente:

```python
if [condición]:
  [instrucciones]
```

Primero va la palabra clave `if` seguida de una condición, esta condición puede ser una comparación, una función, un string o lo que sea, si ingresan un valor, se convertirá a `bool`, y si ingresan una operación, se resolverá y luego se convertirá a `bool`. Luego de la condición debe ir `":"`.

Esa es la primera parte, lo que sigue es importante y suele dar error si uno no está atento. Luego de los `":"` se debe continuar en la línea de abajo, pero no directamente, se debe dejar un espacio, ese espacio es recomendable hacerlo con la tecla `TAB`. Tras haber dejado un espacio se procede a escribir las instrucciones que `if` debe ejecutar en caso de que la condición sea `True`, para cada línea dentro de un `if` debe ir el espacio, si no se introduce un espacio Python entenderá que el código no está dentro del `if`. Para ilustrar esto, haré un ejemplo.

```python
if 5+5 == 10:
    print("5 + 5 devuelve 10") # Esta línea está dentro de if
    print("La comparación devuelve True") # Esta línea está dentro de if

print("Terminó el if.") # Esta línea está fuera de if.
```

Prestemos atención al ejemplo anterior. La condición en ese `if` es `5+5 == 10`. Sabemos que esa es una operación de comparación, `5+5` es `10`, y `10` es igual a `10`, por ende esa comparación devolverá `True`. Como la condición es `True`, `if` ejecutará el código que está dentro, si la comparación hubiera sido `False`, `if` no se ejecuta. Un ejemplo de un `if` que nunca se ejecutará es este:

```python
if 1 == 2:
    print("Es igual")
```

Este if claramente nunca se ejecutará porque `1 == 2` siempre devolverá `False`, `1` nunca será `2`. ¿Qué pasaría si queremos que if haga algo si la condición es falsa?

Para eso es que existe else, su código se ejecuta cuando la condición de `if` es `False`. La sintaxis es así:

```python
if [condición]:
    [instrucciones]
else:
    [instrucciones]
```

Aún falta un elemento más del bloque `if`, `elif`. `elif` es otro `if` dentro del mismo `if`, este elemento puede repetirse infinitas veces en un bloque `if` y sirve para evaluar condiciones igualmente.

```python
if [condición]:
    [instrucciones]
elif [condición]:
    [instrucciones]
else:
    [instrucciones]
```

<hr>

Para que podamos entender un poco cómo funcionaría un bloque if real, veamos este ejemplo.

```python
nombre = input("Nombre de usuario: ")

if nombre == "Carlos":
    print("No se aceptan Carlos.")
elif nombre == "Pedro":
    print("No se aceptan Pedros.")
elif nombre == "Gonzalo":
    print("No aceptamos Gonzalos aquí.")
else:
    print(f"Bienvenido {nombre}")
```

Antes de revisar el ejemplo, hay que aclarar que el autor no tiene nada en contra de los Carlos, Pedros y Gonzalos; fueron nombres seleccionados al azar.

En este ejemplo se solicita un nombre de usuario y luego se evalúa lo ingresado por el usuario. Si el nombre es Carlos, Pedro o Gonzalo, se imprime un mensaje diciendo que no se acepta ese nombre, sino, se le da la bienvenida.

Veamos, lógicamente Python probará con todas las condiciones desde la primera hasta la última, si ninguna fue `True`, ejecutará `else`.

¿Por qué usar `elif` en vez de usar múltiples veces `if`?

Porque si quieres evaluar múltiples condiciones y ejecutar cierto código si ninguna se cumple la única forma de hacerlo es poniendo todas las condiciones en un mismo bloque `if`, o sea, usando `if` y `elif`. De lo contrario no podrás usar un `else` para todos los bloques sino que sólo se aplicará al último.

Entre otras aclaraciones, no puedes usar `else` o `elif` sin haber especificado un `if` justo encima del mismo.

<hr>

Los espacios que se deben incluir en el código que va dentro del `if` se llaman indentación. La indentación permite a Python entender qué código está dentro de un bloque. Un bloque puede estar dentro de otro, por ejemplo, puede haber un `if` dentro de otro. La indentación se vería así:

```python
if True:
    print("Parte del primer if")
if True:
    print("Parte del segundo if")
    print("Parte del primer if")
```

<hr>

Dentro de un `if` o un `elif` se pueden evaluar múltiples condiciones al mismo tiempo, para eso se usan los operadores `and` y `or`.

Estos operadores van entre dos `bool`.

`and` devuelve `True` si los dos `bool` son `True`, si uno es `False` toda la ecuación devuelve `False`.

`or` devuele `True` si al menos uno de los `bool` es `True`, si los dos son `False`, devuelve `False`.

Un ejemplo de uso de ambos operadores es:

```python
if "5" != 5 and 12 == 12:
    print(True)
```

Aquí el `if` se ejecuta porque ambas comparaciones dan `True`, por ende la operación es `True`.

```python
if 12 == 12 or "hello" == "bye":
    print(True)
```

Aquí el `if` también se ejecuta porque aunque la segunda comparación es `False`, la primera es `True`, así que `or` devuelve `True`.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*
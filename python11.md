# Python de 0 a 1000 #11
<b>By: Darth Venom - 18/03/2021</b>
<br>
<br>
En el anterior blog de esta serie se habló y detalló acerca de las distinas estructuras de datos que trae Python. Se había dicho que para añadir elementos a una lista se tenía que usar el *método* `append()`, pero ¿qué es un método?

<center><b>Un método es toda función contenida dentro de un objeto</b></center>

Nueva pregunta, ¿qué es un objeto? Este tema será abordado en detalle dentro de unos cuantos capítulos ya que es bastante amplio, pero será definido por primera vez en este capítulo.

**Un objeto es una estructura que contiene métodos (funciones) y atributos (variables que sólo existen dentro del objeto). Los métodos y atributos de un objeto pueden ser accedidos de la siguiente forma:**

```python
objeto.método
objeto.atributo
```

Ahora, sabiendo qué es un **método**, **objeto** y **atributo** tenemos que entender que en Python **TODO** es un objeto, hasta un simple `int` es un objeto. Y en este capítulo veremos los métodos de las estructuras de datos que vimos en el capítulo anterior.

<u>Todas las estructuras de datos y los strings son objetos llamados <b>"Iterables"</b></u>. Los elementos iterables son aquellos que pueden poseer múltiples elementos y permiten ser *iterados* (esto último será ampliado en un próximo blog).

## LISTAS

```python
list.append(x)
```

El método `append()` recibe un argumento, lo que se le pasa por argumento será añadido a la lista, así por ejemplo, si tenemos la lista de nombre `L` que contiene `[1,2,3]` y queremos añadir un `4` podemos usar `L.append(4)`.

<hr>

```python
list.clear()
```

El método `clear()` simplemente borra todos los elementos de una lista.

<hr>

```python
list.copy()
```

`copy()` devuelve todos los elementos de la lista, es así que si tenemos la lista `L` que contiene `[1,2,3]` podemos guardar todos los elementos en otra variable sin hacer referencia directa a la lista `L` de la siguiente manera:

```python
x = L.copy()
```

<hr>

```python
list.count(x)
```

Espera un arguento, devuelve la cantidad de coincidencias de ese argumento en la lista. Si tenemos la lista `L` que contiene `[1,2,2,3]` y usamos `L.count(2)` devolverá el int `2`, porque el número 2 se repite 2 veces en la lista.

<hr>

```python
list.extend(iter)
```

Espera recibir como argumento un objeto iterable. `extend()` añade todos los objetos del iterable pasado como argumento a la lista. Si tenemos la lista `L` que contiene `[1,2,3]` y usamos:

```python
L.extend((3,5,"hello", 1))
```

La lista L contendrá: `[1, 2, 3, 3, 5, 'hello', 1]`

<hr>

```python
list.index(x)
```

Espera recibir como argumento un objeto, si el objeto se encuentra en la lista, devuelve la posición en la que se encuentra dicho objeto, si el objeto no existe en la lista, se levanta la excepción `ValueError`.

<hr>

```python
list.insert(i,x)
```

Espera recibir dos argumentos, un `int` especificando una posición y un objeto. `insert()` añadirá el objeto en la posición especificada. Se diferencia de `append()` porque este último añade elementos únicamente al final de la lista.

<hr>

```python
list.pop(i)
```

Espera recibir como argumento un `int` especificando la posición en la que se quiere remover un objeto, si no recibe ningún argumento, borra el último elemento de la lista.

<hr>

```python
list.remove(x)
```

Espera recibir un argumento. `remove()` eliminará el primer elemento que coincida con el argumento que se le pase, si ningún elemento coindice con el argumento pasado, se lanza la excepción `ValueError`.

<hr>

```python
list.reverse()
```

Invierte la posición de todos los elementos. Si tenemos la lista `L` que contiene `[1,2,3]` y ejecutamos `L.reverse()`, L contendrá: `[3,2,1]`.

<hr>

```python
list.sort(*, key=None, reverse=False)
```

Reordena los elementos de la lista en orden ascendente. Al aplicar el método `sort()` los tipos de datos dentro de la lista deben ser preferiblemente iguales. `sort()` puede recibir dos argumentos posicionales: `key` y `reverse`. `reverse` espera recibir un `bool`, si reverse es `True`, la lista se ordena en forma descendente, si `reverse` no se especifica se asume `False`. `key` espera recibir una función, esta función se la aplicará a todos los elementos de la lista antes de reordenarla. Si `key` no se especifica, se asume `None`. Por ejemplo, con la lista `L` que contiene `[2,4,1,7,3]`, si ejecutamos:

```python
L.sort()
```

La lista quedaría `[1,2,3,4,7]`. Y si usamos:

```python
L.sort(reverse=True)
```

La lista sería `[7,4,3,2,1]`.

*Dato importante: Las funciones en el argumento key no deben llamarse, es decir, no deben ser sucedidas por paréntesis. Por ejemplo, si queremos ordenar por longitud la siguiente lista de strings `L`: `["hello", "bye", "read carefully"]`, la forma correcta sería:*

```python
L.sort(key=len)
```

Esto aplicaría la función `len()` en cada elemento de la lista. Recuerda que la función `len()` sirve para obtener la longitud de un iterable. Tras hacer esto la lista se acomodaría a: `["bye", "hello", "read carefully"]`

La forma incorrecta de hacerlo sería:

```python
L.sort(key=len())
```

Esto es erróneo y como tal levantará una excepción.

## TUPLAS

Los métodos de las tuplas son dos, es la estructura con menos métodos.

```python
tuple.count(x)
```

Espera un arguento, devuelve la cantidad de coincidencias de ese argumento en la lista. Si tenemos la tupla `T` que contiene `(1,2,2,3)` y usamos `T.count(2)` devolverá el int `2`, porque el número 2 se repite 2 veces en la tupla.

<hr>

```python
tuple.index(i)
```

Espera recibir como argumento un objeto, si el objeto se encuentra en la tupla, devuelve la posición en la que se encuentra dicho objeto, si el objeto no existe en la tupla, se levanta la excepción `ValueError`.

## DICCIONARIOS

```python
dict.clear()
```

El método `clear()` simplemente borra todos los elementos de un diccionario.

<hr>

```python
dict.copy()
```

`copy()` devuelve todos los elementos del diccionario, es así que si tenemos el diccionario `D` que contiene `{"a": 1, "b": 2, "c": 3}` podemos guardar todos los elementos en otra variable sin hacer referencia directa al diccionario `D` de la siguiente manera:

```python
X = D.copy()
```

<hr>

```python
dict.fromkeys(iterable, value=None)
```

`fromkeys()` espera recibir un argumento iterable y uno opcional. Este método crea un diccionario con las claves contenidas en el iterable y a cada clave le asigna el valor especificado; si no se especifica ningún valor, se asigna `None`. Si se quiere crear un diccionario con las claves `"a"`, `"b"` y `"c"`, y se les quiere asignar el número `0`, se hace de la siguiente manera:

```python
dict.fromkeys(('a', 'b', 'c'), 0)
```

En este ejemplo se guardó las tres claves en una tupla para que sea entendido como un iterable.

<hr>

```python
dict.get(key)
```

El método `get()` espera recibir un argumento obligatorio. `get()` devuelve el valor de la clave especificada, si la clave no existe, devuelve `None`. Si tenemos el diccionario `D` que contiene `{'a': 1, 'b': 2}`, para obtener la clave `'b'` se puede usar el índice así: `D['b']`, o se puede usar el método `get()` de la siguiente forma:

```python
D.get('b')
```

Puede ser preferible usar `get()` en vez de el índice ya que si `get()` no encuentra la clave simplemente devuelve `None`, en cambio si la clave solicitada no se encuentra en el índice se levanta la excepción `KeyError`.

<hr>

```python
dict.items()
```

Devuelve un iterable que contiene una tupla por cada par de clave y valor. El iterable devuelto por `items()` no soporta indexing ni slicing, este tipo de iterables sólo soporta interacción a través del bucle for (que será abordado en el siguiente capítulo).

<hr>

```python
dict.keys()
```

Devuelve un iterable que contiene las claves del diccionario. El iterable devuelto por `keys()` no soporta indexing ni slicing, este tipo de iterables sólo soporta interacción a través del bucle for (que será abordado en el siguiente capítulo).

<hr>

```python
dict.pop(x)
```

Espera recibir un argumento. Remueve la clave especificada y devuelve su valor. Si la clave no existe se levanta la excepción `KeyError`.

<hr>

```python
dict.popitem()
```

Remueve la última clave en la lista y devuelve una tupla que contiene la clave y su valor.

<hr>

```python
dict.setdefault(key, default=None)
```

Espera recibir un argumento obligatorio y uno opcional. Devuelve el valor de la clave especificada por el primer argumento, si la clave no existe se crea una nueva con el valor especificado por el segundo argumento. Si no se pasa un segundo argumento y la clave especificada por el primer argumento no existe, entonces se crea una nueva clave y se le asigna `None`.

Ejemplo de como obtener la clave `'x'` en el diccionario `D`. Si la clave no existe, se creará y se asignará `0`:

```python
D.setdefault('x', 0)
```

<hr>

```python
dict.update(dict)
```

Espera recibir un diccionario como argumento. Actualiza el diccionario añadiendo las claves del diccionario que se pase como argumento. Si se tiene el diccionario `D` que contiene `{1: 2}` y se quiere añadir `{3: 4, 5: 6}`, se puede usar `update()` del siguiente modo:

```python
D.update({3: 4, 5: 6})
```

El diccionario `D` quedaría del siguiente modo: `{1: 2, 3: 4, 5: 6}`

<hr>

```python
dict.values()
```

Devuelve un iterable que contiene los valores de las claves del diccionario. El iterable devuelto por `values()` no soporta indexing ni slicing, este tipo de iterables sólo soporta interacción a través del bucle for (que será abordado en el siguiente capítulo).

## CONJUNTOS

```python
set.add(x)
```

Espera recibir un argumento. Añade un elemento al conjunto.

<hr>

```python
set.clear()
```

Elimina todos los elementos del conjunto.

<hr>

```python
set.copy()
```

`copy()` devuelve todos los elementos del conjunto, es así que si tenemos el conjunto `S` que contiene `{1,2,3}` podemos guardar todos los elementos en otra variable sin hacer referencia directa al conjunto `S` de la siguiente manera:

```python
x = S.copy()
```

<hr>

```python
set.difference(set)
```

Espera recibir un conjunto como argumento. `difference()` devuelve un conjunto con los elementos que están presentes en el conjunto pero que no están en el conjunto que se pasó como argumento de `difference()`. Por ejemplo, Si tenemos el conjunto `S` que contiene `{1,2,3}` y queremos ver qué elementos del conjunto `S` no están presentes en `{4,2,6}` usamos:

```python
S.difference({4,2,6})
```

Esto devolverá el conjunto: `{1, 3}`. Porque ni el 1 ni el 3 están presentes en `{4, 2, 6}`.

<hr>

```python
set.difference_update(set)
```

Espera recibir un conjunto como argumento. `difference_update()` hace lo mismo que `difference()`, sólo que reemplaza el conjunto inicial por el conjunto que devuelve `difference()`.

<hr>

```python
set.discard(x)
```

Espera recibir un argumento obligatorio. Elimina el elemento especificado del conjunto. Si el elemento no existe en el conjunto, no hace nada.

<hr>

```python
set.intersection(set)
```

Espera recibir un conjunto como argumento. Devuelve un conjunto que contiene todos los elementos presentes en ambos conjuntos.

<hr>

```python
set.intersection_update(set)
```

Espera recibir un conjunto como argumento. Hace lo mismo que `intersection()`, sólo que reemplaza el conjunto inicial por el conjunto que devuelve `intersection()`.

<hr>

```python
set.isdisjoint(set)
```

Espera recibir un conjunto como argumento. Devuelve un `bool`. Si hay uno o más elementos presentes en ambos conjuntos (intersección) devuelve `False`. Si no hay intersección entre los dos conjuntos, devuelve `True`.

<hr>

```python
set.issubset(set)
```

Espera recibir un conjunto como argumento. Devuelve un bool. Si todos los elementos del conjunto inicial se encuentran en el conjunto que se pasó como argumento `issubset()` devuelve `True`, de lo contrario devuelve `False`.

<hr>

```python
set.issuperset(set)
```

Espera recibir un conjunto como argumento. Devuelve un bool. Si todos los elementos del conjunto que se pasó como argumento se encuentran en el conjunto inicial `issuperset()` devuelve `True`, de lo contrario devuelve `False`.

<hr>

```python
set.pop()
```

No recibe ningún argumento. Elimina un elemento de forma arbitaria.

<hr>

```python
set.remove()
```

Espera recibir un argumento obligatorio. Elimina el elemento especificado del conjunto. Si el elemento no existe en el conjunto, se levanta la excepción `KeyError`.

<hr>

```python
set.symmetric_difference(set)
```

Espera recibir un conjunto como argumento. Devuelve un conjunto que contiene todos los elementos que no se encuentran en ninguno de los dos conjuntos.

<hr>

```python
set.symmetric_difference_update(set)
```

Espera recibir un conjunto como argumento. Hace lo mismo que `symmetric_difference()`, sólo que reemplaza el conjunto inicial por el conjunto que devuelve `symmetric_difference()`.

<hr>

```python
set.union(set)
```

Espera recibir un conjunto como argumento. Devuelve un conjunto que contiene todos los elementos presentes en ambos conjuntos.

<hr>

```python
set.update(set)
```

Espera recibir un conjunto como argumento. Añade todos los elementos de un conjunto al conjunto inicial.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

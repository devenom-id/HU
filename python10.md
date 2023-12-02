# Python de 0 a 1000 #10
<b>By: Darth Venom - 06/03/2021</b>
<br>
<br>
Este blog está dedicado a explicar las estructuras de datos en Python, viene cargado con contenido nuevo así que omitiremos las largas y no tan necesarias introducciones.

<center>¿Qué es una estructura de datos?</center>

En los anteriores blogs se explicó qué es un dato y los distintos tipo que puede tener (`int`, string, etc). Una estructura de datos es un objeto que tiene la capacidad de contener múltiples datos, hay varias estructuras y cada una tiene sus particularidades, reglas y métodos, por ende, según el contexto una puede ser más adecuada que la otra. Lo principal es primero que nada entender qué son las estructuras de datos.

Habíamos visto que las variables pueden guardar un dato de cualquier tipo. Bueno, ahora que estamos a punto de conocer las estructuras de datos podemos anticipar que usando una de estas estructuras se puede hacer que una variable guarde múltiples datos de cualquier tipo.

*En Python las estructuras de datos son: **Listas, Tuplas, Diccionarios y Conjuntos.***

## Listas, indexado y slicing

Las listas son de las estructuras más usadas debido a que son fáciles de manipular y vienen bien para casi todos los casos. Esta estructura tiene varias características, muchas de ellas las comparte con las demás estructuras.

Las listas permiten almacenar múltiples elementos de distintos tipos de datos, todos los elementos dentro de una lista van delimitados por comas y se encierran entre corchetes. Ejemplo de lista de 4 números: `[1, 2, 3, 4]`

Otro ejemplo, lista de nombres: `["Gabriel", "Juán", "David"]`

Lo siguiente es muy importante, es una característica que comparte con las demás estructuras: el **indexado**. Las listas tienen índices que pueden ser utilizados para obtener elementos de la lista en una posición específica. El índice comienza desde el número 0, es decir, el primer elemento de una lista no está en la posición 1, está en la 0. Como dijimos, para acceder a un elemento específico de una lista tenemos que usar el *índice*, para especificar una posición en el índice se hace de la siguiente forma.

Supongamos que queremos obtener el primer elemento de esta lista: `[1,2,3]`.

Para esto usamos: `[1,2,3][0]`

Que nos devuelve el número 1, ya que es el objeto que se encuentra en la posición 0. El indexado no tiene más ciencia que eso. A parte del indexado hay algo llamado **slicing**, que en español se traduce como "rebanado", y sí, básicamente consta en *rebanar* o cortar una lista dentro de las posiciones indicadas (*Esto aplica para las demás estructuas igualmente*).

Si queremos cortar la siguiente lista

```python
[1,2,3,4,5,6]
```

Para obtener sólo `[3,4,5]`, tendriamos que hacer uso del *slicing* para que sólo se abarquen los elementos que se encuentran en las posiciones de la 2 a la 4, esto se haría así:

```python
[1,2,3,4,5,6][2:5]
```

Para que el número que esté en la posición 4 sea incluído hay que hacer que el slicing sea hasta 5, o sea, hasta el número siguiente, de otro modo no lo incluirá y nos faltará un número, es por eso que usamos `[2:5]` en vez de `[2:4]`

Si quisieramos obtener los primeros 3 números de la misma lista usaríamos:

```python
[1,2,3,4,5,6][0:3]
```

Si quisieramos obtener todos los valores después de la posición 3, usamos:

```python
[1,2,3,4,5,6][3:]
```

Si lo que se quiere es obtener los datos antes de la posición 3, en vez de usar `[3:]`, se usa `[:3]`

Esto nos devolverá otra lista con los números desde la posición 0 hasta la 2, o sea, los primeros 3 números. Con eso finalizamos *indexado* y *slicing*. Las demás estructuras (excepto los conjuntos) también soportan *indexado*, pero no todas soportan *slicing*.

Las *listas* son un objeto **mutable**, es decir que los valores que posee pueden ser modificados luego de haber sido asignados, para modificar los elementos de una lista se puede recurrir a usar los métodos de las listas (será cubierto en un próximo blog) o a asignar un nuevo valor en una determinada posición a través del índice (indexado), a esto se lo llama **"item assignment"**. Para ejemplificar esto, usaremos la siguiente lista como ejemplo y la guardaremos en la variable `L`:

```python
L = ['A', 'B', 'C', 'D']
```

Si queremos que la `B` se convierta en `Z` podemos usar:

```python
L[1] = 'Z'
```

También se puede asignar un valor presente en otro punto de la lista, por ejemplo, si quisiéramos que la misma `B` se convierta en una `A` se puede usar:

```python
L[1] = L[0]
```

Así la lista quedaría como: `['A', 'A', 'C', 'D']`

En este blog adelantaremos los métodos más usados de las listas porque son importantes y deben aprenderse junto a las listas. Estos métodos son `append()` y `pop()`, permiten añadir elementos a la lista o quitarlos. Su uso es sencillo; si queremos añadir un elemento a una lista usamos `append()`, por ejemplo, si a la lista anterior queremos añadir la letra X usamos:

```python
L.append('X')
```

Y se añadirá la X al final, quedaría: `['A', 'A', 'C', 'D', 'X']`

Para remover elementos de una lista usamos el método `pop()`, este puede recibir un argumento o ninguno, si no recibe ningún argumento remueve el último elemento de la lista. Si en el ejemplo anterior usamos `L.pop()`, la lista volvería a ser: `['A', 'A', 'C', 'D']`.

`pop()` puede recibir un argumento, este argumento tiene que ser una posición en el índice de la lista, `pop()` quitará el elemento en esa posición. Por ejemplo, para quitar la primera A de la lista del ejemplo anterior se puede usar:

`L.pop(0)`

Las listas pueden tener múltiples *dimensiones*, es decir, pueden contener otras listas dentro. Por ejemplo:

```python
L = [1, [1,2,3], 2]
```

Si quisiéramos acceder a la lista que está dentro de esa lista usaríamos: `L[1]`

Y si quisiéramos acceder al primer elemento de esa lista que está dentro de la lista: `L[1][0]`

Para declarar una lista vacía se puede usar: `lista = []`

## Tuplas

Las *tuplas* son muy parecidas a las *listas*, sólo que son más sencillas. A diferencia de las listas, los elementos dentro de una *tupla* van entre paréntesis. En eso último hay algo que distingue a las tuplas de las demás estructuras, las tuplas no necesitan estar entre paréntesis en todos los casos para ser *tuplas*. Por ejemplo:

```python
1, 2, 3
(1, 2, 3)
```

Estas dos cosas son exactamente iguales, dos tuplas de tres elementos. Pero como se dijo anteriormente, no siempre pueden faltar los paréntesis, por ejemplo si queremos hacer una comparación usando el operador de equivalencia:

```python
1, 2, 3 == (1, 2, 3)
```

Esto en vez de devolver `True` devolverá `(1, 2, False)`, o sea, devolverá otra tupla, lo que pasa es que en este caso se está comparando unicamente el `3`, o sea, la comparación sería

```python
3 == (1, 2, 3)
```

Lo cual devuelve `False`, y eso sumado al 1 y el 2 resulta en la tupla (1, 2, False). Es por eso que en este caso sí o sí la tupla debe llevar paréntesis.

```python
(1, 2, 3) == (1, 2, 3)
```

A diferencia de las *listas*, las *tuplas* son un objeto inmutable, es decir que no puede ser alterada una vez que fue definida. Las *tuplas* soportan **indexado** y **slicing**, lo que no soportan es el **item assignment**, lo cual tiene sentido porque son **inmutables**. Otro detalle a notar es que las tuplas no tienen métodos que permitan añadir o quitar elementos, esto es porque son **inmutables**.

Supongamos que se quiere declarar una *tupla* de un sólo elemento que contenga el número 1. Esta es la forma incorrecta de hacerlo:

```python
t = (1)
```

Esto en vez de declarar una tupla de un elemento guardará un int. Las dos formas correctas son:

```python
t = 1,
```

Y con paréntesis también:

```python
t = (1,)
```

## Diccionarios

Los *diccionarios* son una estructura bastante particular y tienen casos de uso más definidos que las demás. Los diccionarios están compuestos por **claves** y sus **valores**, los diccionarios van entre llaves. Un ejemplo de diccionario de dos claves:

```python
{"Nombre": "Darth Venom", "Nivel": 15}
```

Aquí hay un diccionario de dos claves, `Nombre` y `Nivel`. Es importante notar que las claves no pueden ser un identificador como los nombres de las variables, no, tienen que ser de algún tipo de dato. En este caso las dos claves son dos strings.

En los diccionarios el *índice* funciona de una forma distinta y no hay *slicing*. En el *índice* de los diccionarios en vez de especificar posiciones se deben especificar **claves**. Para poner un ejemplo, teniendo en cuenta el diccionario anterior, si se quiere obtener el valor de la clave `Nombre`, suponiendo que el diccionario está guardado en la variable `D`, se usa:

```python
D['Nombre']
```

Y eso devolvería el string `"Darth Venom"`. Los diccionarios soportan **item assignment**, esto se puede usar tanto para modificar claves como para crear claves nuevas. Por ejemplo, si queremos modficar el nombre para que diga Tux, sería:

```python
D['Nombre'] = 'Tux'
```

Y si además de esas claves quisiera añadir la clave `"Followers"`, se podría hacer:

```python
D['Followers'] = 150
```

Tras hacer esto ahora el diccionario sería:

```python
{'Nombre': 'Tux', 'Nivel': 15, 'Followers': 150}
```

Los *diccionarios* son especialmente útiles para guardar información de forma ordenada. Para eliminar la última clave de un diccionario se usa el método `popitem()`.

```python
D.popitem()
```

Para eliminar una clave específica de un diccionario se usa el método `pop()`, el cual recibe un argumento, la clave que se quiere eliminar. Por ejemplo, para eliminar la clave `'Nivel'` en el ejemplo anterior se usa:

```python
D.pop('Nivel')
```

Para declarar un diccionario vacío se usa:

```python
D = {}
```

## Conjuntos

Los *conjuntos* son probablemente la estructura menos usada y curiosamente la que más métodos tiene. Una de las características de esta estructura es que no permite que se repitan datos. Generalmente los conjuntos se usan para eliminar datos duplicados de una lista.

Al igual que los diccionarios, los datos dentro de un conjunto van entre llaves. Aquí es donde hay que prestar atención a la hora de declarar un conjunto vacío. La forma incorrecta de hacerlo sería:

```python
C = {}
```

Esto declarará un diccionario vacío en vez de un conjunto, la forma correcta es:

```python
C = set()
```

Para añadir datos a un conjunto se usa el método `add()`

```python
C.add("dato")
```

El método `pop()` no toma ningún argumento y elimina un elemento del conjunto de forma arbitraria, para eliminar un elemento específico se usa el método `discard()`, si el argumento pasado a `discard()` no existe, no ocurre nada.

```python
C.discard("dato")
```

Se mencionó que se pueden usar los conjuntos para eliminar los datos duplicados de una lista, esto se hace de la siguiente manera. Supongamos que tenemos esta lista y la guardamos en la variable `L`:

```python
L = [1,2,3,3,3,4,2,5,1]
```

Si quisiéramos eliminar los datos duplicados usando conjuntos haríamos lo siguiente:

```python
L = list(set(L))
```

Ahora la explicación. La función `set()` crea un conjunto con los argumentos que se le pasen, entonces se crea un conjunto con la lista `L`, y como habíamos dicho, los conjuntos no pueden tener datos repetidos, por ende se borran los datos repetidos, luego se usa la función `list()` para hacer que el conjunto vuelva a convertirse en lista. El resultado es la lista sin datos repetidos.

```python
[1,2,3,4,5]
```

## Bonus

Los strings también poseen un índice y soportan *slicing*, a parte son **inmutables**, así que no soportan item assignment.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*
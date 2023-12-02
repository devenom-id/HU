# Python de 0 a 1000 #6
<b>By: Darth Venom - 27/01/2021</b>
<br>
<br>
En las guías anteriores se explicaron temas como impresión de texto en pantalla, pedir entrada al usuario, tipos de datos, variables y comentarios. En este blog veremos algunas cosas sobre los strings que son útiles y que pueden ser difíciles de encontrar si uno decide adentrarse directamente en la documentación de este lenguaje.

Antes que nada quiero recordar que al momento de subir esta guía se está usando *Python* en su versión `3.9.1`.

Hace unos años, cuando se usaba Python 2, los strings no soportaban caracteres unicode por defecto, es decir, tenías que añadir comentarios especiales al inicio del programa o añadir un flag que especificara que el string es un "string unicode". Lo anterior significa que por defecto, en Python 2 no era posible manejar correctamente strings que contuvieran tildes, caracteres de otros idiomas ni símbolos especiales. El flag que se usaba para especificar que un string era un string unicode era `u""`, es decir, poniendo una 'u' antes de las comillas.

Con la llegada de Python 3 eso se quedó atrás, entre los tantos cambios, los strings por defecto pasaron a ser strings unicode, esto significa que en Python 3 `"hello"` es igual a `u"hello"`.

Ahora sabemos que poner una 'u' antes del string significa que es un string unicode, pero

<center>¿Hay más flags para especificar en un string?</center>

La respuesta es sí, hay más. Otro de los posibles flags que pueden añadirse a los strings es `r`, esto crea lo que se llama un *"raw string"*, o string literal. Básicamente un *raw string* es aquel que ignora cualquier caracter especial, por ejemplo, los escapes de control y los escapes ANSI. Si usamos:

```python
print("Hello\\nworld")
```

El resultado sería

```
Hello
world
```

En cambio si añadimos el flag `r`, sería

```python
print(r"Hello\nworld")
```

Y el resultado ahora sería

```
Hello\nworld
```

Esto se debe a que como se mencionó, los strings literales ignoran todo tipo de caracteres especiales.

En este blog se abordará algo llamado formateo de strings, pero antes se mencionará un flag más, el flag `b`. Este flag es uno que convierte un string en bytes, esto ahora puede resultar algo inútil, pero bastante más adelante lo encontraremos útil. Para spoilear, más especificamente lo encontraremos útil cuando lleguemos a cosas como comunicación con sockets.

## FORMATEO DE STRINGS

Cuando hablamos de formateo de strings nos referimos a modificar un string con los parámetros que pasemos. Esto es especialmente útil cuando queremos añadir los valores de una o más variables dentro de un string.

Supongamos que tenemos dos variables, `nombre` y `edad`, la primera vale `"Juán"` y la segunda vale `28`. Ahora queremos introducir esos datos en el siguiente string: `"Se llama _ y tiene _ años"`.

Recordando el blog anterior, sabemos que los strings se pueden sumar, pero sólo se pueden sumar entre strings, así que habría un problema a la hora de sumar el string con la variable edad, ya que contiene un int. Afortunadamente hay una forma de convertir un string en un `int` o un `int` en un string. Para convertir un string en un int usamos la función `int()`, y para convertir un `int` en un string usamos `str()`. En este caso hay que convertir la variable `edad` a string. Sumando sería:

```python
"Se llama " + nombre + " y tiene " + str(edad) + " años."
```

En efecto, esto nos serviría, pero no es tan elegante. Para hacerlo más elegante es que vamos a formatear el string, para hacerlo usaremos el método `format()` que tienen todos los strings. Para usar `format()` debemos poner `"{}"` en todos los lugares que queramos rellenar en el string y luego dentro de `format()` ponemos lo que queremos añadir.

```python
"Se llama {} y tiene {} años.".format(nombre, edad)
```

Así el resultado sería:

```
Se llama Juán y tiene 28 años.
```

Aún hay una forma más elegante de hacer esto. Una vez más usaremos un flag de los strings, el flag `f`. Este flag formatea el string sin necesidad de usar el método `format()`. A diferencia de la vez anterior, debemos añadir `"{}"` en las partes del string en las que queramos añadir valores, pero ahora esos valores debemos ponerlos dentro del `{}`. Ejemplo:

```python
f"Se llama {nombre} y tiene {edad} años."
```

Y efectivamente el resultado será:

```
Se llama Juán y tiene 28 años.
```

De este blog es importante recordar: Las flags de los strings, el método `format()`, la función `int()` y `str()`.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*
# Python de 0 a 1000 #4
<b>By: Darth Venom - 26/01/2021</b>
<br>
<br>
A menudo cuando se escriben largos programas puede ocurrir que hayan partes del código cuyo funcionamiento sea complejo y difícil de deducir, también puede ocurrir que tras tomar un día de descanso o varios, el programador vuelva a ver su código y no lo comprenda. Para evitar esto es que existen los comentarios.

Los comentarios son un recurso que se utiliza para explicar cómo funciona el código. Generalmente se usan en partes del código en las que se incluyen cosas que tienen un fin dificil de deducir, la mayoría de las veces, un programador usa comentarios para recordarse cosas a sí mismo, pero también sirve en el caso de que otro programador lea el código. En este blog veremos los comentarios y los docstrings.

Habiendo concluido la introducción, este tema ni práctica necesita, hacer un comentario es sencillo, no debería ser de otro modo. Para hacer un comentario se debe introducir un '#' y ya, el resto de la línea será un comentario. Los comentarios son ignorados por el intérprete, así que no importa qué haya en el comentario, sólo va destinado a la lectura de un programador.

Ejemplos de comentarios son:

```python
# Imprime Hello world
print("Hello world")

x = 25 # Declara la variable x de valor 25
```
A parte de los comentarios, existen los docstrings. Los docstrings son strings multilínea que se usan a modo de comentario, ya que no aparecen en el programa y son totalmente descartados por el intérprete, se usan para explicar el uso de una función o una clase y sus métodos.

Los docstrings a diferencia de los strings, se delimitan poniendo 3 comillas a cada lado. Por ejemplo:

```python
"""
Ejemplo de docstring.

Los docstrings pueden funcionar como comentarios multilínea.
"""
```

Un ejemplo de un buen docstring que documente una función y sus parámetros sería:

```python
def hola(nombre, idioma="en"):
    """
    Dí Hola a una persona.

    Argumentos:
    nombre: El nombre de la persona.
    idioma: El idioma en el que la persona debe ser saludada.
    """
    ...
```
La guía aún no llegó a explicar qué es un argumento, qué es `def` o qué es una *función*, así que puedes sólo concentrarte en el *docstring*. Según el **PEP** (Python Enhancement Proposal), la primera línea de un docstring debe describir la función o clase, luego deben ir los argumentos u otro tipo de explicación más compleja sobre el uso de la función. En la descripción de la función en la primera línea, el verbo debe ser escrito en imperativo y cada línea debe terminar con un punto.

## Comentario vs Docstring

Cada cosa se debe usar en la situación correspondiente. Los comentarios deben usarse cuando lo que se busca es describir el **FUNCIONAMIENTO** de una parte del código, en cambio, los docstrings deben usarse cuando se quiere documentar el **USO** de una función, método o clase.

*Se reiterará que aún la guía no cubre qué es una función, método o clase, así que está bien no saber qué significan estos elementos.*
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

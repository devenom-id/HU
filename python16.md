# Python de 0 a 1000 #16
<b>By: Darth Venom - 08/12/2021</b>
<br>
<br>
En este capítulo se introducirá el concepto de **"scope"**, también llamado **"namespace"**; se explicará qué es y cómo funciona en Python. Al no tratarse de una función del lenguaje o de algo relativo a su sintaxis, sino de algo que es parte del funcionamiento de Python no será un capítulo muy extenso.

Los **scopes** son el alcance que puede tener un objeto, ya sea una variable, una estructura de datos o una función. Con alcance se refiere a los sectores del código desde los que se puede acceder a un objeto. Inicialmente toda variable o función será declarada dentro del **scope global**, <u>esto significa que podrá ser accedida desde cualquier sector del código,</u> esto es lo que sucede con los objetos presentes en el scope global. Por otro lado, están los **scopes locales**, dentro de cada función hay un scope local correspondiente a la misma, a diferencia de lo que ocurre con el scope global, <u>los objetos de un scope local sólo pueden llamarse desde el mismo scope</u>.

Ejemplo de función global "foo":

```python
def foo():
    return "Just a function"
```

Ejemplo de función local "foo":

```python
def X():
    def foo():
        return "Just a function"
    return 0
```

En el caso 1, la función puede ser llamada muy fácilmente usando `foo()`. En el segundo caso, la función `foo()` sólo puede ser llamada desde adentro de la función `X()`, ya que está dentro del scope local de la función `X()`.

Veamos otro ejemplo pero con variables.

```python
var = 5  # Variable global

def X():
    loc = 10  # Variable local
    print(var)  # Acceder variable global desde scope local
```

Este es un ejemplo totalmente válido en el que se puede ver que desde un scope local se puede acceder a una variable global, pero hay una limitación con respecto a esto, sólo se puede acceder al valor de una variable global desde un scope local pero no se la puede modificar. Es decir, el siguiente código produce un error:

```python
var = 5

def X():
    var = 10

print(var)
```

La forma correcta de alterar una variable global desde un scope local es usando la sentencia `global`.

## GLOBAL

La sentencia `global` hace disponible una variable `global` en un scope local de tal manera que la variable pueda ser accedida o modificada, por ende esta sentencia debe usarse en funciones. Al usar la sentencia `global` en una variable toda modificación que se le aplique tendrá efecto en la variable original aún después de que la función finalice.

La sintaxis es sencilla.

```python
global identificador
```

(Recordemos que técnicamente se llama identificador al nombre de un objeto o variable.)

Veamos el siguiente ejemplo que hace válido el código del ejemplo anterior.

```python
var = 5

def X():
    global var
    var = 10

X()
print(var)
```
El último `print()` en este caso imprime el número `10`.

En otros lenguajes de programación como C o C++ las variables globales no requieren de una sentencia `global` para que puedan ser modificadas desde un scope local. Pero también en esos lenguajes se pueden 'pasar argumentos por referencia' a una función. A continuación se explicará lo anterior.

Por defecto, cuando pasas una variable como argumento de una función, la función hace una copia del valor de esa variable, es decir, no toma la variable que se pasó como argumento sino su valor. Lo anterior significa que si se pasa una variable como argumento a una función y dentro de la función se intenta cambiar el valor de esa variable, al finalizar la función el valor será el mismo que antes de ejecutar la función.

Veamos un ejemplo.

```python
var = 10

def foo(var):
    var = 5

foo(var)
print(var)
```

Esto imprimirá el número 10 y no el número 5. Esto se debe a que como se dijo, la función `foo()` creó una copia del valor de la variable `var` y por ende al modificar el parámetro `var` no estamos modificando la variable original sino una copia.

### ¿Qué es pasar argumentos por referencia?

Cuando se pasa un argumento por referencia, la función no toma el valor de la variable original como en el ejemplo anterior sino que toma a la variable en sí, por lo tanto si se modifica la variable dentro de la función, se modificará la original también.

Desafortunadamente pasar por referencia no existe en Python. Como se explicó anteriormente, en Python si pasas una variable como argumento de una función, el parámetro no tomará a la variable en sí sino al objeto que contiene la variable, por lo tanto se puede deducir que las estructuras de datos mutables, es decir, las que admiten modificaciones en sus valores (Revisar capítulo 10), pueden ser alteradas como si se estuviese pasando por referencia o como si la variable fuese global. El único límite es que se debe alterar la estructura usando indexing o los métodos de la estructura.

A continuación se mostrará un ejemplo modificando estructuras mutables.

```python
def foo(L):
    L[0] = 5
    L.append(20)

L = [0, 7]
foo(L)
print(L)
```

Esto imprimiría la lista `[5, 7, 20]`

Ahora un ejemplo en el que la modificación al objeto original no funciona.

```python
def foo(L):
    L = [234, 24, 211]

L = [0, 7]
foo(L)
print(L)
```

<center>¿Por qué en este ejemplo no funciona?</center>

Simple. No funciona porque en el segundo ejemplo se asigna una estructura nueva, y no es la misma que la que se pasó como argumento de la función, en cambio en el primer ejemplo se modificó el mismo objeto que se pasó como argumento de la función, por eso es que al terminar la función, al querer imprimir ese objeto se encuentra modificado.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

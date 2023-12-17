# Python de 0 a 1000 #17
<b>By: Darth Venom - 06/01/2022</b>
<br>
<br>
En los últimos capítulos se desarrolló qué son las funciones, para qué sirven y cómo usarlas. Este capítulo está dedicado a los lambda, también llamados "funciones anónimas". Se les llama funciones anónimas debido a que no hace falta especificar un identificador (nombre) para la función al momento de declararla, son funciones simples que se usan generalmente una o pocas veces, o que se requieren por un corto período de tiempo.

Las lambda no son funciones normales; la sintaxis para declarar una lambda es distinta a la de las funciones convencionales, entre las principales diferencias a la hora de declarar una lambda es que estas funciones admiten únicamente una sóla línea, no es como lo que ocurre en las funciones normales, donde no hay límite respecto a la cantidad de líneas que puede tener una función. Otra de las diferencias en la declaración de las lambda es que no se admiten las declaraciones de variables dentro de las lambdas, y no se admite la sentencia `return`.

En una función lambda, en vez del return simplemente se pone el dato, sin el `return`. Esto lo veremos en un momento.

La sintaxis para la declaración de un lambda es la siguiente:
```python
lambda params: código
```

**Aquí podemos ver que en vez de usar la sentencia `def` se usa la sentencia `lambda`, que los parámetros no van entre paréntesis, y que el código se escribe en la misma línea.**

Vamos a ver un ejemplo:
```python
lambda x: x*2
```

Esta función espera recibir un parámetro llamado `x` y devuelve el doble de `x`, es decir `x*2`. Como se puede observar aquí, no hay un sentencia `return`, simplemente se pone una expresión, en este caso `x*2` y se devuelve el resultado sin la necesidades de la sentencia return. Otro ejemplo de retorno aún más sencillo:

```python
lambda: "Hello world"
```

En esta función se devuelve el string `"Hello world"` sin necesidad de la sentencia `return`, si en su lugar se llamara a una función, el lambda devolvería el retorno de esa función. Un detalle importante en este último ejemplo fue que decía "`lambda:`", esto fue porque no esperaba recibir ningún parametro.

Entonces, si una función lambda espera recibir parámetros, estos se ponen separados por comas después de la palabra clave lambda y antes de los dos puntos (:)

Función lambda que espera recibir dos parámetros `x`, `y`
```python
lambda x, y: código
```

Función lambda que no recibe ningún parámetro
```python
lambda: código
```

Como se puede ver, cuando no recibe ningún parámetro se ponen los dos puntos directamente después de la palabra lambda.

## EJEMPLOS DE LAMBDAS

Función que devuelve el doble de un número
```python
lambda x: x*2
```

Función que potencia un exponente `X` elevado a la potencia `Y}`
```python
lambda X, Y: X**Y
```

Función que calcula el porcentaje `P` de un número `N` y devuelve un string en formato de porcentaje
```python
lambda P, N: f"{P*N//100}%"
```

## CÓMO USAR LAMBDAS

Tomando el último ejemplo, este sería el modo mediante el cuál se puede usar comúnmente un lambda

```python
Var = lambda P, N: f"{P*N//100}%"
print(Var(50, 500))
```

El resultado de este código sería "250%"

En el caso anterior se declara un lambda y se asigna a una variable, posteriormente se llama al lambda con sus argumentos. Hay una forma más de llamar a un lambda, es la forma directa, es decir, sin asignar el lambda a una variable antes de llamarla. Este último modo de llamar las lambdas no es tan frecuente, aquí un ejemplo:

```python
(lambda param: código)()
```
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

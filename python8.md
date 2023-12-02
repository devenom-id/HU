# Python de 0 a 1000 #8
<b>By: Darth Venom - 29/01/2021</b>
<br>
<br>
En varias ocasiones puede ocurrir que queramos operar con un `int` o un `float` pero que el número sea un string, también podría pasar que queramos convertir un `int` en un `bool`. Hay montones de casos, podríamos querer convertir cualquier dato dependiendo de la situación, por eso en este blog veremos cómo hacerlo.

Para cada tipo de dato hay una función que permite realizar una conversión desde otro tipo de dato. Por ejemplo, si queremos convertir el string `"1505"` en un `int` podemos usar: `int("1505")`.

Las siguientes son las funciones que permitirán realizar conversiones:

`int()` = Convierte un valor a `int`, si no es posible devuelve `ValueError`.
`str()` = Convierte un valor a string.
`bool()` = Convierte un valor a `bool`.
`float()` = Convierte un valor a `float`, si no es posible devuelve `ValueError`.

En el caso de `bool()`, si se le pasa un `int` o un `float` devolverá `True` cuando el número sea mayor a `0`, si se le pasa un string devolerá `True` cuando el string no esté vacío, es decir, cuando no sea `""`.

Vamos a ver un caso en el que queramos usar esto. Supongamos que queremos hacer un programa que pida un número al usuario y luego devuelva ese mismo número aumentado en 15 unidades. Si hacemos:

```python
num = input("Número: ")
print(num + 15)
```

Recibiremos un `TypeError` porque no podemos **concatenar** (unir) un string con un `int`. Esto se debe a que `input()` siempre devuelve un string, aunque introduzcamos sólo números, siempre devuelve string. Para solucionar este problema aplicaremos lo que aprendimos en este blog.

```python
num = input("Número: ")
print(int(num) + 15)
```

Y así habremos solucionado el error. Pueden probar ese mismo código.

Para añadir algo más, en el blog anterior vimos los flags que pueden tener los strings, uno de ellos era el `b` que significaba bytes. Si tenemos un string común y queremos pasarlo a bytes usamos el método `encode()`, la cual espera recibir un formato de codificación, por defecto usa *"utf-8"*, por ejemplo:

```python
"hello".encode("utf-8")
```

Resultado:

```python
b'hello'
```

Si queremos decodificar los bytes a string nuevamente podemos usar el método `decode()`.

```python
b"hello".decode("utf-8"))
```

Resultado:

```python
'hello'
```

Y así concluye el blog, este tema es simple pero importante ya que pueden recibir errores a la hora de hacer comparaciones con `if` usando el valor de `input()` por ejemplo, creyendo que el `input()` dará un `int` cuando en realidad siempre será string.
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*
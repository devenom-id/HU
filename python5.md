# Python de 0 a 1000 #5
<b>By: Darth Venom - 27/01/2021</b>
<br>
<br>
Tras haber aprendido varios de los elementos más básicos hay que aprender a operar con ellos a través de los distintos operadores que serán explicados en este blog. En este blog veremos 3 tipos de operadores distintos: Operadores algebráicos, operadores de asignación y operadores de comparación.

Los operadores deben ir en el medio de dos expresiones. Todas las operaciones que hagamos con los distintos operadores devolverán un dato de algún tipo.

## OPERADORES ALGEBRÁICOS

Los operadores algebráicos son aquellos que se usan para operar con números, tanto *int* como *float*. Los operadores algebráicos son:

`+`   Suma números
`-`   Resta números
`*`   Multiplica números
`/`   Divide números
`//` División entera, es decir, el resultado siempre es int
`**` Potenciación, el número de la izquierda elevado al de la derecha

Las operaciones con operadores algebráicos siempre devuelven un *int* o un *float*. Un ejemplo de lo anterior es:
```python
5 + 5
```
Todos sabemos que 5 + 5 es 10, por ende, esa cuenta devuelve un int, que es 10. En cambio si dividimos 3 / 2, nos dará 1.5, que es un float.

Hay un detalle que añadir aquí, los strings se pueden sumar y multiplicar, pero hay varias limitaciones con esto. Las sumas de strings deben ser sí o sí entre strings, no se puede sumar un string con un int ni viceversa. Y sobre las multiplicaciones, no se puede multiplicar un string por otro string, lógico.
```python
"hello" + " world" # Devuelve "hello world"
"hello"*3 # Devuelve "hellohellohello"
```
## OPERADORES DE ASIGNACIÓN

Los operadores de asignación se usan para asignar un valor a una variable.

`=`    Asigna un valor a una variable
`+=`  Sumar al valor anterior
`-=`  Restar al valor anterior
`*=`  Multiplicar al valor anterior
`/=`  Dividir el valor anterior
`**=` Potenciar el valor anterior
`//=` División entera al valor anterior

Las operaciones de asignación devuelven None. Algunos ejemplos son:
```python
var = 50
var += 50
```
Tras esto, `var` vale 100.

## OPERADORES DE COMPARACIÓN

Para comparar datos se usan los operadores de comparación.

`==` Igual que
`!=` No es igual que
`<`   Menor que
`<=` Menor o igual que
`>`   Mayor
`>=` Mayor o igual que

Las operaciones de comparación devuelven un *bool*, repasando, un *bool* sólo puede ser dos cosas: `True` o `False`.

Para repasar esto, veremos tres ejemplos:
```python
50 == 50 # Esto devuelve True
50 != 25 # Esto también devuelve True
50 == "50" # Esto devuelve False, porque 50 es int y "50" es string
```
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

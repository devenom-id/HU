# Bash::Manejando la Terminal - De 0 a 1000 #6
<b>By: Darth Venom - 14/06/2021</b>
<br>
<br>
*Este será un corto capítulo explicando la diferencia entre usar strings de comillas dobles y strings de comillas simples en bash. A simple vista podría parecer un tema no muy relevante pero lo es, sobre todo a la hora de crear scripts o usar variables dentro de un sólo string.*

*Las comillas dobles son estas: " "*
*Las comillas simples son estas: ' '*

El significado de estos símbolos varía entre un lenguaje y otro. En lenguajes como Python, las comillas dobles o simples representan lo mismo: un string; no hay diferencia. En cambio, en lenguajes como C y C++, las comillas dobles se usan para representar un string mientras que las comillas simples se usan para representar un caracter.

En bash, las dos comillas representan un string, pero tienen una diferencia que si se desconoce puede traer errores difíciles de depurar.

<center>*Las comillas dobles representan string comunes. Cadenas de caracteres, igual que en cualquier lenguaje.*</center>

<center>*Las comillas simples son strings literales, es decir, si intentas formatear el string con variables o con símbolos que tengan un significado especial para bash, estos serán ignorados y se imprimirán literalmente.*</center>

Si tenemos la variable `$VAR` que contiene el string `"mundo"` e intentamos imprimirla con los dos tipos de comillas en cada caso producirá las siguientes salidas:

Comando: `echo "Hola $VAR"`<br>
Salida: `Hola mundo`<br>

Comando: `echo 'Hola $VAR'`<br>
Salida: `Hola $VAR`<br>

<center>*Saber la diferencia entre ambas es parte de aprender el lenguaje.*</center>
<br>
<hr>
*El blog ha llegado a su fin. Si tienes dudas puedes contactarme en Discord. Soy venom_instantdeath.*

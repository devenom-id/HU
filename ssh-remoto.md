# SSH - Acceso remoto

<b>By: <a href="https://github.com/msh-dv" target="_blank">Tony</a> - 15/01/2024</b>
<br>
<br>

Esta entrada es un complemento de la guía [SSH](ssh-guia.html) en donde veremos como conectarnos 
a un servidor SSH dentro de una red privada desde cualquier otro dispositivo usando 
[ngrok](https://ngrok.com/docs/) para hacer un TCP Endpoint.

*Para esto vamos a necesitar de un servidor SSH activo (en nuestra máquina host), tener configurada nuestra cuenta de ngrok y
tener listo nuestro cliente SSH en el dispositivo que queramos usar para conectarnos.*

## Del lado del servidor

Primero deberíamos instalar OpenSSH y ngrok con el siguiente comando:
```
sudo pacman -S openssh ngrok
```


Suponiendo que ya tengamos instalados nuestros programas, vamos a activar nuestro servidor SSH:

```
sudo systemctl start sshd
```
Por defecto en el servidor está configurado el puerto 22 en escucha, pero pueden cambiarlo en el archivo `/etc/ssh/sshd_config`.

Ahora vamos a usar ngrok para nuestro TCP Endpoint:

```
ngrok tcp 22
```
Con esto ngrok va a funcionar como un intermediario entre nuestro servidor y nuestro cliente SSH.

Nos debería mostrar algo como esto:

```
ngrok                                                                   (Ctrl+C to quit)

Session Status                online
Account                       john-doe (Plan: Free)
Version                       3.0.0
Region                        United States (us)
Latency                       78ms
Web Interface                 http://127.0.0.1:4040
Forwarding                    tcp://9.tcp.ngrok.io:13614 -> localhost:22

Connections                   ttl     opn     rt1     rt5     p50     p90
                              0       0       0.00    0.00    0.00    0.00
```
Donde lo que vamos a tomar es la dirección del host y el puerto de conexión, en este caso `2.tcp.ngrok.io` es nuestra
dirección de host y `13614` el puerto de conexión.

## Probando la conexión de nuestro servidor

### Linux:

Para podernos conectar desde un equipo GNU/Linux basta con usar la siguiente sintaxis:

```
ssh -p puerto usuario@direccion-host
```
Usando los datos del ejemplo y suponiendo que nuestro usuario es **doe** sería:

```
ssh -p 13614 doe@9.tcp.ngrok.io
```

### Android(Termux):

El proceso es prácticamente igual que en un sistema GNU/Linux, en este ejemplo usamos Termux como nuestro emulador de terminal,
una vez instalado basta con que descarguemos OpenSSH:

```
apt install openssh
```
Y usar la misma sintaxis de conexión en sistemas GNU/Linux:

```
ssh -p puerto usuario@direccion-host
```
*Con esto deberíamos poder acceder a nuestro servidor SSH desde cualquier dispositivo remoto, si hay alguna duda, no duden en
consultar en nuestro servidor de discord.*

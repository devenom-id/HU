# Zypper - Deshabilitar auto-refresh al instalar paquetes
<b>By: Darth Venom - 01/04/2022</b>
<br>
<br>
En OpenSUSE y distribuciones derivadas el gestor de paquetes es Zypper. Al realizar operaciones de instalación con Zypper se actualiza de forma automática la base de datos de todos los repositorios, esto dependiendo del tamaño de la actualización y la cantidad de repositorios añadidos puede tardar más o menos, pero lo cierto es que mientras se actualiza la base de datos de cada repositorio se pierde tiempo y para muchos usuarios esto puede ser molesto.
<br>
<br>
Para deshabilitar el auto-refresh o actualización automática se usa la operación modifyrepo, o su abreviación "mr", junto a la opción -F que es la que deshabilita el auto-refresh como en el siguiente ejemplo:
<br>
```
sudo zypper mr -F repo-backports-debug-update
```
<br>
El auto-refresh no es una opción de Zypper, o sea que no se puede desactivar de forma general sino que es una opción de los repositorios añadidos, por ende se debe desactivar por cada repositorio registrado. A continuación se muestran dos comandos mediante los cuales se puede deshabilitar el auto-refresh en todos los repositorios registrados:
<br>
```bash
zls(){ zypper lr | grep "^ [0-9]" | awk '{print $3}'; }
for i in $(zls); do sudo zypper mr -F $i; done
```
<br>
Si se quisiera habilitar nuevamente la opción de auto-refresh basta con usar modifyrepo o mr junto a la opción -f como en el siguiente ejemplo:
<br>
```
sudo zypper mr -f repo-debug
```
<br>
<hr>
*El post ha llegado a su fin. Si tienes dudas puedes contactarme en Discord, soy venom_instantdeath.*

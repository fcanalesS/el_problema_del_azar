# **Tarea computacional 00**
## Universidad Tecnológica Metropolitana - UTEM

* * *
Integrantes:
  - Felipe Sebastián Canales Saavedra
  - Javier Andres Reyes Gozalez  
  -  Felipe Aracena Carvacho

Profesor:
  - Sebastian Salazar Molina.

Asignatura:
  - Ingeniería de Software - Primer semestre del 2015
* * *

### Descripción del problema
Una empresa de juegos de azar “Al lote, ría”, necesita un software que realice los sorteos de su juego estrella “Qno”. Qno consiste en escoger de una forma completamente aleatorea 14 nu´meros de un conjunto ﬁnito de nu´meros que van del 1 al 25. 

### Tecnologías ocupadas

* [VMware](vmware.com) - Gestión de entornos virtuales.
* [Xubuntu](xubuntu.org) - Distribución basada en Ubuntu.
* [Sublime Text 3](sublimetext.com/3) - Editor de código multiplaforma.
* [g++](https://gcc.gnu.org/) - Compilador parte del grupo GNU Compiller Collection.

### Como compilar el poyecto?

Forma de compilar el proyecto:
```sh
$ g++ -o el_problema_del_azar version_final.cpp
```
Y ejecutar en terminal, según la opción correspondiente:
```sh
$ ./el_problema_del_azar -opcion
```
Donde "-opcion" y "el_problema_del_azar" corresponde a:
* -v: Muestra los integrantes y fecha de compilación.
* -g: Realiza la operación pedida por el problema
* el_problema_del_azar: corresponde a cualquier nombre que se le quiera dar al ejecutable
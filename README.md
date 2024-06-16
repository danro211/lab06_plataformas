# Laboratorio #6: Programación Bajo Plataformas Abiertas

## Descripción General
Este repositorio contiene los códigos fuente desarrollados para el Laboratorio #6 del curso IE-0117. Este laboratorio se enfoca en la implementación y manipulación de una pila usando listas doblemente enlazadas en C. Las operaciones implementadas incluyen `push`, `pop`, `peek`, y `isEmpty`. Además, se verifica la gestión de memoria mediante el uso de Valgrind para asegurarse de que no haya fugas de memoria.

## Estructura del Repositorio
El repositorio está organizado en un directorio principal que contiene los archivos necesarios para el laboratorio, como se muestra a continuación:

### Directorio `ejercicio`
Contiene el código fuente, los archivos de cabecera, y otros archivos relacionados con la implementación de la pila.
- `main.c`: Implementación del programa principal que prueba las funcionalidades de la pila.
- `stack.c`: Implementación de las funciones para manejar la pila.
- `stack.h`: Declaraciones de las estructuras y funciones para la pila.
- `Makefile`: Archivo para automatizar la compilación del proyecto y la limpieza de archivos generados.
- `valgrind_output.txt`: Resultado de la ejecución de Valgrind, demostrando que no hay fugas de memoria.
- `main`: Ejecutable compilado del código fuente.

## Compilación
Para compilar el proyecto, se utiliza un Makefile que automatiza el proceso. En un entorno Unix/Linux, se puede compilar y limpiar el proyecto con los siguientes comandos:

### Compilar el proyecto
```bash
make

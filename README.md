# Mi Proyecto en C con CMake

Este proyecto es un ejemplo simple de cómo estructurar un programa en C utilizando **CMake** para gestionar la compilación.

El objetivo del proyecto es mostrar cómo organizar un código en múltiples directorios y cómo usar `CMakeLists.txt` para compilar el programa correctamente.

---

## Estructura del proyecto

```
mi_proyecto/
│
├── CMakeLists.txt
│
├── src/
│   ├── main.c
│   └── CMakeLists.txt
│
├── math/
│   ├── suma.c
│   ├── resta.c
│   └── CMakeLists.txt
│
├── include/
│   ├── suma.h
│   └── resta.h
│
└── build/
```

### Descripción de los directorios

* **src/**
  Contiene el punto de entrada del programa (`main.c`) y la lógica principal del ejecutable.

* **math/**
  Contiene la implementación de funciones matemáticas que se compilan como una biblioteca interna.

* **include/**# Mi Proyecto en C con CMake

Este proyecto es un ejemplo simple de cómo estructurar un programa en C utilizando **CMake** para gestionar la compilación.

El objetivo del proyecto es mostrar cómo organizar un código en múltiples directorios y cómo usar `CMakeLists.txt` para compilar el programa correctamente.

---

## Estructura del proyecto

```
mi_proyecto/
│
├── CMakeLists.txt
│
├── src/
│   ├── main.c
│   └── CMakeLists.txt
│
├── math/
│   ├── suma.c
│   ├── resta.c
│   └── CMakeLists.txt
│
├── include/
│   ├── suma.h
│   └── resta.h
│
└── build/
```

### Descripción de los directorios

* **src/**
  Contiene el punto de entrada del programa (`main.c`) y la lógica principal del ejecutable.

* **math/**
  Contiene la implementación de funciones matemáticas que se compilan como una biblioteca interna.

* **include/**
  Contiene los archivos de cabecera (`.h`) utilizados por el programa.

* **build/**
  Directorio donde se generan los archivos de compilación creados por CMake.

---

## Cómo compilar el proyecto

Desde la raíz del proyecto:

```
mkdir build
cd build
cmake ..
make
```

Esto generará el ejecutable del programa.

---

## Ejecutar el programa

Una vez compilado:

```
./src/programa
```

El programa ejecutará una operación simple utilizando las funciones definidas en el módulo `math`.

---

## Objetivo del proyecto

Este proyecto sirve como ejemplo educativo para aprender:

* cómo estructurar un proyecto en C
* cómo separar código en módulos
* cómo utilizar **CMake** para manejar la compilación en proyectos con múltiples directorios

  Contiene los archivos de cabecera (`.h`) utilizados por el programa.

* **build/**
  Directorio donde se generan los archivos de compilación creados por CMake.

---

## Cómo compilar el proyecto

Desde la raíz del proyecto:

```
mkdir build
cd build
cmake ..
make
```

Esto generará el ejecutable del programa.

---

## Ejecutar el programa

Una vez compilado:

```
./src/programa
```

El programa ejecutará una operación simple utilizando las funciones definidas en el módulo `math`.

---

## Objetivo del proyecto

Este proyecto sirve como ejemplo educativo para aprender:

* cómo estructurar un proyecto en C
* cómo separar código en módulos
* cómo utilizar **CMake** para manejar la compilación en proyectos con múltiples directorios

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

* **include/**# Proyecto C con CMake

Este proyecto es un ejemplo simple de un programa en C que utiliza **CMake** para la gestión de la compilación. Incluye una biblioteca estática para operaciones matemáticas (como la suma), un ejecutable principal y pruebas unitarias.

## Estructura del Proyecto

```
prueba/
│
├── CMakeLists.txt          # Archivo principal de CMake
├── README.md               # Este archivo
│
├── build/                  # Directorio de compilación (generado)
│   ├── programa            # Ejecutable principal
│   ├── test_suma           # Ejecutable de pruebas
│   └── ...                 # Otros archivos generados por CMake
│
├── include/
│   └── app.h               # Cabeceras para la aplicación
│
├── lib/
│   ├── CMakeLists.txt      # CMake para la biblioteca
│   ├── suma.c              # Implementación de la función suma
│   └── suma.h              # Cabecera de la función suma
│
├── src/
│   ├── app.c               # Lógica de la aplicación
│   └── main.c              # Punto de entrada del programa
│
└── tests/
    └── test_suma.c         # Pruebas para la función suma
```

### Descripción de los Directorios

- **include/**: Contiene las cabeceras públicas de la aplicación.
- **lib/**: Contiene la implementación de la biblioteca estática para operaciones matemáticas.
- **src/**: Contiene el código fuente del ejecutable principal.
- **tests/**: Contiene las pruebas unitarias.
- **build/**: Directorio generado por CMake donde se compila el proyecto.

## Requisitos

- CMake (versión 3.10 o superior)
- Un compilador C (como GCC)

## Compilación

1. Crea el directorio de compilación (si no existe):
   ```
   mkdir build
   cd build
   ```

2. Configura el proyecto con CMake:
   ```
   cmake ..
   ```

3. Compila el proyecto:
   ```
   make
   ```

Esto generará los ejecutables `programa` y `test_suma` en el directorio `build/`.

## Ejecución

- Para ejecutar el programa principal:
  ```
  ./programa
  ```

- Para ejecutar las pruebas:
  ```
  ./test_suma
  ```

## Limpieza

Para limpiar los archivos generados:
```
make clean
```

O elimina el directorio `build/` completamente.

## Notas

Este proyecto demuestra una estructura básica para proyectos C con CMake, incluyendo bibliotecas estáticas y pruebas.

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

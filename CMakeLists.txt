cmake_minimum_required(VERSION 3.29)
project(Programacion_estructurada_Roberto_Cardenas C)

set(CMAKE_C_STANDARD 11)

include_directories("EJERCICIO ESTRUCTURAS")

add_executable(Programacion_estructurada_Roberto_Cardenas
    "EJERCICIO ESTRUCTURAS/estudiante.c"
    "EJERCICIO ESTRUCTURAS/estudiante.h"
    "EJERCICIO ESTRUCTURAS/main.c"
    "EJERCICIO ESTRUCTURAS/main.h")

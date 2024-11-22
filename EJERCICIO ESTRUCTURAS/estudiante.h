#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <stdlib.h>

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

// Nodo de la lista enlazada
typedef struct Nodo {
    Estudiante estudiante;
    struct Nodo* siguiente;
} Nodo;

// Prototipos de funciones para manejar la lista
Nodo* crearNodo(const char* nombre, int edad, float promedio);
void agregarEstudiante(Nodo** cabeza, const char* nombre, int edad, float promedio);
void verEstudiantes(Nodo* cabeza);
void eliminarEstudiante(Nodo** cabeza, const char* nombre);
void liberarLista(Nodo** cabeza);

// Definición de una unión que puede almacenar diferentes tipos de datos
typedef union {
    int entero;
    float flotante;
    char cadena[50];
} TipoDato;

#endif

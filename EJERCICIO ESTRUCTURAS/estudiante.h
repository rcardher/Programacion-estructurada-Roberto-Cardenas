#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <stdlib.h>

// Definimos una estructura Estudiante que contiene nombre, edad y promedio
typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

// Creamos un nodo, que contiene un Estudiante y un puntero hacia el siguiente nodo
typedef struct Nodo {
    Estudiante estudiante;
    struct Nodo* siguiente;
} Nodo;

// Creamos las distintas funciones
Nodo* crearNodo(const char* nombre, int edad, float promedio);
void agregarEstudiante(Nodo** cabeza, const char* nombre, int edad, float promedio);
void verEstudiantes(Nodo* cabeza);
void eliminarEstudiante(Nodo** cabeza, const char* nombre);
void liberarLista(Nodo** cabeza);

// Definimos una unión que puede almacenar un entero, un float o una cadena
typedef union {
    int entero;
    float flotante;
    char cadena[50];
} TipoDato;

// Creamos el prototipo de la función que pasa la estructura Estudiante por dirección
void imprimirEstudiantePorDireccion(Estudiante* estudiante);

#endif






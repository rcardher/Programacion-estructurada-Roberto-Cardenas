#include "estudiante.h"
#include <stdio.h>
#include <string.h>

// Crear un nuevo nodo
Nodo* crearNodo(const char* nombre, int edad, float promedio) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo != NULL) {
        strncpy(nuevo->estudiante.nombre, nombre, sizeof(nuevo->estudiante.nombre) - 1);
        nuevo->estudiante.nombre[sizeof(nuevo->estudiante.nombre) - 1] = '\0';
        nuevo->estudiante.edad = edad;
        nuevo->estudiante.promedio = promedio;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

// Agregar un estudiante a la lista
void agregarEstudiante(Nodo** cabeza, const char* nombre, int edad, float promedio) {
    Nodo* nuevo = crearNodo(nombre, edad, promedio);
    if (nuevo != NULL) {
        nuevo->siguiente = *cabeza;
        *cabeza = nuevo;
    }
}

// Ver todos los estudiantes en la lista
void verEstudiantes(Nodo* cabeza) {
    Nodo* actual = cabeza;
    if (actual == NULL) {
        printf("La lista está vacía.\n");
        return;
    }
    while (actual != NULL) {
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               actual->estudiante.nombre,
               actual->estudiante.edad,
               actual->estudiante.promedio);
        actual = actual->siguiente;
    }
}

// Eliminar un estudiante por nombre
void eliminarEstudiante(Nodo** cabeza, const char* nombre) {
    Nodo* actual = *cabeza;
    Nodo* anterior = NULL;

    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        printf("Estudiante con nombre '%s' no encontrado.\n", nombre);
        return;
    }

    if (anterior == NULL) {
        *cabeza = actual->siguiente; // Eliminar el primero
    } else {
        anterior->siguiente = actual->siguiente; // Eliminar nodo intermedio o final
    }

    free(actual);
    printf("Estudiante '%s' eliminado.\n", nombre);
}

// Liberar toda la lista
void liberarLista(Nodo** cabeza) {
    Nodo* actual = *cabeza;
    while (actual != NULL) {
        Nodo* siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    *cabeza = NULL;
}

// Función para copiar un estudiante
Estudiante copiarEstudiante(Estudiante original) {
    Estudiante copia;
    // Copiar los valores del estudiante original a la copia
    strncpy(copia.nombre, original.nombre, sizeof(copia.nombre) - 1);
    copia.nombre[sizeof(copia.nombre) - 1] = '\0';  // Asegurar que la cadena se termine en null
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}




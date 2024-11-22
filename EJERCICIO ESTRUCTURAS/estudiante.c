#include "estudiante.h"
#include <stdio.h>
#include <string.h>

// Crear un nuevo nodo con los datos de un estudiante cualquiera
Nodo* crearNodo(const char* nombre, int edad, float promedio) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));  // Asignamos memoria para un nuevo nodo
    if (nuevo != NULL) {
        // Copiamos los datos del estudiante al nuevo nodo
        strncpy(nuevo->estudiante.nombre, nombre, sizeof(nuevo->estudiante.nombre) - 1);
        nuevo->estudiante.nombre[sizeof(nuevo->estudiante.nombre) - 1] = '\0';
        nuevo->estudiante.edad = edad;
        nuevo->estudiante.promedio = promedio;
        nuevo->siguiente = NULL;
    }
    return nuevo;
}

// Agregamos un estudiante a la lista enlazada
void agregarEstudiante(Nodo** cabeza, const char* nombre, int edad, float promedio) {
    Nodo* nuevo = crearNodo(nombre, edad, promedio);  // Creamos el nuevo nodo
    if (nuevo != NULL) {
        nuevo->siguiente = *cabeza;
        *cabeza = nuevo;
    }
}

// Mostramos todos los estudiantes en la lista
void verEstudiantes(Nodo* cabeza) {
    Nodo* actual = cabeza;
    if (actual == NULL) {
        printf("La lista está vacía.\n");
        return;
    }
    while (actual != NULL) {
        // Imprimimos los datos de cada estudiante
        printf("Nombre: %s, Edad: %d, Promedio: %.2f\n",
               actual->estudiante.nombre,
               actual->estudiante.edad,
               actual->estudiante.promedio);
        actual = actual->siguiente;
    }
}

// Eliminar un estudiante de la lista por su nombre
void eliminarEstudiante(Nodo** cabeza, const char* nombre) {
    Nodo* actual = *cabeza;
    Nodo* anterior = NULL;

    // Buscar el estudiante por su nombre
    while (actual != NULL && strcmp(actual->estudiante.nombre, nombre) != 0) {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual == NULL) {
        printf("Estudiante con nombre '%s' no encontrado.\n", nombre);
        return;
    }

    // Eliminar el nodo de la lista
    if (anterior == NULL) {
        *cabeza = actual->siguiente;  // Eliminamos el primer nodo
    } else {
        anterior->siguiente = actual->siguiente;  // Eliminar el nodo intermedio o final
    }

    free(actual);  // Liberamos la memoria del nodo
    printf("Estudiante '%s' eliminado.\n", nombre);
}

// Liberamos toda la lista de estudiantes
void liberarLista(Nodo** cabeza) {
    Nodo* actual = *cabeza;
    while (actual != NULL) {
        Nodo* siguiente = actual->siguiente;
        free(actual);
        actual = siguiente;
    }
    *cabeza = NULL;
}

// Función para copiar los datos de un estudiante
Estudiante copiarEstudiante(Estudiante original) {
    Estudiante copia;
    strncpy(copia.nombre, original.nombre, sizeof(copia.nombre) - 1);
    copia.nombre[sizeof(copia.nombre) - 1] = '\0';
    copia.edad = original.edad;
    copia.promedio = original.promedio;

    return copia;
}

// Creamos una función que recibe la dirección de un estudiante y lo imprime
void imprimirEstudiantePorDireccion(Estudiante* estudiante) {
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Edad: %d\n", estudiante->edad);
    printf("Promedio: %.2f\n", estudiante->promedio);
}










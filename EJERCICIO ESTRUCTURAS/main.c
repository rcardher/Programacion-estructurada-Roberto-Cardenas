#include <stdio.h>
#include "main.h"

int main() {
    // Creamos una lista vacía de estudiantes
    Nodo* lista = NULL;

    // Agregamos estudiantes a la lista
    agregarEstudiante(&lista, "Roberto Cárdenas", 18, 7.5);
    agregarEstudiante(&lista, "Miguel Godoy", 22, 6);
    agregarEstudiante(&lista, "Pablo Moreno", 25, 3.5);

    // Mostramos los estudiantes en la lista
    printf("Lista de estudiantes:\n");
    verEstudiantes(lista);

    // Eliminamos un estudiante
    printf("\nEliminando 'Miguel Godoy':\n");
    eliminarEstudiante(&lista, "Miguel Godoy");

    // Mostramos la lista tras eliminar un estudiante
    printf("\nLista de estudiantes después de eliminar:\n");
    verEstudiantes(lista);

    // Liberamos toda la memoria de la lista
    liberarLista(&lista);
    printf("\nLista liberada.\n");

    // Creamos un estudiante y pasamos su dirección a la función
    Estudiante estudianteOriginal = {"Jesús Gomez", 21, 8.9};

    // Llamamos a la función para imprimir el estudiante por dirección
    printf("\nImprimir Estudiante por Dirección:\n");
    imprimirEstudiantePorDireccion(&estudianteOriginal);

    return 0;
}









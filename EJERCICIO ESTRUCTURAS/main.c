#include <stdio.h>
#include "main.h"

int main() {
    Nodo* lista = NULL; // Inicializar la lista vacía

    // Añadir estudiantes a la lista
    agregarEstudiante(&lista, "Roberto Cárdenas", 18, 7.5);
    agregarEstudiante(&lista, "Miguel Godoy", 18, 6);
    agregarEstudiante(&lista, "Pablo Moreno", 25, 3.5);

    // Ver la lista de estudiantes
    printf("Lista de estudiantes:\n");
    verEstudiantes(lista);

    // Eliminar un estudiante
    printf("\nEliminando 'Maria Lopez':\n");
    eliminarEstudiante(&lista, "Maria Lopez");

    // Ver la lista de estudiantes después de eliminar
    printf("\nLista de estudiantes después de eliminar:\n");
    verEstudiantes(lista);

    // Liberar toda la lista
    liberarLista(&lista);
    printf("\nLista liberada.\n");

    return 0;
}


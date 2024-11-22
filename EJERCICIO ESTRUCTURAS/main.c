#include <stdio.h>
#include "main.h"

int main() {
    // Lista de estudiantes
    Nodo* lista = NULL; // Inicializar la lista vacía
    agregarEstudiante(&lista, "Roberto Cárdenas", 18, 7.5);
    agregarEstudiante(&lista, "Miguel Godoy", 18, 6);
    agregarEstudiante(&lista, "Pablo Moreno", 25, 3.5);

    // Ver la lista de estudiantes
    printf("Lista de estudiantes:\n");
    verEstudiantes(lista);

    // Eliminar un estudiante
    printf("\nEliminando 'Maria Lopez':\n");
    eliminarEstudiante(&lista, "Miguel Godoy");

    // Ver la lista de estudiantes después de eliminar
    printf("\nLista de estudiantes después de eliminar:\n");
    verEstudiantes(lista);

    // Liberar toda la lista
    liberarLista(&lista);
    printf("\nLista liberada.\n");

    // Crear un estudiante para copiar
    Estudiante estudianteOriginal = {"Jesús Gomez", 21, 8.9};

    // Copiar el estudiante
    Estudiante estudianteCopia = copiarEstudiante(estudianteOriginal);

    // Imprimir los datos del estudiante original y la copia
    printf("\nEstudiante Original:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteOriginal.nombre, estudianteOriginal.edad, estudianteOriginal.promedio);

    printf("\nEstudiante Copia:\n");
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    return 0;
}




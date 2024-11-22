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
    printf("\nEliminando 'Miguel Godoy':\n");
    eliminarEstudiante(&lista, "Miguel Godoy");

    // Ver la lista de estudiantes después de eliminar
    printf("\nLista de estudiantes después de eliminar:\n");
    verEstudiantes(lista);

    // Liberar toda la lista
    liberarLista(&lista);
    printf("\nLista liberada.\n");

    // Crear y utilizar una unión para almacenar diferentes tipos de datos
    TipoDato valor;

    // Asignar un valor entero a la unión
    valor.entero = 42;
    printf("\nValor almacenado en la unión (entero): %d\n", valor.entero);

    // Asignar un valor flotante a la unión
    valor.flotante = 3.14;
    printf("Valor almacenado en la unión (flotante): %.2f\n", valor.flotante);

    // Asignar una cadena de caracteres a la unión
    snprintf(valor.cadena, sizeof(valor.cadena), "Hola Mundo");
    printf("Valor almacenado en la unión (cadena): %s\n", valor.cadena);

    // Nota: Almacenando diferentes valores en la unión
    // Solo uno de los valores puede estar en la unión al mismo tiempo.
    // Si accedemos al valor después de asignar uno nuevo, sobrescribirá el anterior.

    return 0;
}



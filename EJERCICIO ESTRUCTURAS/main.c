#include <stdio.h>
#include "main.h"

// Implementación de función para imprimir información del estudiante
void imprimirEstudiante(Estudiante estudiante) {
    printf("Nombre: %s\n", estudiante.nombre);
    printf("Edad: %d\n", estudiante.edad);
    printf("Promedio: %.2f\n", estudiante.promedio);
}

int main() {
    // Crear un estudiante
    Estudiante estudiante1 = crearEstudiante("Roberto Cárdenas", 18, 7);

    // Imprimir la información del estudiante
    imprimirEstudiante(estudiante1);

    return 0;
}

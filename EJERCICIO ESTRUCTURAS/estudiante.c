#include "estudiante.h"
#include <string.h>

// Implementación de la función para crear un estudiante
Estudiante crearEstudiante(const char *nombre, int edad, float promedio) {
    Estudiante estudiante;
    strncpy(estudiante.nombre, nombre, sizeof(estudiante.nombre) - 1);
    estudiante.nombre[sizeof(estudiante.nombre) - 1] = '\0'; // Asegurar terminación nula
    estudiante.edad = edad;
    estudiante.promedio = promedio;
    return estudiante;
}

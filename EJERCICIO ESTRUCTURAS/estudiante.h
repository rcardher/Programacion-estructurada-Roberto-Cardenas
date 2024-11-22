#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

typedef struct {
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

// Prototipos de funciones
Estudiante crearEstudiante(const char *nombre, int edad, float promedio);

#endif

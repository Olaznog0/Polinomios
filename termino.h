/* termino.h */
#ifndef TERMINO_H_INCLUDED
#define TERMINO_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
#include "string.h"

typedef struct {
    long int coeficiente;
    int grado;
} Termino;

void CargarTermino (Termino &t, string a, int &i); /* Carga un termino desde string */
void MostrarTermino (Termino t); /* Muestra un termino por pantalla */
int GetCoeficiente (Termino t); /* Devuelve el coeficiente de un Termino */
int GetGrado (Termino t); /* Devuelve el grado de un Termino */
int evaluarTermino (Termino t, int eval);



#endif // TERMINO_H_INCLUDED

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
Termino SumarTerminos (Termino a, Termino b); /* Dados dos terminos devuelve la suma de los mismos */
Termino MultiplicarTerminos (Termino a, Termino b); /* Dados dos terminos devuelve el producto de los mismos */


#endif // TERMINO_H_INCLUDED

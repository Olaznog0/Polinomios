/* formula.h */
#ifndef FORMULA_H_INCLUDED
#define FORMULA_H_INCLUDED

#include <stdio.h>
#include "boolean.h"
#include "string.h"
#include "termino.h"
#include "lista.h"

typedef struct nodoF{
    Termino info;
    nodoF*sig;
} Nodo;

typedef Nodo *Formula;

void crearFormula(Formula &f); /* Carga formula desde un string */
void MostrarFormula(Formula a); /* Muestra por pantalla la lista de terminos que comprende la formula */
void insTerminoPrincipio(Formula &f, Termino t);
void insTerminoAlFinal(Formula &f, Termino t);
Termino getTermino(Formula f);




#endif // FORMULA_H_INCLUDED

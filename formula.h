/* formula.h */
#ifndef FORMULA_H_INCLUDED
#define FORMULA_H_INCLUDED

#include <stdio.h>
#include "boolean.h"
#include "string.h"
#include "termino.h"

typedef struct nodoF{
    Termino info;
    nodoF*sig;
} Nodo;

typedef Nodo *Formula;

void crearFormula(Formula &f); /* Carga formula desde un string */
void MostrarFormula(Formula a); /* Muestra por pantalla la lista de terminos que comprende la formula */
int GradoFormula(Formula a); /* Devuelve el grado de una Formula */
int EvaluarFormula(int &a); /* Devuelve el resultado de sustituir x por un numero */
Formula SumarFormulas(Formula a, Formula b); /* Devuelve una formula que es la suma de otras dos */
Formula MultiplicarFormulas(Formula a, Formula b); /* Devuelve una formula que es el producto de otras dos */
void insTermino(Formula &f, Termino t);

#endif // FORMULA_H_INCLUDED

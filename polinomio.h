/* polinomio.h */
#ifndef POLINOMIO_H_INCLUDED
#define POLINOMIO_H_INCLUDED

#include<stdio.h>
#include "formula.h"

typedef struct {
            string nombre;
            Formula formu;
        }Polinomio;

Polinomio crearPolinomio(Formula f,string s); /* Crear un polinomio desde un string */
void mostrarPolinomio(Polinomio p); /* Muestra Polinomio */
Formula SumarPolinomios(Formula sumando1, Formula sumando2); /* Suma un polinomio a partir de dos polinomios existentes y crea uno nuevo en memoria */
Formula multiplicarPolinomio(Formula mult1, Formula mult2); /* Multiplica un polinomio a partir de dos polinomios existentes y crea uno nuevo en memoria */
string GetNombre (Polinomio p);
Formula GetFormula (Polinomio p);
int evaluarPolinomio (Polinomio p, int eval);

#endif // POLINOMIO_H_INCLUDED

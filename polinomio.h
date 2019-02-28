/* polinomio.h */
#ifndef POLINOMIO_H_INCLUDED
#define POLINOMIO_H_INCLUDED

#include<stdio.h>
#include "formula.h"

typedef struct {
            string nombre;
            Formula formu;
        }Polinomio;

Polinomio Crear(string poli); /* Crear un polinomio desde un string */
void MostrarPolinomio(Polinomio p); /* Muestra Polinomio */
Polinomio SumarPolinomio(Polinomio &nuevoPol, Polinomio a, Polinomio b); /* Suma un polinomio a partir de dos polinomios existentes y crea uno nuevo en memoria */
Polinomio multiplicarPolinomio(Polinomio &nuevoPol, Polinomio a, Polinomio b); /* Multiplica un polinomio a partir de dos polinomios existentes y crea uno nuevo en memoria */

#endif // POLINOMIO_H_INCLUDED

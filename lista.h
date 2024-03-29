#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#include <stdio.h>
#include "boolean.h"
#include "string.h"
#include "termino.h"

typedef struct nodoL{
    string info;
    nodoL*sig;
} NodoJ;

typedef NodoJ *ListaCoeficientes;

void crearLista (ListaCoeficientes & lis);
boolean Vacia (ListaCoeficientes lis);
void MostrarLista(ListaCoeficientes l); /* Muestra por pantalla la lista de terminos que comprende la formula */
string Primero (ListaCoeficientes lis);
void InsFront (ListaCoeficientes & lis, string e);


#endif // LISTA_H_INCLUDED

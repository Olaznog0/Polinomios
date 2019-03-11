/* ABB.h */
#ifndef ABB_H_INCLUDED
#define ABB_H_INCLUDED

#include <stdio.h>
#include "polinomio.h"

typedef struct nodoA {
    Polinomio info;
    nodoA * HIzq;
    nodoA * HDer;
} nodo;

typedef nodo *Arbol;

void CrearArbol(Arbol &a); /* Crea el arbol */
boolean EsVacio(Arbol a); /* saber si el �rbol est� vac�o */
void ListarOrdenado (Arbol a);
Polinomio DarRaiz (Arbol a); /* devolver la ra�z del �rbol, precondici�n: Arbol NO vac�o */
void InsertarPolinomio (Arbol &a, Polinomio e); /* insertar un nuevo valor en el ABB, precondici�n: el valor no exista previamente en el ABB */
Polinomio busquedaPolinomio (Arbol a, string n); /* saber si un elemento pertenece al ABB, versi�n recursiva */
boolean ExistePolinomio (Arbol a, string n);
void Borrar_Minimo (Arbol &a); /* algoritmo que borra el valor m�nimo del ABB, Precondici�n : el �rbol a  NO est� vac�o */
void mostrarArbol(Arbol a);


#endif // ABB_H_INCLUDED

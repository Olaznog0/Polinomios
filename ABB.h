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
Arbol Constructor (Polinomio r,Arbol i,Arbol d); /* dados dos �rboles y un valor, devolver un nuevo �rbol colocando dicho valor como una nueva ra�z y a los dos �rboles como sub�rboles de la misma */
Polinomio DarRaiz (Arbol a); /* devolver la ra�z del �rbol, precondici�n: Arbol NO vac�o */
void InsertarPolinomio (Arbol &a, Polinomio e); /* insertar un nuevo valor en el ABB, precondici�n: el valor no exista previamente en el ABB */
boolean Pertenece (Arbol a, Polinomio e); /* saber si un elemento pertenece al ABB, versi�n recursiva */
Polinomio Minimo (Arbol a);
void Borrar_Minimo (Arbol &a); /* algoritmo que borra el valor m�nimo del ABB, Precondici�n : el �rbol a  NO est� vac�o */


#endif // ABB_H_INCLUDED

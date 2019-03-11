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
boolean EsVacio(Arbol a); /* saber si el árbol está vacío */
void ListarOrdenado (Arbol a);
Polinomio DarRaiz (Arbol a); /* devolver la raíz del árbol, precondición: Arbol NO vacío */
void InsertarPolinomio (Arbol &a, Polinomio e); /* insertar un nuevo valor en el ABB, precondición: el valor no exista previamente en el ABB */
Polinomio busquedaPolinomio (Arbol a, string n); /* saber si un elemento pertenece al ABB, versión recursiva */
boolean ExistePolinomio (Arbol a, string n);
void Borrar_Minimo (Arbol &a); /* algoritmo que borra el valor mínimo del ABB, Precondición : el árbol a  NO está vacío */
void mostrarArbol(Arbol a);


#endif // ABB_H_INCLUDED

/* ABB.cpp */
#include"ABB.h"

/* precondición: el valor no exista previamente en el ABB */
void CrearArbol (Arbol &a) {
    a = NULL;
}

boolean EsVacio(Arbol a) {
    return (boolean) (a == NULL);
}

Arbol Constructor (Polinomio r,Arbol i,Arbol d) {
    Arbol a = new nodo;
    a->info = r;
    a->HIzq = i;
    a->HDer = d;
    return a;
}

/* Precondición: Arbol NO vacío */
Polinomio DarRaiz (Arbol a) {
    if (a == NULL)
        return a->info;

}

void InsertarPolinomio (Arbol &a, Polinomio e) {
	if (a == NULL) {
		a = new nodo;
		a -> info = e;
		a -> HIzq = NULL;
		a -> HDer = NULL;
	}
	else
        if (e.nombre < a->info.nombre)
            InsertarPolinomio(a->HIzq,e);
        else
            InsertarPolinomio(a->HDer,e);
}

boolean PerteneceABB (Arbol a, Polinomio e) {
	if (a == NULL)
		return FALSE;
	else
        if (e.nombre == a->info.nombre)
            return TRUE;
	else
		if (e.nombre < a->info.nombre)
			return PerteneceABB(a->HIzq,e);
		else
			return PerteneceABB(a->HDer,e);
}

Polinomio Minimo (Arbol a) {
    if (a->HIzq == NULL)
        return (a->info);
    else
        return Minimo(a->HIzq);
}

/* Precondición : el árbol a  NO está vacío */
void Borrar_Minimo (Arbol &a) {
    Arbol aux;
    if (a->HIzq == NULL) {
        aux = a->HDer;
        delete a;
        a = aux;
    }
    else
        Borrar_Minimo (a->HIzq);
}

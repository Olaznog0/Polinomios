/* ABB.cpp */
#include"ABB.h"
#include"polinomio.h"

/* precondici�n: el valor no exista previamente en el ABB */
void CrearArbol (Arbol &a) {
    a = NULL;
}

boolean EsVacio(Arbol a) {
    return (boolean) (a == NULL);
}

void ListarOrdenado (Arbol a) {
    if (a != NULL) {
        ListarOrdenado (a -> HIzq);
        printf ("%c", a -> info);
        ListarOrdenado (a -> HDer);
    }
}

/* Precondici�n: Arbol NO vac�o */
Polinomio DarRaiz (Arbol a) {
    if (a == NULL)
        return a->info;

}

/* precondici�n: el valor no exista previamente en el ABB */
void InsertarPolinomio (Arbol &a, Polinomio e) {
	if (a == NULL) {
		a = new nodo;
		a -> info = e;
		a -> HIzq = NULL;
		a -> HDer = NULL;
	}
	else
        if (strmen(e.nombre, a->info.nombre))
            InsertarPolinomio(a->HIzq,e);
        else
            InsertarPolinomio(a->HDer,e);
}

Polinomio busquedaPolinomio (Arbol a, string n) {
    Polinomio p = a->info;
    if(streq(p.nombre, n))
        return a->info;
    else
        if(strmen(n, p.nombre))
            return busquedaPolinomio(a->HIzq, n);
        else
            return busquedaPolinomio(a->HDer, n);
}

boolean ExistePolinomio (Arbol a, string n) {
    if(a == NULL)
        return FALSE;
    else {
        Polinomio p = a->info;
        if(streq(p.nombre, n))
            return TRUE;
        else
            if(strmen(n, p.nombre))
                return ExistePolinomio(a->HIzq, n);
            else
                return ExistePolinomio(a->HDer, n);
    }
}

/* Precondici�n : el �rbol a  NO est� vac�o */
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

void mostrarArbol(Arbol a) {
    if(a == NULL)
        return;
    else {
        mostrarArbol(a -> HIzq);
        mostrarPolinomio(a->info);
        mostrarArbol(a -> HDer);
    }
}

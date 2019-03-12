/* formula.cpp */
#include "formula.h"

void crearFormula(Formula &f) {
    f = NULL;
}

void MostrarFormula(Formula a) {
    while(a != NULL) {
        MostrarTermino(a -> info);
        a = a -> sig;
    }
}

void insTerminoPrincipio(Formula &f, Termino t) {
    Formula aux = new Nodo;
    aux -> info = t;
    aux -> sig = f;
    f = aux;
}

void insTerminoAlFinal(Formula &f, Termino t) {
    Formula nodof = new Nodo;
    Formula aux;
    nodof -> info = t;
    nodof -> sig = NULL;
    if(f == NULL)
        f = nodof;
    else {
        aux = f;
        while(aux->sig != NULL)
            aux = aux -> sig;
        aux ->sig = nodof;
    }
}

Termino getTermino(Formula f){
    Termino t = f -> info;
    return t;

}

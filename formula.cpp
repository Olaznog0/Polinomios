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

int GradoFormula(Formula a) {

}

int EvaluarFormula(int &a) {

}

Formula SumarFormulas(Formula a, Formula b) {

}

Formula MultiplicarFormulas(Formula a, Formula b) {

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


/*
void insTerminoOrdenado(Formula &f, Termino t) {
    Formula nodof = new Nodo;
    Formula aux, sig;
    boolean encontre = FALSE;
    if(f == NULL) {
        nodof -> info = t;
        nodof -> sig = NULL;
        f = nodof;
    }
    else {
        aux = f;
        sig = aux -> sig;
        while(!encontre && sig != NULL) {
            if(GetGrado(aux ->info) == GetGrado(t)) {
                encontre = TRUE;
                aux ->info.coeficiente = aux ->info.coeficiente
            }
            else {
                if(GetGrado(aux ->info) > GetGrado(t)) {
                    if(GetGrado(sig -> info < GetGrado(t)) {
                        nodof -> info = t;
                        nodof -> sig = sig;
                        aux -> sig = nodof;
                    }
                    else {
                        aux = sig;
                        sig = aux -> sig;

                    }

                }
            }
        }
    }
}*/


Termino getTermino(Formula f){
    Termino t = f -> info;
    return t;

}

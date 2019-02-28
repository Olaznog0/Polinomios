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

void insTermino(Formula &f, Termino t) {
    Formula aux = new Nodo;
    aux -> info = t;
    aux -> sig = f;
    f = aux;
}

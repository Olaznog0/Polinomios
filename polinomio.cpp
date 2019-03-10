/* polinomio.cpp */
#include"polinomio.h"

Polinomio crearPolinomio(Formula f,string s) {
    Polinomio p;
    p.formu = f;
    p.nombre = s;
    return p;
}

void mostrarPolinomio(Polinomio p) {
    print(p.nombre);
    printf("\t");
    MostrarFormula(p.formu);
}

Polinomio SumarPolinomio(Polinomio &nuevoPol, Polinomio a, Polinomio b) {

}

Polinomio multiplicarPolinomio(Polinomio &nuevoPol, Polinomio a, Polinomio b) {

}

string GetNombre (Polinomio p) {
    return p.nombre;
}

Formula GetFormula (Polinomio p) {
    return p.formu;
}


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
    printf("\n");
}

Formula SumarPolinomios(Formula sumando1, Formula sumando2) {
    Formula aux1, aux2, res;
    res = NULL;
    aux1 = sumando1;
    aux2 = sumando2;
    Termino t1;
    Termino t2;
    while(aux1 != NULL || aux2 != NULL) {
        if(aux1 == NULL) {
            t2 = aux2->info;
            insTerminoAlFinal(res, t2);
            aux2 = aux2 -> sig;
        }
        else {
            if(aux2 == NULL) {
                t1 = aux1->info;
                insTerminoAlFinal(res, t1);
                aux1 = aux1 -> sig;
            }
            else {
                t1 = aux1 -> info;
                t2 = aux2 -> info;
                if(GetGrado(t1) == GetGrado(t2)) {
                    Termino suma;
                    suma.coeficiente = GetCoeficiente(t1) + GetCoeficiente(t2);
                    suma.grado = GetGrado(t1);
                    insTerminoAlFinal(res, suma);
                    aux1 = aux1 -> sig;
                    aux2 = aux2 -> sig;
                }
                else {
                    if(GetGrado(t1) > GetGrado(t2)) {
                        insTerminoAlFinal(res, t1);
                        aux1 = aux1 -> sig;
                    }
                    else {
                        insTerminoAlFinal(res, t2);
                        aux2 = aux2 -> sig;
                    }
                }
            }
        }
    }
    return res;
}

Formula multiplicarPolinomio(Formula mult1, Formula mult2) {
    Formula aux1, aux2, res, multParcial;
    res = NULL;
    aux1 = mult1;
    Termino t;
    while(aux1 != NULL) {
        aux2 = mult2;
        multParcial = NULL;
        while(aux2 != NULL){
            t.coeficiente = GetCoeficiente(aux1->info) * GetCoeficiente(aux2->info);
            t.grado = GetGrado(aux1->info) + GetGrado(aux2->info);
            insTerminoAlFinal(multParcial, t);
            aux2 = aux2->sig;
        }
        res = SumarPolinomios(res, multParcial);
        aux1 = aux1->sig;
    }
    return res;
}

string GetNombre (Polinomio p) {
    return p.nombre;
}

Formula GetFormula (Polinomio p) {
    return p.formu;
}

int evaluarPolinomio(Polinomio p,int eval){
    Formula f = GetFormula(p);
    int resu = 0;
    while(f != NULL){
        resu = resu + evaluarTermino(getTermino(f), eval);
        f = f -> sig;
    }
    return resu;

}





















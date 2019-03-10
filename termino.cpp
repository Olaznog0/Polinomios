/* termino.cpp */
#include "termino.h"

void CargarTermino (Termino &t, string a, int &i){
    t.grado = i;
    t.coeficiente = atoi(a);
    i++;
}

void MostrarTermino (Termino t) {
    if(t.coeficiente != 0 && t.grado > 1) {
        printf(" %ldX", t.coeficiente);
        printf("%d", t.grado);
    }
    else {
            if (t.grado == 1 && t.coeficiente == 1)
                printf(" X");
            else
                if (t.grado == 1 && t.coeficiente != 0)
                    printf(" %ldX", t.coeficiente);
            else
                if (t.grado == 0 && t.coeficiente != 0)
                    printf(" %ld", t.coeficiente);
    }
}

int GetCoeficiente (Termino t) {
    return t.coeficiente;
}

int GetGrado (Termino t) {
    return t.grado;
}
int evaluarTermino(Termino t, int eval){
    int coef = t.coeficiente;
    int grad = t.grado;
    int res = 1;
    int i;

    for(i=0; i<grad; i++)
        res = res * eval;
    res = res * coef;
    return res;
}

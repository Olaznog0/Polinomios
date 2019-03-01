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
    else
        if(t.grado == 1 && t.coeficiente != 0)
            printf(" %ldX", t.coeficiente);
        else
            if (t.grado == 0 && t.coeficiente != 0)
                printf(" %ld", t.coeficiente);
}

Termino SumarTerminos (Termino a, Termino b){


}

Termino MultiplicarTerminos (Termino a, Termino b){


}

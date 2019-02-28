/* termino.cpp */
#include "termino.h"



void CargarTermino (Termino &t, string a, int &i){
    t.grado = i;
    t.coeficiente = atoi(a);
    i++;
}

void MostrarTermino (Termino t){
    printf(" %ldX", t.coeficiente);
    printf("%d", t.grado);
}

Termino SumarTerminos (Termino a, Termino b){


}

Termino MultiplicarTerminos (Termino a, Termino b){


}

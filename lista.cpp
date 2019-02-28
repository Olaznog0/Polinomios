/* lista.cpp */
#include "lista.h"

void crearLista (ListaCoeficientes & lis) {
    lis = NULL;
}

boolean Vacia (ListaCoeficientes lis) {
    boolean es = FALSE;
    if (lis == NULL)
        es = TRUE;
    return es;
}

void CargarLista(string g) {



}


void MostrarLista(ListaCoeficientes l) {
    //int i = 0;
    string str;
    strcrear(str);
    boolean b = FALSE;
    while(l != NULL) {
        //streq(l -> info, str);
        print(l-> info);
        printf("\n");
        l = l -> sig;
    }


}

/* Precondición: lista NO vacía */
string Primero (ListaCoeficientes lis) {
    return lis -> info;
}

void InsFront (ListaCoeficientes & lis, string e) {
    ListaCoeficientes aux = new NodoJ;
    aux -> info = e;
    aux -> sig = lis;
    lis = aux;
}

void partirComando (string comando, ListaCoeficientes &l) {



}

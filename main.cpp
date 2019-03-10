#include <stdio.h>
#include "Comandos.h"

int main() {
    string comando;
    string input;

    Arbol a;
    CrearArbol(a);

    IniciarPantalla();
    do {
        printf("\nIngrese un nuevo comando para continuar: ");
        int i=0;
        SolicitarInput(input);
        getSiguiente(input, comando, i);
        if(seleccionComando(comando)== 1)
            comandoCrearPolinomio(input, a, i);
        else if(seleccionComando(comando)== 2)
            sumarComando(input, a, i);
        else if(seleccionComando(comando)== 3)
            multiplicarComando(input, a, i);
        else if(seleccionComando(comando)== 4)
            evaluarComando(input, a);
        else if(seleccionComando(comando)== 5)
            esraizComando(input, a);
        else if(seleccionComando(comando)== 6)
            comandoMostrar(a);
        else if(seleccionComando(comando)== 7)
            printf("Entro a guardar");
        else if(seleccionComando(comando)== 8)
            printf("Entro a recuperar");
        else if(seleccionComando(comando)== 9)
            printf("\n*****\tHasta Luego!\t*****\n");
        else if(seleccionComando(comando)== 10)
            IniciarPantalla();
        else if(seleccionComando(comando)== 11){
            printf("\nTiene un error en el nombre del comando, usted escribio: ");
            print(comando);
        }
    } while (seleccionComando(comando)!= 9);

    return 0;
}


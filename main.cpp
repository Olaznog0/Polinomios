#include <stdio.h>
#include "Comandos.h"

int main() {
    string comando;
    string input;

    do {
        int i=0;
        InicioPrograma(input);
        getSiguiente(input,comando,i);
        if(seleccionComando(comando)== 1)
            comandoCrear(input, comando);
        else if(seleccionComando(comando)== 2)
            printf("Entro a sumar");
        else if(seleccionComando(comando)== 3)
            printf("Entro a multiplicar");
        else if(seleccionComando(comando)== 4)
            printf("Entro a evaluar");
        else if(seleccionComando(comando)== 5)
            printf("Entro a es raiz");
        else if(seleccionComando(comando)== 6)
            printf("Entro a mostrar");
        else if(seleccionComando(comando)== 7)
            printf("Entro a guardar");
        else if(seleccionComando(comando)== 8)
            printf("Entro a recuperar");
        else if(seleccionComando(comando)== 9)
            printf("Hasta Luego!");
        else if(seleccionComando(comando)== 10){
            printf("\nTiene un error en el nombre del comando, usted escribio: ");
            print(comando);
        }
    } while (seleccionComando(comando)!= 9);

    return 0;
}

#include <stdio.h>
#include "Comandos.h"

int main() {

    //SIMPLE FILE CHANGE TO SEE IF WE CAN FIND IT.

    string input;
    string comando;
    string parametro;
    string termino;
    ListaCoeficientes listaTerminos;

    do {
        InicioPrograma(input, comando, parametro, termino);
        if(validarComando(comando, com1, com2, com3, com4, com5, com6, com7, com8, com9)){
            printf("\nComando Validado\n");
            if(streq(comando, com1)) {
                int i = strlar(comando);
                i++; // avanzo el i para que no quede trancado en el espacio ' '
                getSiguiente(input, parametro, i); // busco parametro nombre de archivo y posterior verificacion a implementar
                printf("\nEl parametro ingresado es:\n");
                print(parametro);
                if(parametro) {// hago busqueda de nombre polinomio para verificar que no existe y debo conseguir todos los terminos del usuario
                    crearLista(listaTerminos);

                    while(input[i]!= '\0'){
                        i++;
                        getSiguiente(input, termino, i);
                        printf("\nEl termino ingresado es:\n");
                        print(termino);
                        InsFront(listaTerminos, termino);
                        //VALIDAR
                    }
                    MostrarLista(listaTerminos);
                    Formula form;
                    crearFormula(form);
                    int contGrado = 0;
                    while(listaTerminos != NULL){

                        Termino t;
                        CargarTermino(t, listaTerminos->info, contGrado);
                        insTermino(form, t);
                        listaTerminos = listaTerminos -> sig;
                    }
                    MostrarFormula(form);
                }
            }
            else
                if(streq(comando, com2))
                    printf("Entro a sumar");
            else
                if(streq(comando, com3))
                    printf("Entro a multiplicar");
            else
                if(streq(comando, com4))
                    printf("Entro a evaluar");
            else
                if(streq(comando, com5))
                    printf("Entro a es raiz");
            else
                if(streq(comando, com6))
                    printf("Entro a mostrar");
            else
                if(streq(comando, com7))
                    printf("Entro a guardar");
            else
                if(streq(comando, com8))
                    printf("Entro a recuperar");
            else
                if(streq(comando, com9))
                    printf("Hasta Luego!");
        }
        else {
            printf("\nTiene un error en el nombre del comando, usted escribio: ");
            print(comando);
        }
    } while (!streq(comando, com9));

    return 0;
}

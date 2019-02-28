#include <stdio.h>
#include "Comandos.h"

int main() {
 string comando;
 string input;
 InicioPrograma(input);

 //do{

    int i=0;
    getSiguiente(input,comando,i);
    if(validarComando(comando)){
       printf("\nComando Validado\n");
       if(seleccionComando(comando)==1) {
            if(cantidadPalabras(input)>2){
                string parametro;
                string termino;
                ListaCoeficientes listaTerminos;
                strcrear(comando);
                strcrear(parametro);
                strcrear(termino);

                int i = strlar(comando);
                //i++; // avanzo el i para que no quede trancado en el espacio ' '
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
                    printf("Cantidad de palabras ingresadas no es valida");
        }
        else if(seleccionComando(comando)==2)
                printf("Entro a sumar");
        else if(seleccionComando(comando)==3)
                printf("Entro a multiplicar");
        else if(seleccionComando(comando)==4)
                printf("Entro a evaluar");
        else if(seleccionComando(comando)==5)
                printf("Entro a es raiz");
        else if(seleccionComando(comando)==6)
                printf("Entro a mostrar");
        else if(seleccionComando(comando)==7)
                printf("Entro a guardar");
        else if(seleccionComando(comando)==8)
                printf("Entro a recuperar");
        else if(seleccionComando(comando)==9)
                printf("Hasta Luego!");
    }
    else {
        printf("\nTiene un error en el nombre del comando, usted escribio: ");
        print(comando);
    }
//} while (seleccionComando(comando)!= 9);

return 0;
}

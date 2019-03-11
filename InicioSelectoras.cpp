/* InicioSelectoras.cpp */
#include "InicioSelectoras.h"

void IniciarSeleccion(Arbol a, string input, string comando) {

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
            guardarComando(input, a, i);
        else if(seleccionComando(comando)== 8)
            recuperarComando(input, a);
        else if(seleccionComando(comando)== 9)
            printf("\n*****\tHasta Luego!\t*****\n");
        else if(seleccionComando(comando)== 10)
            IniciarPantalla();
        else if(seleccionComando(comando)== 11)
            SintaxisComando();
        else if(seleccionComando(comando)== 12) {
            int aux = stgVacio(comando);
            if(aux == 0)
                printf("\nUsted no ha escrito nada, intente nuevamente.\n");
            else {
                printf("\nTiene un error en el nombre del comando, usted escribio: ");
                print(input);
            }
        }
    } while (seleccionComando(comando)!= 9);
}

void IniciarPantalla() {
    printf("\n\tBienvenido al programa.");
    printf("\n\tIngrese un Comando para continuar. \n");
    printf("\nPara repetir el menu presione :menu y por ayuda con los comandos :ayuda\n");
    printf("\n1- Crear: crea un nuevo polinomio especificando todos sus coeficientes");
    printf("\n2- Sumar: realiza la suma de dos polinomios, creando uno nuevo como resultado");
    printf("\n3- Multiplicar: realiza la multiplicacion de dos polinomios, creando uno nuevo como resultado");
    printf("\n4- Evaluar: realiza la evaluacion para un polinomio en un valor entero dado");
    printf("\n5- Esraiz: muestra por pantalla si un numero entero dado es raiz de un polinomio");
    printf("\n6- Mostrar: muestra por pantalla todos los polinomios existentes en memoria");
    printf("\n7- Guardar: guarda en archivo un polinomio existente en memoria");
    printf("\n8- Recuperar: recupera a memoria un polinomio previamente guardado en archivo");
    printf("\n9- Salir: abandona la aplicacion\n\n");
}

void SintaxisComando() {
    printf("\nSintaxis de los Comandos, panel de ayuda:\n");
    printf("\n\tCrear -> crear nombre termino1 termino2 terminoN");
    printf("\n\tSumar -> sumar nombreNuevo nombre1 nombre2");
    printf("\n\tMultiplicar -> multiplicar nombreNuevo nombre1 nombre2");
    printf("\n\tEvaluar -> evaluar nombre numeroEntero");
    printf("\n\tEsRaiz -> esraiz nombre numeroEntero");
    printf("\n\tMostrar -> mostrar");
    printf("\n\tGuardar -> guardar nombre nombreArchivo.txt");
    printf("\n\tRecuperar -> recuperar nombreArchivo.txt\n");
}

int seleccionComando(string s){
    string com1= "crear";
    string com2= "sumar";
    string com3= "multiplicar";
    string com4= "evaluar";
    string com5= "esraiz";
    string com6= "mostrar";
    string com7= "guardar";
    string com8= "recuperar";
    string com9= "salir";
    string com10= "menu";
    string com11= "ayuda";
    int b;
    // Convierto el string del usuario a lowercase para verificar
    for(int i = 0; s[i]; i++)
        s[i] = tolower(s[i]);
    // Valido los comandos ingresados
    if(streq(com1,s))
            b = 1;
    else
        if(streq(com2,s))
            b = 2;
    else
        if(streq(com3,s))
            b = 3;
    else
        if(streq(com4,s))
            b = 4;
    else
        if(streq(com5,s))
            b = 5;
    else
        if(streq(com6,s))
            b = 6;
    else
        if(streq(com7,s))
            b = 7;
    else
        if(streq(com8,s))
            b = 8;
    else
        if(streq(com9,s))
            b = 9;
    else
        if(streq(com10,s))
            b = 10;
    else
        if(streq(com11,s))
            b = 11;
    else
        b = 12;
    return b;
}

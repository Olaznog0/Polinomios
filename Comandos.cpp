/* Comandos.cpp */
#include "Comandos.h"


void InicioPrograma(string &input, string &comando, string &parametro, string &termino) {


    IniciarPantalla();
    leerComandoUsuario(input);

    int i = 0;
    int palabras = 0;

    strcrear(comando);
    strcrear(parametro);
    strcrear(termino);

    getSiguiente(input,comando,i);
    palabras = cantidadPalabras(input);

    print(comando);

}

boolean validarComando (string s, string com1, string com2, string com3, string com4, string com5, string com6, string com7, string com8, string com9){
    boolean b = FALSE;
// Convierto el string del usuario a lowercase para verificar
    for(int i = 0; s[i]; i++)
      s[i] = tolower(s[i]);
// Valido los comandos ingresados
    if(streq(com1,s))
        b = TRUE;
    else
        if(streq(com2,s))
            b = TRUE;
    else
        if(streq(com3,s))
            b = TRUE;
    else
        if(streq(com4,s))
            b = TRUE;
    else
        if(streq(com5,s))
            b = TRUE;
    else
        if(streq(com6,s))
            b = TRUE;
    else
        if(streq(com7,s))
            b = TRUE;
    else
        if(streq(com8,s))
            b = TRUE;
    else
        if(streq(com9,s))
            b = TRUE;

    return b;
}

void IniciarPantalla() {
    printf("\n Bienvenido al programa.");
    printf("\n Ingrese un Comando para continuar, por mas informacion presione :ayuda\n");
    printf("\n1- Crear: crea un nuevo polinomio especificando todos sus coeficientes");
    printf("\n2- Sumar: realiza la suma de dos polinomios, creando uno nuevo como resultado");
    printf("\n3- Multiplicar: realiza la multiplicacion de dos polinomios, creando uno nuevo como resultado");
    printf("\n4- Evaluar: realiza la evaluacion para un polinomio en un valor entero dado");
    printf("\n5- Esraiz: muestra por pantalla si un numero entero dado es raiz de un polinomio");
    printf("\n6- Mostrar: muestra por pantalla todos los polinomios existentes en memoria");
    printf("\n7- Guardar: guarda en archivo un polinomio existente en memoria");
    printf("\n8- Recuperar: recupera a memoria un polinomio previamente guardado en archivo");
    printf("\n9- Salir: abandona la aplicacion\n\n");
    print("Ingrese comando: ");
}

void leerComandoUsuario(string &input) {
    strcrear(input);
    scan(input);
}

int cantidadPalabras (string str) {
    int cont = ocurre(str,' ');
    return (cont+1);
}

int ocurre (string str, char c) {
    int i = 0,
    cont = 0;
    while (str[i] != '\0') {
        if (str[i] == c)
            cont++;
        i++;
    }
    return cont;
}

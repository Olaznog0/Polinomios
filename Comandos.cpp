/* Comandos.cpp */
#include "Comandos.h"

void SolicitarInput(string &s) {
    leerComandoUsuario(s);
}

void IniciarPantalla() {
    printf("\n\tBienvenido al programa.");
    printf("\n\tIngrese un Comando para continuar. Para repetir el menu presione :menu\n");
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

void leerComandoUsuario(string &input) {
    strcrear(input);
    scan(input);
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
        b = 11;
    return b;
}

void comandoCrearPolinomio(string in, Arbol &a, int i) {
    if(cantidadPalabras(in) > 2){
        validarParametro(in, a, i);
    }
    else
        printf("Cantidad de palabras ingresadas no es valida");
}

void validarParametro(string in, Arbol &a, int i) {
    string parametro;
    strcrear(parametro);
    crearNombre(in, parametro, i, a);
}

void crearNombre(string in, string &parametro, int i, Arbol &a) {
    getSiguiente(in, parametro, i); // busco parametro nombre de archivo y posterior verificacion a implementar
    printf("\nEl nombre del polinomio ingresado es:");
    print(parametro);
    crearTermino(in,parametro, i, a);
}

void crearTermino(string in, string parametro, int i, Arbol &a) {
    string termino;
    ListaCoeficientes listaTerminos;
    crearLista(listaTerminos);
    while(in[i]!= '\0') {
        getSiguiente(in, termino, i);
        printf("\nEl termino ingresado es:\n");
        print(termino);
        InsFront(listaTerminos, termino);
        //VALIDAR
    }
    Formula form;
    crearFormula(form);
    int contGrado = 0;
    while(listaTerminos != NULL){
        Termino t;
        CargarTermino(t, listaTerminos->info, contGrado);
        insTerminoPrincipio(form, t);
        listaTerminos = listaTerminos -> sig;
    }
    printf("\nLa Formula ingresada es: \n");
    MostrarFormula(form);
    Polinomio poli = crearPolinomio(form,parametro);
    printf("\nEl Polinomio ingresado es: \n");
    mostrarPolinomio(poli);
    printf("\n\nEscriba un comando para continuar: ");
    InsertarPolinomio(a, poli);
}

void comandoMostrar(Arbol a) {
    printf("\n Los polinomios son: \n");
    mostrarArbol(a);
}

void sumarComando(string in, Arbol &a, int i) {
     if(cantidadPalabras(in) != 4)
        printf("\nLa suma precisa 3 parametros\n");
     else {
        string resultado, sumando1, sumando2;
        strcrear(resultado);
        strcrear(sumando1);
        strcrear(sumando2);

        getSiguiente(in, resultado, i);
        getSiguiente(in, sumando1, i);
        getSiguiente(in, sumando2, i);

        Polinomio resultadoPol;
        Polinomio sumandoPol1;
        Polinomio sumandoPol2;

        if(!ExistePolinomio(a, sumando1)) {
            printf("\nEl nombre del polinomio %s no se encuentra", sumando1);
            return;
        }

        if(!ExistePolinomio(a, sumando2)) {
            printf("\nEl nombre del polinomio %s no se encuentra", sumando2);
            return;
        }

        sumandoPol1 = busquedaPolinomio(a, sumando1);
        sumandoPol2 = busquedaPolinomio(a, sumando2);
        Formula f;
        f = SumarPolinomios(GetFormula(sumandoPol1), GetFormula(sumandoPol2));
        printf("\nEl resultado es:");
        MostrarFormula(f);
        resultadoPol = crearPolinomio(f, resultado);
        InsertarPolinomio(a, resultadoPol);
     }
}

void multiplicarComando(string in, Arbol &a, int i) {
     if(cantidadPalabras(in) != 4)
        printf("\nLa multiplicacion precisa 3 parametros\n");
     else {
        string resultado, mult1, mult2;
        strcrear(resultado);
        strcrear(mult1);
        strcrear(mult2);

        getSiguiente(in, resultado, i);
        getSiguiente(in, mult1, i);
        getSiguiente(in, mult2, i);

        Polinomio resultadoPol;
        Polinomio PolMult1;
        Polinomio PolMult2;

        if(!ExistePolinomio(a, mult1)) {
            printf("El nombre del polinomio %s no se encuentra", mult1);
            return;
        }

        if(!ExistePolinomio(a, mult2)) {
            printf("El nombre del polinomio %s no se encuentra", mult2);
            return;
        }

        PolMult1 = busquedaPolinomio(a, mult1);
        PolMult2 = busquedaPolinomio(a, mult2);
        Formula f;
        f = multiplicarPolinomio(GetFormula(PolMult1), GetFormula(PolMult2));
        printf("\nEl resultado es:");
        MostrarFormula(f);
        resultadoPol = crearPolinomio(f, resultado);
        InsertarPolinomio(a, resultadoPol);
     }
}

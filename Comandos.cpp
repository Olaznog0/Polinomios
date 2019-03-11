/* Comandos.cpp */
#include "Comandos.h"

void SolicitarInput(string &s) {
    leerComandoUsuario(s);
}

void leerComandoUsuario(string &input) {
    strcrear(input);
    scan(input);
}

void comandoCrearPolinomio(string in, Arbol &a, int i) {
    if(cantidadPalabras(in) > 2){
        validarParametro(in, a, i);
    }
    else
        printf("\nCantidad de palabras ingresadas no es valida, intente de nuevo.");
}

void validarParametro(string in, Arbol &a, int i) {
    string parametro;
    strcrear(parametro);
    crearNombre(in, parametro, i, a);
}

void crearNombre(string in, string &parametro, int i, Arbol &a) {
    getSiguiente(in, parametro, i); // busco parametro nombre de archivo y posterior verificacion a implementar
    if(ExistePolinomio(a, parametro)){
        printf("\nEse nombre ya existe, intentelo nuevamente.\n");
    }
    else{
        printf("\nEl nombre del polinomio ingresado es:");
        print(parametro);
        crearTermino(in,parametro, i, a);
    }
}


void crearTermino(string in, string parametro, int i, Arbol &a) {
    string termino;
    ListaCoeficientes listaTerminos;
    crearLista(listaTerminos);
    while(in[i]!= '\0') {

        getSiguiente(in, termino, i);
        printf("\nEl termino ingresado es: \n");
        print(termino);
        InsFront(listaTerminos, termino);
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

    string strArch;
    strcrear(strArch);
    scanAuto(in, strArch);
    poli.formulaArchivo = strArch;

    InsertarPolinomio(a, poli);
}

void comandoMostrar(Arbol a) {
    printf("\n Los polinomios que ha creado son: \n");
    mostrarArbol(a);
}

void sumarComando(string in, Arbol &a, int i) {
     if(cantidadPalabras(in) != 4)
        printf("\nLa suma precisa de 3 parametros\n");
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
            printf("\nEl nombre del polinomio que ha ingresado no se encuentra: ");
            print(sumando1);
            return;
        }

        if(!ExistePolinomio(a, sumando2)) {
            printf("\nEl nombre del polinomio que ha ingresado no se encuentra: ");
            print(sumando2);
            return;
        }

        sumandoPol1 = busquedaPolinomio(a, sumando1);
        sumandoPol2 = busquedaPolinomio(a, sumando2);
        Formula f;
        f = SumarPolinomios(GetFormula(sumandoPol1), GetFormula(sumandoPol2));
        printf("\nEl resultado de la suma es:");
        MostrarFormula(f);
        resultadoPol = crearPolinomio(f, resultado);
        InsertarPolinomio(a, resultadoPol);
     }
}

void multiplicarComando(string in, Arbol &a, int i) {
     if(cantidadPalabras(in) != 4)
        printf("\nLa multiplicacion precisa de 3 parametros\n");
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
            printf("El nombre del polinomio que ha ingresado no se encuentra: ");
            print(mult1);
            return;
        }

        if(!ExistePolinomio(a, mult2)) {
            printf("El nombre del polinomio que ha ingresado no se encuentra: ");
            print(mult2);
            return;
        }

        PolMult1 = busquedaPolinomio(a, mult1);
        PolMult2 = busquedaPolinomio(a, mult2);
        Formula f;
        f = multiplicarPolinomio(GetFormula(PolMult1), GetFormula(PolMult2));
        printf("\nEl resultado de la multiplicacion es:");
        MostrarFormula(f);
        resultadoPol = crearPolinomio(f, resultado);
        InsertarPolinomio(a, resultadoPol);
     }
}
void evaluarComando (string input, Arbol a){
    int i=0;
    string comando, name, control;
    strcrear(comando);
    getSiguiente(input, comando, i);
    strcrear(name);

    getSiguiente(input, name, i);
    strcrear(control);
    getSiguiente(input, control, i);
    int numero = atoi(control);


    Polinomio poli = busquedaPolinomio(a, name);
    int resultado =evaluarPolinomio(poli, numero);
    printf("\nEl resultado de evaluar el polinomio con %d es:\t%d\n", numero ,resultado);

}

void esraizComando (string input, Arbol a){
    int i=0;
    string comando, name, control;
    strcrear(comando);
    getSiguiente(input, comando, i);
    strcrear(name);

    getSiguiente(input, name, i);
    strcrear(control);
    getSiguiente(input, control, i);
    int numero = atoi(control);

    Polinomio poli = busquedaPolinomio(a, name);
    int resultado = evaluarPolinomio(poli, numero);
    if(resultado == 0)
        printf("\nEl numero %d es raiz\n", numero);
    else
        printf("\nEl numero %d no es raiz\n", numero);
}

void guardarComando(string input, Arbol a, int i) {
    i=0;
    string comando;
    string nombreArchivo, nombrePoli;
    strcrear(comando);
    strcrear(nombrePoli);
    strcrear(nombreArchivo);

    getSiguiente(input, comando, i);
    getSiguiente(input, nombrePoli, i);
    getSiguiente(input, nombreArchivo, i);

    FILE*f;
    f=fopen(nombreArchivo, "wb");
    Polinomio p = busquedaPolinomio(a, nombrePoli);

    string aux;
    strcrear(aux);
    strcop(aux, busquedaPolinomio(a, nombrePoli).formulaArchivo);
    printf("\nAcaba de grabar el archivo: ");
    print(aux);
    bajarString(aux , f );

}

void recuperarComando(string input, Arbol a) {
    FILE * f;
    int i = 0;
    string comando;
    string nombreNuevo, nombreArch;

    strcrear(comando);
    strcrear(nombreNuevo);
    strcrear(nombreArch);

    getSiguiente(input, comando, i);
    getSiguiente(input, nombreNuevo, i);
    getSiguiente(input, nombreArch, i);

    // FALTABA ASIGNAR F AL FOPEN!!!
    f = fopen(nombreArch, "rb");
    Polinomio resu;
    string res;
    i=0;
    strcrear(res);
    // YA NO FALLA al levantar fread, no carga valores correctamente
    levantarString(f, res);

    string aux;
    strcrear(aux);
    while(res[i]!= '\0'){
        printf("Ahora entra aca, no graba terminos correctamente");
        getSiguiente(res, aux, i);
        crearTermino(aux, nombreNuevo, i, a);
        i++;
    }
}

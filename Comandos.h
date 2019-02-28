/* Comandos.h */
#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include<stdio.h>
#include "string.h"
#include <ctype.h> // tolower Case
#include "lista.h"
#include "formula.h"

    const string com1= "crear";
    const string com2= "sumar";
    const string com3= "multiplicar";
    const string com4= "evaluar";
    const string com5= "esraiz";
    const string com6= "mostrar";
    const string com7= "guardar";
    const string com8= "recuperar";
    const string com9= "salir";

void InicioPrograma(string &input, string &comando, string &parametro, string &termino); /* Inicio del programa */
void IniciarPantalla(); /* Inicio de pantalla */
void InicioAcciones();
void leerComandoUsuario(string &str); /* Cargar string input del usuario */
boolean validarComando (string s, string com1, string com2, string com3, string com4, string com5, string com6, string com7, string com8, string com9); /* Valida el ingreso del comando seleccionado por el input del usuario */
int cantidadPalabras (string str); /* Cuenta la cantidad de palabras en el input del usuario */
int ocurre (string str, char c); /* Cuenta la cantidad de ocurrencias de char, en este caso de espacios ' ' en el input del usuario */


#endif // COMANDOS_H_INCLUDED

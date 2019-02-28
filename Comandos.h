/* Comandos.h */
#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include<stdio.h>
#include "string.h"
#include <ctype.h> // tolower Case
#include "lista.h"
#include "formula.h"



void InicioPrograma(string &s); /* Inicio del programa */
void IniciarPantalla(); /* Inicio de pantalla */
void InicioAcciones();
void leerComandoUsuario(string &str); /* Cargar string input del usuario */
boolean validarComando (string s); /* Valida el ingreso del comando seleccionado por el input del usuario */
int cantidadPalabras (string str); /* Cuenta la cantidad de palabras en el input del usuario */

int seleccionComando(string s); /*dado un string de comando, devuelve un int con el numero de comando*/

#endif // COMANDOS_H_INCLUDED

/* Comandos.h */
#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include<stdio.h>
#include "string.h"
#include <ctype.h> // tolower Case
#include "lista.h"
#include "formula.h"
#include"polinomio.h"


void InicioPrograma(string &s); /* Inicio del programa */
void IniciarPantalla(); /* Inicio de pantalla */
void leerComandoUsuario(string &str); /* Cargar string input del usuario */
int cantidadPalabras (string str); /* Cuenta la cantidad de palabras en el input del usuario */
int seleccionComando(string s); /* Dado un string de comando, devuelve un int con el numero de comando */
void comandoCrearOperacion(string in,string &c); /* Operación del comando Crear */
void validarParametro(string in, string c);
void crearNombre(string in, string &parametro, int &i);
void crearTermino(string in, string parametro, int &i);

#endif // COMANDOS_H_INCLUDED

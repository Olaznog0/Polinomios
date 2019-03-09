/* Comandos.h */
#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include<stdio.h>
#include "string.h"
#include <ctype.h> // tolower Case
#include "lista.h"
#include "formula.h"
#include "ABB.h"


void SolicitarInput(string &s); /* Inicio del programa */
void IniciarPantalla(); /* Inicio de pantalla */
void leerComandoUsuario(string &str); /* Cargar string input del usuario */
int cantidadPalabras (string str); /* Cuenta la cantidad de palabras en el input del usuario */
int seleccionComando(string s); /* Dado un string de comando, devuelve un int con el numero de comando */
void validarParametro(string in, Arbol &a, int i);
void crearNombre(string in, string &parametro, int i, Arbol &a);
void crearTermino(string in, string parametro, int i, Arbol &a);

void comandoCrearPolinomio(string in, Arbol &a, int i); /* Operación del comando Crear */
void comandoMostrar(Arbol a);

void sumarComando(string in, Arbol &a);
void multiplicarComando(string in, Arbol &a);

void evaluarComando (string input, Arbol a);
void esraizComando (string input, Arbol a);

#endif // COMANDOS_H_INCLUDED

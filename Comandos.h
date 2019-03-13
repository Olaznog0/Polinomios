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
void leerComandoUsuario(string &str); /* Cargar string input del usuario */
void validarParametro(string in, Arbol &a, int i);

void crearNombre(string in, string &parametro, int i, Arbol &a);
void crearTermino(string in, string parametro, int i, Arbol &a);

void comandoCrearPolinomio(string in, Arbol &a, int i); /* Operación del comando Crear */
void comandoMostrar(Arbol a);

void sumarComando(string in, Arbol &a, int i); /* Crea un nuevo Polinomio que es la suma de otros dos polinomios existentes */
void multiplicarComando(string in, Arbol &a, int i); /* Crea un nuevo Polinomio que es la multiplicacion de otros dos polinomios existentes */
void evaluarComando (string input, Arbol a); /* Devuelve el resultado de sustituir x por un numero */
void esraizComando (string input, Arbol a); /* Devuelve True or False si x numero es Raiz del Polinomio */

void guardarComando(string nombrePoli,  Arbol a);
void recuperarComando(string input, Arbol &a);


#endif // COMANDOS_H_INCLUDED

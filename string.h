/* string.h */
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char * string;

void strcrear (string &s); /* Crea un string vacío */
void strdestruir (string &s); /* Libera la memoria usada por el string */
int strlar (string s); /* Devuelve el largo del string s */
void print (string s); /* Imprime el string s por pantalla */
void scan (string &s); /* Lee el string s desde teclado */
boolean strmen (string s1, string s2); /* Determina si s1 es alfabéticamente menor que s2 */
boolean streq (string s1, string s2); /* Determina si los strings s1 y s2 son iguales */
void strcop (string &s1, string s2); /* Copia el contenido del string s2 en s1 */
void strcon (string &s1, string s2); /* Concatena el contenido de s2 al final de s1 */
void strswp (string &s1, string &s2); /* Intercambia los contenidos de s1 y s2 */
void getSiguiente(string s,string &g,int &i); /*Devuelve la siguiente palabra del string */
int cantidadPalabras (string str); /* Cuenta la cantidad de palabras en el input del usuario */
boolean stgVacio (string str);
void bajarString(string s, FILE * f );
void levantarString(FILE * f, string &res);
void scanAuto (string input,string &s);


#endif

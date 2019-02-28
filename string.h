/* string.h */
#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include "boolean.h"

const int MAX = 80;
typedef char * string;

void strcrear (string &s); /* crea un string vacío */
void strdestruir (string &s); /* libera la memoria usada por el string */
int strlar (string s); /* devuelve el largo del string s */
void print (string s); /* imprime el string s por pantalla */
void scan (string &s); /* lee el string s desde teclado */
boolean strmen (string s1, string s2); /* determina si s1 es alfabéticamente menor que s2 */
boolean streq (string s1, string s2); /* determina si los strings s1 y s2 son iguales */
void strcop (string &s1, string s2); /* copia el contenido del string s2 en s1 */
void strcon (string &s1, string s2); /* concatena el contenido de s2 al final de s1 */
void strswp (string &s1, string &s2); /* intercambia los contenidos de s1 y s2 */
void getSiguiente(string s,string &g,int &i); /*devuelve la siguiente palabra del string */

#endif

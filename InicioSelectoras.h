/* InicioSelectoras.h */
#ifndef INICIOSELECTORAS_H_INCLUDED
#define INICIOSELECTORAS_H_INCLUDED

#include <stdio.h>
#include "Comandos.h"

void IniciarSeleccion(Arbol a, string input, string comando); /* Inicio de programa seleccion de input del usuario */
void IniciarPantalla(); /* Inicio de pantalla */
void SintaxisComandoAyuda(); /* Muestra sintaxis de los comandos */
int seleccionComando(string s); /* Dado un string de comando, devuelve un int con el numero de comando */


#endif // INICIOSELECTORAS_H_INCLUDED

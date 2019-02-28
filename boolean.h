/* boolean.h */
#ifndef _boolean
#define _boolean
#include <stdio.h>

typedef enum {FALSE, TRUE} boolean;

void CargarBoolean(boolean &es); /* devuelve la variable cargada por el usuario */
void MostrarBoolean(boolean es); /* muestra en pantalla el contenido de la variable */

#endif

#include <stdio.h>
#include "InicioSelectoras.h"

int main() {
    string comando;
    string input;

    Arbol a;
    CrearArbol(a);

    IniciarSeleccion(a, input, comando);

    return 0;
}

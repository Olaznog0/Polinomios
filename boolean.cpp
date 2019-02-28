/* boolean.cpp */
#include "boolean.h"

void CargarBoolean(boolean es){

	int valor;
	printf("ingrese 0 si es falso y 1 si es verdadero");
	scanf("%d",&valor);
	if (valor == 0)
		es = FALSE;
	else
		es = TRUE;
}

void MostrarBoolean(boolean es){
	if(es)
		printf("Verdadero");
	else
		printf("Falso");
}

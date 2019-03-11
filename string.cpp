/* string.cpp */
#include "string.h"

void strcrear (string &s) {
	s = new char[1];
	s[0] = '\0';
}

void strdestruir (string &s) {
	delete [] s;
	s = NULL;
}

int strlar (string s) {
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

void print (string s) {
	int i = 0;
	while (s[i]!= '\0') {
		printf ("%c", s[i]);
		i++;
	}
}

void scan (string &s) {
	string aux = new char[MAX];
	int i=0;
	char c;
	scanf ("%c", &c);
	while (c!= '\n' && i < MAX-1) {
		aux[i] = c;
		i++;
		scanf ("%c", &c);
	}
	aux[i] = '\0';
	strcop (s,aux);
	strdestruir (aux);
}

boolean strmen (string s1, string s2) {
	int i = 0;
	boolean encontre = FALSE;
	boolean menor = FALSE;
	while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0')) {
		if (s1[i] != s2[i])
			encontre = TRUE;
		if (s1[i] < s2[i])
			menor = TRUE;
		i++;
	}
		if ((!encontre) && (s2[i]!='\0'))
			menor = TRUE;
	return menor;
}

boolean streq (string s1, string s2) {
	int i = 0;
	boolean iguales = TRUE;
	while (iguales && (s1[i] != '\0') && (s2[i] != '\0')) {
		if (s1[i] != s2[i])
			iguales = FALSE;
		i++;
	}
	if ((s1[i] != '\0') || (s2[i] != '\0'))
		iguales = FALSE;
	return iguales;
}

void strcop (string &s1,string s2) {
	int i = 0;
	int largo = strlar(s2) + 1;
	delete [] s1;
	s1 = new char[largo];
	while (s2[i] != '\0') {
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

void strcon (string &s1,string s2) {
	string aux;
	strcrear (aux);
	strcop (aux, s1);
	int largo = strlar (s1) + strlar (s2) + 1;
	if (largo > MAX)
		largo = MAX;
	delete [] s1;
	s1 = new char[largo];
	int i = 0;
	while (aux[i] != '\0') {
		s1[i] = aux[i];
		i++;
	}
	int j = 0;
	while (s2[j] != '\0' && i < MAX-1)  {
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	strdestruir (aux);
}

void strswp (string &s1, string &s2) {
	string aux;
	aux = s1;
	s1 = s2;
	s2 = aux;
}

void getSiguiente(string s, string &g, int &i) {
    while(s[i] == ' ' && s[i]!='\0')
         i++;
    int j = 0;
    g = new char[MAX];
    while (s[i] != ' ' && s[i] !='\0') {
        g[j]=s[i];
        i++;
        j++;
    }
     g[j]='\0';
}

int cantidadPalabras (string str) {
    int i = 0;
    int cantPalabras = 0;
    boolean EstoyEnPalabra = FALSE;

    while (str[i] != '\0') {
        if(str[i] == ' ') {
            if(EstoyEnPalabra) {
                cantPalabras++;
                EstoyEnPalabra = FALSE;
            }
        }
        else
            EstoyEnPalabra = TRUE;
        i++;
    }
    cantPalabras++;

    return cantPalabras;
}

int stgVacio (string str) {
    int i = 0;
    int cantPalabras = 0;

    while (str[i] != '\0') {
        while(str[i] != ' ' && str[i] != '\n') {
                cantPalabras++;
                i++;
        }
        i++;
    }
    return cantPalabras;
}

void bajarString(string s, FILE * f ) {
    int i = 0;
     while(s[i] != '\0') {
        fwrite (&s[i], sizeof(char), 1, f);
        i++;
    }

    fwrite (&s[i], sizeof(char), 1, f);
    fclose (f);
}

void levantarString(FILE * f , string &res){
    int i=0;
    string aux;
    aux = new char[MAX];
    fread (&aux[i], sizeof(char), 1, f);
    while(!(feof(f)) && (aux[i]!= '\0')){
        i++;
        fread (&aux[i], sizeof(char), 1, f);
    }
    strcop(res, aux);
    delete [] aux;
    fclose(f);
    printf("\nAcaba de recuperar el archivo!\n");
}

void scanAuto (string input,string &s) {
	int i=0;
	int j=0;
	string aux1,aux2;
	strcrear(aux1);
	strcrear(aux2);
	getSiguiente(input,aux1,i);
	getSiguiente(input, aux2,i);
	while(input[i]!='\0') {
        s[j]=input[i];
        i++;
        j++;
	}
	s[j]='\0';
}


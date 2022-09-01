/*
 ============================================================================
 Name        : Ejercicio3_5.c
 Author      : Brian Alan Suarez
 Version     :
 Copyright   : Your copyright notice
 Description :

Realizar un programa en donde se puedan utilizar los prototipos de la
función Restar en sus 4 combinaciones.
- int Restar1(int, int);
- int Restar2(void);
- void Restar3(int, int);
- void Restar4(void);
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Restar1(int, int);
int Restar2();
void Restar3(int, int);
void Restar4();

int main() {
	setbuf(stdout, NULL);

	printf("Funcion restar1 : la resta es %d", Restar1(10, 5));

	printf("\nFuncion restar2 : la resta es %d", Restar2());

	Restar3(50, 20);

	Restar4();

	return 0;
}


int Restar1(int primerNumero, int segundoNumero)
{
	int restar;

	restar = primerNumero - segundoNumero;

	return restar;
}

int Restar2()
{
	int restar;
	int primerNumero = 10;
	int segundoNumero = 4;

	restar = primerNumero - segundoNumero;

	return restar;
}

void Restar3(int primerNumero, int segundoNumero)
{
	printf("\nFuncion restar3 : la resta es %d", (primerNumero - segundoNumero));
}

void Restar4()
{

	int primerNumero = 40;
	int segundoNumero = 10;

	printf("\nFuncion restar4 : la resta es %d", (primerNumero - segundoNumero));
}

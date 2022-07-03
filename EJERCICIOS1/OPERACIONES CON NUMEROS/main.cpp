#include <iostream>
#include "Operacion.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Programa que lee dos numeros de tipo float y muestra la suma, resta, multiplicacion y division de esos numeros

int main(int argc, char** argv) {
	Operacion *res=new Operacion();
	res->imprimir();
	return 0;
}

#include <iostream>
#include "Mensaje.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Indicaciones: 
Ejercicio 1: Escribir un programa que muestre por pantalla la cadena ¡Hola Mundo!
Ejercicio 2: Escribir un programa que almacene la cadena ¡Hola Mundo! en una variable y luego muestre por pantalla el contenido de la variable.*/

int main(int argc, char** argv) {
	Mensaje *mensaje = new Mensaje;
	string saludo = "Hola mundo";
	/*string saludo;
	cout<<"Escribe tu saludo: ";
	cin>>saludo;*/
	mensaje->mensaje(saludo);
	return 0;
}

#include <iostream>
#include "Bisiesto.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Bisiesto *b = new Bisiesto();
	double dato;
	cout<<"Select a year: "<<endl;
	cin>>dato;
	b->year(dato);
	return 0;
}

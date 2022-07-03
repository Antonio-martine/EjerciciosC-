#include <iostream>
#include "Iva.h"

/* Obtener el IVA total y el total sin IVA de una cantidad de productos*/

int main(int argc, char** argv) {
	Iva *iva = new Iva();
	//string iva;
	int cantidad;
	double precio;
	cout<<"Cantidad de productos a comprar"<<endl;
	cin>>cantidad;
	iva->obtenerIva(cantidad);
	
	return 0;
}

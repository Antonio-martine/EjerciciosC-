#include "Iva.h"

Iva::Iva()
{
}

//Operacion con iva
void Iva::obtenerIva(double cantidad){
	string mensaje;
	double precio, res;
	if(cantidad<=0){
		mensaje="this is a error";
		cout<<mensaje;
	}
	if(cantidad>0){
		int i=0,ciclo=1;
		while(i<cantidad){
			mensaje="Precio del producto numero ";
			cout<<mensaje<<ciclo<<endl;
			cin>>precio;
			res=res+precio;
			ciclo++;
			i++;
		}
		cout<<"El total de la compra con IVA es: "<<res*1.16<<endl;
		cout<<"El total de la compra sin IVA es: "<<res<<endl;
	}
}

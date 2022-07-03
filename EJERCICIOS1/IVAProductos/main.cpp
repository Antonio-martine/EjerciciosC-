#include <iostream>
#include "ProductosIVA.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ProductosIVA *calcular = new ProductosIVA();
	int respuesta;
	int cantidad;
	cout<<"-------------WELCOME--------------------------"<<endl;;
	cout<<"Realizar:\n1.Compra con IVA\n2.Compra sin IVA"<<endl;
	cin>>respuesta;
	if(respuesta==1){
		cout<<"Productos a comprar?: ";
		cin>>cantidad;	
		calcular->Producto(cantidad);
	}else if(respuesta==2){
		cout<<"Productos a comprar?: ";
		cin>>cantidad;		
		calcular->Sin_Iva(cantidad);
	}else{
		cout<<"Error, verificar respuesta!"<<endl;
		cout<<"------------------BYE FRIEND--------------------"<<endl;
	}
	
	
	
	
	//Producto(cantidad);
	return 0;
	
}

/*void Producto (int cantidad){
	int i=1;
	double precio,total;
	string producto;
	while(i<=cantidad){
		cout<<"Producto a comprar: "<<endl;
		cin>>producto;
		cout<<"Precio de "<<producto<<endl;
		cin>>precio;
		total=total+(precio*1.16);
		cout<<"Producto:"<<producto<<" ---------- Precio:"<<precio*1.16<<endl;
		i++;
	}
	cout<<"Tu total con iva es: $"<<total<<endl;
}*/


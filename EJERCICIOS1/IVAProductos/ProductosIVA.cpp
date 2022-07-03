#include "ProductosIVA.h"

void ProductosIVA::Producto(int cantidad){
	int i=1;
	double precio,total;
	string producto;
	while(i<=cantidad){
		cout<<"Producto a comprar: "<<endl;
		cin>>producto;
		cout<<"Precio de "<<producto<<endl;
		cin>>precio;
		total=total+(precio*1.16);
		cout<<"Producto:"<<producto<<" ---------- Precio: $"<<precio*1.16<<endl;
		i++;
	}
	cout<<"Tu total con iva es: $"<<total<<endl;
}

void ProductosIVA::Sin_Iva(int cantidad){
	int i=1;
	double precio,total;
	string producto;
	while(i<=cantidad){
		cout<<"Producto a comprar: "<<endl;
		cin>>producto;
		cout<<"Precio de "<<producto<<endl;
		cin>>precio;
		total=total+precio;
		cout<<"Producto: "<<producto<<"---------- Precio sin IVA: $"<<precio<<endl;
		i++;
	}
	cout<<"Tu total sin IVA es: $"<<total<<endl;
}

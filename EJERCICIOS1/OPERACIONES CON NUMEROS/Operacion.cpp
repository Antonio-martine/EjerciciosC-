#include "Operacion.h"

Operacion::Operacion()
{
}

void Operacion::suma(float num1, float num2){
	cout<<"Resultado de la suma = "<<num1+num2<<endl;
}
void Operacion::resta(float num1, float num2){
	cout<<"Resultado de la resta = "<<num1-num2<<endl;
}
void Operacion::multiplicacion(float num1, float num2){
	cout<<"Resutlado de la multiplicacion = "<<num1*num2<<endl;
}
void Operacion::division(float num1, float num2){
	cout<<"Resultado de la division = "<<num1/num2<<endl;
}

void Operacion::imprimir(){
	bool bandera=true;
	while(bandera){
	
		string resp;
		float num1,num2;
		cout<<"Coloca tus dos datos: "<<endl;
		cout<<"Primer dato: ";
		cin>>num1;
		cout<<"Segundo dato: ";
		cin>>num2;
		
		suma(num1,num2);
		resta(num1,num2);
		multiplicacion(num1,num2);
		division(num1,num2);	
		
		cout<<"Quieres continuar?\n1.Si\n2.No"<<endl;
		cin>>resp;
		if(resp=="si") bandera;
		else bandera=false;
	}
	
}

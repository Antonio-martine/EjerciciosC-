#include "Bisiesto.h"

Bisiesto::Bisiesto(){
	
}

void Bisiesto::noSeculares(double dato){
	int division=dato/4;
	double menos=dato/4;
	double resultado=menos-division;
	
	if(menos>0){
		if(resultado>0)
			cout<<"This year is not Bisiesto no Secular"<<endl;
			
		if(resultado==0)
			cout<<"This year is Bisiesto no Secular "<<endl;
	}
	else 
		cout<<"Incorrect dato"<<endl;

		
}

void Bisiesto::seculares(double dato){
	int division=dato/400;
	double menos=dato/400;
	double resultado=menos-division;
	if (menos>0){
		if(resultado>0){
			cout<<"This year is not Bisiesto Secular"<<endl; 
		}
		
		if(resultado==0){
			cout<<"This year is Bisiesto Secular"<<endl;
		}
	}else
	cout<<"Incorrect dato"<<endl;
}

void Bisiesto::year(double dato){

	cout<<"You chose: "<<dato<<endl;
	bool bandera=true;
	while(bandera){
		int carryOn;
		int check;
		cout<<"Action to do:\n1. check if this year is Bisiesto no Secular\n2. check if this year is Bisiesto Secular\n3. Two opcions\n4.Exit"<<endl;
		cin>>check;
		
		switch(check){
			case 1:
				noSeculares(dato);
				cout<<"Do you want to continue? \n1.YES\n2.NO"<<endl;
				
				cin>>carryOn;
				if(carryOn==1){
					bandera;
					break;
				}
				if(carryOn==2){
					bandera=false;
					break;
				} 
				else{
					cout<<"Incorrect Answer"<<endl;
					bandera=false;
					break;
				}
			case 2:
				seculares(dato);
				cout<<"Do you want to continue? \n1.YES\n2.NO"<<endl;
				
				cin>>carryOn;
				if(carryOn==1){
					bandera;
					break;
				}
				if(carryOn==2){
					bandera=false;
					break;
				} 
				else{
					cout<<"Incorrect Answer"<<endl;
					bandera=false;
					break;
				}
			case 3:
				noSeculares(dato);
				seculares(dato);
				
				cout<<"Do you want to continue? \n1.YES\n2.NO"<<endl;
				cin>>carryOn;
				if(carryOn==1){
					bandera;
					break;
				}
				if(carryOn==2){
					bandera=false;
					break;
				} 
				else{
					cout<<"Incorrect Answer"<<endl;
					bandera=false;
					break;
				}
			default:
				cout<<"thaks for your participation!"<<endl;
				bandera=false;
		}
	}
}

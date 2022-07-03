#include <iostream>
using namespace std;

/*Ejercicio 1: Calcular la longitud y area de la circunferencia y el volumen de la esfera
Programa que lee el valor del radio y calcula la longirud de la circunferencia, el area del circulo y el volimen de la esfera correspondiete a ese radio.

1. Longitud de la circunferencia es = 2*PI*Radio
2. Area de la circunferencia = PI*Radio^2
3. Volumen de la esfera = (4/3)*PI*Radio^2*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void circunferencia(double);

int main(int argc, char** argv) {
	double radio;
	cout<<"--------------------------------------------------------------------------"<<endl;
	cout<<"Bienvenido usuario"<<endl;
	cout<<"Dame el valor del radio"<<endl;
	cin>>radio;
	cout<<"---------------------------------------------------------------------------"<<endl;
	circunferencia(radio);
	return 0;
}

void circunferencia(double radio){
	double pi=3.1416;
	double fraccion=1.3333;
	if(radio>0){
		//Logitud
		double longitud=2*pi*radio;
		cout<<"La longitud de la circunferencia es igual a = "<<longitud<<endl;
		//Area de circunferencia
		double area= pi*(radio*radio);
		cout<<"El area de la circunferencia es igual a = "<<area<<endl;
		// Volumen
		double volumen=(fraccion*pi)*(radio*radio); //4.1888*
		cout<<"El volumen de la circunferencia es igual a = "<<volumen<<endl;
	}else
	cout<<"Dato incorrecto, vulve a correr el programa";
}

/*Programa del ejemplo
Longitud de la circunferencia = 2*PI*Radio
Area de la circunferencia = PI*Radio^2
Volumen de la esfera = (4/3)*PI*Radio^3

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main(void)
{
    const float PI = 3.1416;
    float radio;
    cout << "Introduce el valor del radio : ";
    cin >> radio;
    cout << "\nLongitud de la circunferencia: " << fixed << setprecision(2) << 2*PI*radio;
    cout << "\nArea del circulo: " << PI*pow(radio,2);*/



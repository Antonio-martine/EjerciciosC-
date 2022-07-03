#include <iostream>
using namespace std;

/*Programa C++ que lee un numero entero positivo N y calcula e imprime su factorial.
	- El factorial de un numero se representa mediante el simbolo ! y se define de la siguiente forma:
	El factorial de 0 es 1 0!=1
	El factorial de N es N!= N*N-1 * N*N-2 *...*3*2*1
	Por ejemplo. el factorial de 5 es:
	5!= 5*4*3*2*1=120*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string name;
	int number,i;
	long double factorial; //se declara long double para poder representar numeros grandes
	
	cout<<"What's your number? "; 
	cin>>number; /*3*/
	cout<<"What's your name? ";
	cin>>name; /*Antonio*/
	
	factorial=1; 
	for(i=1;i<=number;i++) /*(i=1;1<=3;1++)(i=2,2<=3;2++)(i=3;3<=3;3++)--> ok;*/
		factorial=factorial*i; /*(1=1*1) (1=1*2) (2=2*3) factorial=6*/
	
	cout<<"Thanks "<<name<<", the factororial of "<<number<<" is "<<factorial<<endl;
	/*tanks Antonio, the factorial of 3 is 6*/
	//system("pause");
	return 0;
}


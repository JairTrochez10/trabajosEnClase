//Anner Jair Reyes Trochez
//202510050157
//Ejercicio 2: Escribe la siguiente expresión como expresión en C++: (a+b)/(c+d)

#include<iostream>

using namespace std;

int main(){
	float a,b,c,d,resultado=0;
	
	cout<<"Digite el valor de a: ";
	cin>>a;
	cout<<"Digite el valor de b: ";
	cin>>b;
	cout<<"Digite el valor de c: ";
	cin>>b;
	cout<<"Digite el valor de d: ";
	cin>>b;
	
	resultado=(a+b)/(c+d);
	
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	return 0;
}
//Anner Jair Reyes Trochez
//202510050157
//Convertir Grados a Fahrenheit

#include<iostream>
using namespace std;

int main(){
	float cel,fare;
	
	cout<<"Ingrese los grados Celsius: ";
	cin>>cel;
	
	fare=(cel*9/5)+32;
	
	cout<<"\nLos Grados Fahrenheit son: "<<fare<<" °F"<<endl;
	
	return 0;
}
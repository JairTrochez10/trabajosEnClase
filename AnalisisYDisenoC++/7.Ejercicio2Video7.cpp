//Anner Jair Reyes Trochez
//202510050157
//Ejercicio 6: Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos.

#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4,promedio=0;
	
	cout<<"Ingrese la nota final del primer alumno: ";
	cin>>n1;
	cout<<"Ingrese la nota final del segundo alumno: ";
	cin>>n2;
	cout<<"Ingrese la nota final del tercer alumno: ";
	cin>>n3;
	cout<<"Ingrese la nota final del cuarto alumno: ";
	cin>>n4;
	
	promedio=(n1+n2+n3+n4)/4;
	
	cout<<"\nLa Media de los cuatro alumnos es: "<<promedio<<"%"<<endl;
	
	return 0;
}
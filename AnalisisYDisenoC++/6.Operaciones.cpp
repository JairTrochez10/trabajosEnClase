//Anner Jair Reyes Trochez
//202510050157
//operaciones

#include<iostream>
using namespace std;
int main(){
	int n1,n2,suma;
	float decimal1,decimal2,divi,multi;
	cout<<"Ingrese dos numeros enteros: "<<endl;
	cin>>n1>>n2;
	cout<<"Ingrese dos numeros decimales: "<<endl;
	cin>>decimal1>>decimal2;
	
	suma=n1+n2;
	multi=decimal1*decimal2;
	divi=n1/decimal2;
	
	cout<<"\nLa suma de los 2 numeros enteros es: "<<suma<<endl;
	cout<<"\nLa Multiplicacion de los numeros decimales es: "<<multi<<endl;
	cout<<"\nLa division de el primer numero "<<n1<<" y el segundo decimal "<<decimal2<<" es: "<<divi<<endl;
	return 0;
}
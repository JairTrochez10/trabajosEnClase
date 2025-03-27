//Anner Jair Reyes Trochez
//202510050157
//area y perimetro

#include<iostream>
using namespace std;
int main(){
	float base,al,a,peri;
	cout<<"Ingrese la base del rectangulo: ";
	cin>>base;
	cout<<"Ingrese la altura del rectangulo: ";
	cin>>al;
	a= base*al;
	peri=2*(base+al);
	cout<<"\nEl area del Rectangulo es: "<<a<<" cm2"<<endl;
	cout<<"\nEl perimetro es: "<<peri<<" cm"<<endl;
	return 0;
}

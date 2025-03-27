//Anner Jair Reyes Trochez
//202510050157
/*Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio 
de un producto y muestre en la salida estándar el precio del producto al aplicarle el IVA.*/
#include<iostream>
 
using namespace std;
 
int main(){
    float precio,iva;//Iva=1.21
    
    cout<<"Ingrese el precio del Producto: ";
    cin>>precio;
    
    iva=precio*1.21;
    
    cout<<"\nPrecio del producto al aplicarle el IVA: L. "<<iva<<endl;
    
	return 0;
 }
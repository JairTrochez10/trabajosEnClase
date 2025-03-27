//Anner Jair Reyes Trochez
//202510050157
//Promedio de tres numeros

#include<iostream>//Declaramos libreria que vamos a usar en este caso esta por que usaremos cout y cin
using namespace std;//nforma al compilador si algún identificador no esta entonces debe buscarlo en el espacio de nombres std

int main(){//es el cuerpo del codigo
	int numero1,numero2,numero3;//las variables que declaramos y int de entero que se guardara numeros
	double promedio;//otra variable con tipo double para guardar numeros decimales
	cout<<"Ingrese Tres Numeros enteros: "<<endl;//aqui pedimos al usuario que ingrese 3 numeros 
	cin>>numero1>>numero2>>numero3;//aqui nosotros capturamos los 3 numeros que ingreso el usuario
	promedio=(numero1+numero2+numero3)/3;//realizamos la operacion de promedio que es sumar los 3 numeros y divir
	cout<<"El resultado es: "<<promedio<<endl;//con esta linea mostramos el resultado del promedio.
	return 0;//esta es para finalizar el programa.
}//cierre del cuerpo
/*

e desea calcular el valor de una factura por un producto determinado que puede ser adquirido en una o varias unidades (el precio es de 250bs) en la factura se debe considerar el iva que es del 16% si la factura supera los 1500 se debe aplicar un descuento del el 5%,el descuento se aplica a la base imponible(subtotal sin iva)

*/ 

#include<iostream>

using namespace std;

int main (){
	
	float total=0;
	float descuento= 0;
	float precio= 250;
	float subtotal=0;
	float iva= 0;
	int cantidadproduc= 0;
	
	
	cout<< "bienvenidos al programa"<<endl;
	cout<< "ingresar la cantidad del producto deseado"<<endl;
	cin>>cantidadproduc;
	subtotal=cantidadproduc*precio;
	
	 
	if (subtotal>1500){
		descuento= subtotal*0.16;
		subtotal=subtotal-descuento;				
	}
	
	iva=subtotal*0.16;
	total=iva+subtotal;	
	cout<<"el descuento seria:"<<descuento<<endl;
	cout<<"el subtotal seria:"<<subtotal<<endl;
	cout<< "el iva seria:"<<iva<<endl;
	cout<<"el total seria:"<<total<<endl;
	
return 0; 										 								
}

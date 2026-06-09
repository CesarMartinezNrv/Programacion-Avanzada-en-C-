/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E004 | double y formato decimal
Lee el precio unitario de un producto y la cantidad comprada.
Imprime el total con 2 decimales.

Entrada:
  4.50
  3
Salida esperada:
  Total a pagar: $13.50
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main (){

double precio{0};
int cantidad{0};

std::cout<<"Ingrese el precio del producto: ";
std::cin>>precio;
std::cout<<std::endl;

std::cout<<"Ingrese la cantidad comprada del producto: ";
std::cin>>cantidad;
std::cout<<std::endl;

std::cout<<"Total a pagar: "<<precio * cantidad;

return 0;
}


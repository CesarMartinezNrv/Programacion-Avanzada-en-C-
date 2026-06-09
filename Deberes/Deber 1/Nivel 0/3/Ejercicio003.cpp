/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E003 | cin y cout
Lee dos números enteros desde el teclado e imprime su suma.

Entrada:
  12
  8
Salida esperada:
  La suma es: 20
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){
int a{0}, b{0};

std::cout<<"Ingresa el valor de a: ";
std::cin>>a;
std::cout<<std::endl;

std::cout<<"Ingresa el valor de b: ";
std::cin>>b;
std::cout<<std::endl;

std::cout<<"La suma es: "<<a+b;

return 0;
}



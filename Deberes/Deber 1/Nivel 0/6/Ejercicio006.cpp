/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E006 | string y saludo
Lee el nombre del usuario (una sola palabra) y salúdalo.

Entrada:
  Ana
Salida esperada:
  Hola, Ana! Bienvenido/a al sistema.
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 
#include <string>

int main(){

std::string nombre;

std::cout<<"Ingrese su nombre: ";
std::cin>>nombre;
std::cout<<std::endl;

std::cout<<"Hola "<<nombre<<". Bienvenido!";

return 0;
}
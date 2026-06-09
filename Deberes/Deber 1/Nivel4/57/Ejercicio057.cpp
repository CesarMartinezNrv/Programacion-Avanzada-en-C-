/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E057 | Modificar a través de puntero
TRAZA A MANO:
  int x = 10;
  int* p = &x;
  *p = 99;
  → ¿Cuánto vale x ahora? ¿Por qué?

Implementa: usa solo el puntero (no x directamente)
para cambiar el valor de x a 99.

Entrada: (ninguna)
Salida esperada:
  Antes: 10
  Despues: 99
----------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main(){

int x = 10;
std::cout<<"antes: "<<x<<std::endl;

int* p = &x;

*p = 99;

std::cout<<"despues: "<<x;
}
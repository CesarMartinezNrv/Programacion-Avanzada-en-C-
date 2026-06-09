/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E064 | Puntero a puntero
TRAZA A MANO:
  int x = 100;
  int* p = &x;
  int** pp = &p;

  Dibuja 3 casillas: x, p y pp con sus direcciones y valores.
  ¿Cuántas "flechas" necesitas seguir para llegar al valor 100
  partiendo de pp?

Luego implementa e imprime x usando x, *p y **pp.

Entrada: (ninguna)
Salida esperada:
  x   = 100
  *p  = 100
  **pp = 100
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
int main(){
int x = 100;
int* p = &x;
int** pp = &p;

std::cout<<"x = "<<x<<std::endl;
std::cout<<"*p = "<<*p<<std::endl;
std::cout<<"*pp = "<<**pp<<std::endl;

return 0;
}
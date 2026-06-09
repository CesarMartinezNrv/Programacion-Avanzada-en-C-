/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E056 | TRAZA — Puntero básico
PRIMERO haz la traza a mano en papel:

  int x = 42;
  int* p = &x;

  Dibuja el diagrama de memoria con las casillas de x y p,
  sus direcciones inventadas (ej: 0x100, 0x108) y sus valores.

  Luego responde qué imprimiría cada línea:
    cout << x;    → ___
    cout << &x;   → ___ (escribe "dirección de x")
    cout << p;    → ___
    cout << *p;   → ___

LUEGO implementa el programa en C++.

Entrada: (ninguna)
Salida esperada:
  Valor de x: 42
  Direccion de x: [direccion de memoria]
  Valor de p: [misma direccion]
  Valor de *p: 42
----------------------------------------------------------------------------------------------------
*/
#include <iostream>

int main(){

int x = 42;

int* p = &x;

std::cout<<x<<std::endl;
std::cout<<&x<<std::endl;
std::cout<<p<<std::endl;
std::cout<<*p;

return 0;
}


/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E075 | Stack vs Heap — comparación directa
Declara la misma variable de dos formas:
  int a = 42;            // stack
  int* b = new int(42);  // heap

Imprime ambas. Modifica solo b a 99. Imprime de nuevo.
Libera b.

Entrada: (ninguna)
Salida esperada:
  Stack: 42    Heap: 42
  Stack: 42    Heap: 99
  Heap liberado.
----------------------------------------------------------------------------------------------------
*/


#include <iostream>


int main(){

int a = 42;
int* b = new int(42);

std::cout<<"Stack "<<a<<"\tHeap: "<<*b<<std::endl;
std::cout<<"Stack "<<a<<"\tHeap: ";
*b = 99;
std::cout<<*b<<std::endl;

delete b;
b = nullptr;

std::cout<<"Heap liberado";

return 0;
}
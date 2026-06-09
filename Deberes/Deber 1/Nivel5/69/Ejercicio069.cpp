/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E069 | new y delete básico
TRAZA A MANO:
  Dibuja el estado del stack y del heap en cada línea:
  int* p = new int(99);
  cout << *p;
  delete p;
  p = nullptr;

Luego implementa el programa. Imprime el valor y la dirección.

Entrada: (ninguna)
Salida esperada:
  Valor: 99
  Direccion: [direccion de memoria]
  Memoria liberada correctamente.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int* p = new int(99);
std::cout<<"Valor: "<<*p<<std::endl;
std::cout<<"Direccion: "<<p<<std::endl;

delete p;
p = nullptr;
std::cout<<"Memoria liberada correctamente.";


return 0;
}

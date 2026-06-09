/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E070 | Arreglo dinámico
Lee N en tiempo de ejecución.
Reserva un arreglo dinámico con new.
Llénalo, imprímelo y libéralo con delete[].

Entrada:
  4
  10 20 30 40
Salida esperada:
  Arreglo: 10 20 30 40
  Memoria liberada
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main (){

int n;
std::cin>>n;

int* arr = new int[n];

for(int i{0}; i < n; i++){
    std::cin>>arr[i];
}


std::cout<<"Arreglo: ";
for (int i{0}; i < n; i++){
    std::cout<<arr[i]<<" ";
}

std::cout<<std::endl;
delete arr;
arr = nullptr;
std::cout<<"Memoria Liberada";


return 0;
}

/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E071 | Extender arreglo dinámico
Tienes un arreglo dinámico de N elementos.
El usuario quiere agregar uno más.
Crea un nuevo arreglo de tamaño N+1, copia los datos,
agrega el nuevo elemento, libera el viejo.

Entrada:
  3
  5 10 15
  20
Salida esperada:
  Original: 5 10 15
  Extendido: 5 10 15 20
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int n;
std::cin>>n;

int* arr = new int[n];

for(int i{0}; i < n; i++){
    std::cin>>arr[i];
}

int* arr2 = new int[n+1];
for(int i{0}; i < n; i++){
    arr2[i] = arr[i];
}
std::cout<<"Ingrese el nuevo valor ";
std::cin>>arr2[n];

std::cout<<"Original: ";
for (int i{0}; i < n; i++){
    std::cout<<arr[i]<<" ";
}

std::cout<<std::endl;
std::cout<<"Extendido: ";
for (int i{0}; i < n+1; i++){
    std::cout<<arr2[i]<<" ";
}
std::cout<<std::endl;
delete arr;
arr = nullptr;

std::cout<<"Primer arreglo eliminado. Memoria liberada";
}
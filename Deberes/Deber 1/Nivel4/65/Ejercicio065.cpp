/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E065 | Llenar arreglo con función
Escribe void llenarCuadrados(int* arr, int n) que llene
el arreglo con los cuadrados de sus índices: arr[i] = i*i.

Entrada: 6
Salida esperada:
  0 1 4 9 16 25
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

void llenarCuadrados(int* arr, int n){
    for(int i{0}; i < n; i++){
        arr[i] = i * i;
    }
}

int main(){

int n{0};
std::cin>>n;

int arr[n]{};

llenarCuadrados(arr, n);

for(int i{0}; i < n; i++){
    std::cout<<arr[i]<<" ";
}

return 0;

}
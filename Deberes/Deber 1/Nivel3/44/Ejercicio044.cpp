/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E044 | Ordenamiento burbuja
TRAZA A MANO PRIMERO:
Para el arreglo {64, 34, 25, 12, 22}, dibuja cada pasada
del bubble sort en papel mostrando cómo cambia el arreglo.

Luego implementa el algoritmo en C++.

Entrada:
  5
  64 34 25 12 22
Salida esperada:
  Arreglo original: 64 34 25 12 22
  Arreglo ordenado: 12 22 25 34 64
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

#include <iostream>

void bubbleSort(int arreglo[], int n);

void bubbleSort(int arreglo[], int n){
    for(int i{0}; i < n - 1; i++){
        for(int j{0}; j < n - i - 1; j++){
            if(arreglo[j] > arreglo[j + 1]){
                int auxiliar{arreglo[j]};
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = auxiliar;
            }
        }
    }
}

int main(){


int tamano;

std::cin>>tamano;

int arr[tamano] = {};

for(int i{0}; i < tamano; i++){
    int num; 
    std::cin>>num;
    arr[i] = num;
}

bubbleSort(arr, tamano);

for(int i{0}; i < tamano; i++){
    std::cout<<arr[i]<<" ";
}

return 0;
}

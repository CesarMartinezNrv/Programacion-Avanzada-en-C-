/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E042 | Búsqueda lineal
Escribe int buscar(int arr[], int n, int valor) que retorne
el índice del valor, o -1 si no existe.

Entrada:
  6
  3 7 1 9 4 6
  9
Salida esperada:
  Valor 9 encontrado en indice 3.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int buscar (int arr[], int n, int valor){
    for(int i{0}; i < n-1; i++){
        if(arr[i] == valor){
            return i;
        }
    }
    return -1;
}

int main(){
int n, valor;
std::cin>>n;


int arreglo[n] = {};

for(int i{0}; i < n; i++){
    int num; 
    std::cin>>num;
    arreglo[i] = num;
}
std::cin>>valor;

std::cout<<"Valor "<<valor<<" encontrado en indice "<<buscar(arreglo, n, valor);
}
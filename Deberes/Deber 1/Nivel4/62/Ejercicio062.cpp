/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E062 | Función que retorna puntero
Escribe int* encontrarMaximo(int arr[], int n) que retorne
un puntero al elemento mayor.
Usa ese puntero para duplicar el máximo.

Entrada:
  5
  3 8 1 6 4
Salida esperada:
  Maximo encontrado: 8
  Arreglo tras duplicar el maximo: 3 16 1 6 4
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int* encontrarMaximo(int arr[], int n){
    int* numMax{&arr[0]};
    for (int i{0}; i < n; i++){
        if(*numMax < arr[i]){
            numMax = &arr[i];
        }
    }

    return numMax;
}

int main(){

int n;
std::cin>>n;

int arreglo[n]{};

for (int i{0}; i < n; i++){
    std::cin>>arreglo[i];
}

int* max = encontrarMaximo(arreglo, n);

std::cout<<"Maximo encontrado: "<<*max<<std::endl;

*max = *max * 2;

std::cout<<"Arreglo tras duplicar el maximo ";
for(int i{0}; i < n; i++){
    std::cout<<arreglo[i]<<" ";
}


return 0;
}
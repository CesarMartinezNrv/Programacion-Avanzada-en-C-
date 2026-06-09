/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E041 | Arreglo en orden inverso
Lee N enteros en un arreglo e imprímelos al revés.

Entrada:
  5
  10 20 30 40 50
Salida esperada:
  50 40 30 20 10
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main (){
int n;
std::cin>>n;

int arreglo[n] = {};

for(int i{0}; i < n; i++){
    int num; 
    std::cin>>num;
    arreglo[i] = num;
}

for(int i{n - 1}; i >= 0; i--){
    std::cout<<arreglo[i]<<" ";
}

return 0;

}
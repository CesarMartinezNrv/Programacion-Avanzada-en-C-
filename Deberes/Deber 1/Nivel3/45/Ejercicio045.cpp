/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E045 | Arreglo de strings numerado
Lee N nombres e imprímelos numerados.

Entrada:
  3
  Ana Luis Carla
Salida esperada:
  1. Ana
  2. Luis
  3. Carla 
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

int main(){
int tamano;

std::cin>>tamano;

std::string arr[tamano] = {};

for(int i{0}; i < tamano; i++){
    std::string num; 
    std::cin>>num;
    arr[i] = num;
}

int num{1};
for (int i{0}; i < tamano; i++){
    std::cout<<num<<". "<<arr[i]<<std::endl;
    num ++;
}

return 0;
}
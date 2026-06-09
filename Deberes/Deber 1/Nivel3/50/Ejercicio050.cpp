/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E050 | String — longitud y mayúsculas
Lee una oración con getline.
Imprime su longitud y la convierte a mayúsculas.

Entrada:
  hola mundo desde cpp
Salida esperada:
  Longitud: 20
  En mayusculas: HOLA MUNDO DESDE CPP
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <string>
#include <cctype>

int main(){

std::string palabra{" "};

std::getline(std::cin, palabra);

std::cout<<"Longitud: "<<palabra.size()<<std::endl;

for (int i{0}; i < palabra.size(); i++){
    palabra[i] = std::toupper(palabra[i]);
}

std::cout<<"En mayuculas: ";
for(int i{0}; i < palabra.size(); i++){
    std::cout<<palabra[i];
}

return 0;
}
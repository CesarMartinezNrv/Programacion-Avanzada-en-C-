/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E051 | Contar palabras en oración
Lee una oración con getline y cuenta las palabras
(separadas por espacios simples).

Entrada:
  el cielo es azul y bonito
Salida esperada:
  Palabras: 6
----------------------------------------------------------------------------------------------------
*/


#include <iostream>
#include <string>

int main(){

std::string palabra{""};

std::getline(std::cin, palabra);

int contador{1};
for (int i{0}; i < palabra.size(); i++){
    if(palabra[i] == ' '){
        contador++;
    }
}
std::cout<<"Palabras: "<<contador;


return 0;
}
/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E052 | Palíndromo
Lee una palabra e indica si es palíndromo.
Un palíndromo se lee igual de izquierda a derecha que al revés.
Ignora diferencia entre mayúsculas y minúsculas.

  Ejemplos: "reconocer", "Ana", "kayak"

Entrada: reconocer
Salida esperada:
  "reconocer" es palindromo.

Entrada alternativa: hola
Salida esperada:
  "hola" no es palindromo.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>

void palindromo(std::string palabra){

    bool repetidos{true};
    for(int i{0}; i < palabra.size() / 2; i++){
        if (palabra[i] != palabra[palabra.size() - 1 - i]){
            repetidos = false;
        }
    }

    if (repetidos == true){
        std::cout<<"La palabra "<<palabra<<" es palindromo.";
    }
    else{
        std::cout<<"La palabra "<<palabra<<" NO es palindromo. ";
    }
}

int main (){

std::string palabra;
std::cin>>palabra;

palindromo(palabra);

return 0;
}
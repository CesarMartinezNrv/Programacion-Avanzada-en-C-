/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E023 | for — serie de Fibonacci
Lee N e imprime los primeros N términos de la serie.
  Serie: 0 1 1 2 3 5 8 13 21 ...
  Cada término = suma de los dos anteriores.

Entrada: 8
Salida esperada:
  0 1 1 2 3 5 8 13
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int n{0}, a {0}, b{1}, c {0};
std::cin>>n;

for(int i{0}; i < n; i++){
    std::cout<<a<<" ";

    c = a + b;
    a = b;
    b = c;
}

return 0;
}
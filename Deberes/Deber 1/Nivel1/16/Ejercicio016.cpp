/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E016 | for — tabla de multiplicar
Lee un número N e imprime su tabla de multiplicar del 1 al 10.

Entrada: 7
Salida esperada:
  7 x 1 = 7
  7 x 2 = 14
  7 x 3 = 21
  7 x 4 = 28
  7 x 5 = 35
  7 x 6 = 42
  7 x 7 = 49
  7 x 8 = 56
  7 x 9 = 63
  7 x 10 = 70
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int num{0};

std::cin>>num;

for (int i{1}; i < 11; i++){
    std::cout<<num<<" x "<<i<<" = "<< num * i<<std::endl;
}

return 0;
}
/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E017 | for — factorial
Lee N (N >= 0) y calcula su factorial usando un bucle for.

  Recuerda: 0! = 1,  5! = 5*4*3*2*1 = 120

Entrada: 6
Salida esperada:
  6! = 720
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int n{0}, factorial{1};

std::cin>>n;

if (n >= 0){
    for(int i{1}; i <= n; i++){
        factorial = i * factorial;
    }
}

std::cout<<n<<"! = "<<factorial;
return 0;
}
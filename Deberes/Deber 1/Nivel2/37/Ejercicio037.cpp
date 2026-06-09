/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E037 | Recursividad — factorial
Escribe int factorial(int n) de forma RECURSIVA.
  Caso base: factorial(0) = 1
  Caso recursivo: factorial(n) = n * factorial(n-1)

TRAZA A MANO antes de codificar: dibuja las llamadas
para factorial(5) paso a paso.

Entrada: 7
Salida esperada:
  7! = 5040
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int factorial (int n){
    if( n == 1 || n == 0){
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main(){

int n;
std::cin>>n;

std::cout<<n<<"! = "<<factorial(n);

return 0;
}
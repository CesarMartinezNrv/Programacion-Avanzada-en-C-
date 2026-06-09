/*
Nombre: César Martínez 
Fecha: 05/07/2026


----------------------------------------------------------------------------------------------------
E038 | Recursividad — Fibonacci
Escribe int fibonacci(int n) de forma RECURSIVA.
  fibonacci(0) = 0
  fibonacci(1) = 1
  fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)

TRAZA A MANO: dibuja el árbol de llamadas para fibonacci(5).
  fibonacci(5) llama a fibonacci(4) y fibonacci(3)
  fibonacci(4) llama a fibonacci(3) y fibonacci(2)
  ... y así sucesivamente

ADVERTENCIA: la versión recursiva realiza llamadas repetidas.
fibonacci(10) hace 177 llamadas. Para N > 30 puede tardar
varios segundos — es normal, no es un error de tu código.
Es una limitación conocida de la recursión ingenua.

Entrada: 10
Salida esperada:
  fibonacci(10) = 55
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int fibonacci (int n){
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    return fibonacci (n-1) + fibonacci (n -2);
}


int main(){
int n;

std::cin>>n;

std::cout<<fibonacci(n);

return 0;
}
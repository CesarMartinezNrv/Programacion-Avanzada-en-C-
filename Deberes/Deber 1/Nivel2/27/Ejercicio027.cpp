/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E027 | Función con retorno entero
Escribe int cuadrado(int n) que retorne n*n.
Lee N e imprime su cuadrado.

Entrada: 9
Salida esperada:
  El cuadrado de 9 es 81.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int cuadrado (int n){
    return n*n;
}

int main(){
int n{0};

std::cin>>n;

int n_cuadrado = cuadrado(n);

std::cout<<"El cuadrado de "<<n<<" es "<<n_cuadrado;

return 0;
}
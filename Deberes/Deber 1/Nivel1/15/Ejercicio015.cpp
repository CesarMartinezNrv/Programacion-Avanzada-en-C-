/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E015 | for — suma acumulada
Lee N y luego N enteros. Imprime la suma total al final.

Entrada:
  4
  3 8 2 5
Salida esperada:
  Suma total: 18
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int N{0}, suma_total{0};

std::cin>>N;

for (int i{0}; i < N; i++){
    int valor{0};
    std::cin>>valor;
    suma_total = suma_total + valor;
}

std::cout<<"Suma total: "<<suma_total;
}
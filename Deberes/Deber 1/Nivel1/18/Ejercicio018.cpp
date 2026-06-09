/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E018 | while — contar positivos y negativos
Lee enteros uno por uno hasta que el usuario ingrese 0 (centinela).
Al final imprime cuántos positivos y negativos ingresó.
El 0 no cuenta como positivo ni negativo.

Entrada:
  5
  -3
  8
  -1
  4
  0
Salida esperada:
  Positivos: 3
  Negativos: 2
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){
int n {0}, positivos{0}, negativos{0};

std::cin>>n;

while (n != 0){
    if (n > 0){
        positivos++;
    }
    else if(n < 0){
        negativos++;
    }

    std::cin>>n;
}

std::cout<<"Positivos: "<<positivos<<std::endl;
std::cout<<"Negativos: "<<negativos<<std::endl;
}
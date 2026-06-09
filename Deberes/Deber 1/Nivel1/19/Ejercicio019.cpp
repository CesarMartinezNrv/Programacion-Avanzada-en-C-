/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E019 | for anidado — triángulo de asteriscos
Lee N e imprime un triángulo de N filas con asteriscos.

Entrada: 4
Salida esperada:
  *
  **
  ***
  ****
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main (){
int N{0};
std::cin>>N;
for (int i{1}; i <= N; i++){
    int p {0};
    while (p < i){
        std::cout<<"*";
        p++;
    }
    std::cout<<std::endl;
}

return 0;
}
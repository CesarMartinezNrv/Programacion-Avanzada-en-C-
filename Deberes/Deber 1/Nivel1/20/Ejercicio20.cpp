
/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E020 | while — máximo y mínimo
Lee N enteros e imprime el mayor y el menor.

Entrada:
  5
  3 9 1 7 4
Salida esperada:
  Mayor: 9
  Menor: 1
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main (){
int num{0}, N{0}, mayor{0}, menor{0};

int contador{1};

std::cin>>N;

std::cin>>num;
mayor = num;
menor = num;

while (contador != N){
    std::cin>>num;
    
    if (mayor < num){
        mayor = num;
    }

    if(menor > num){
        menor = num;
    }

    contador++;
}

std::cout<<"Mayor: "<<mayor<<std::endl;
std::cout<<"Menor: "<<menor;

return 0;

}
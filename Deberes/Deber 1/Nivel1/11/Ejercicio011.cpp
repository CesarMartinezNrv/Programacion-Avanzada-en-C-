/*
Nombre: César Martínez 
Fecha: 02/07/2026


----------------------------------------------------------------------------------------------------
E011 | if/else — positivo, negativo o cero
Lee un número entero e indica si es positivo, negativo o cero.

Entrada: -8
Salida esperada:
  El numero -8 es negativo.
----------------------------------------------------------------------------------------------------
*/

#include <iostream> 

int main (){

int num{0};

std::cin>>num;

if (num < 0){
    std::cout<<"El numero "<<num<<" es negativo";
}
else if (num > 0){
    std::cout<<"El numero "<<num<<" es positivo";
}
else{
    std::cout<<"El numero "<<num<<" es neutro o 0";
}

return 0;
}
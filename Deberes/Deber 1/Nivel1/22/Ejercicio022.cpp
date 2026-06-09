/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E022 | for — número primo
Lee un entero positivo e indica si es primo.
Un número primo solo es divisible entre 1 y él mismo.

Entrada: 17
Salida esperada:
  17 es primo.

Entrada alternativa: 12
Salida esperada:
  12 no es primo.
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

int main(){

int N{0}, contador{0};

std::cin>>N;

if ( N > 0){
    if (N == 1){
        std::cout<<N<<" NO es numero primo.";
        return 0;
    }
    else if(N == 2){
        std::cout<<N<<" NO es numero primo.";
        return 0;
    }
    for( int i{1}; i <= N; i++){
        if( N % i == 0){
            contador++;
        }
    }
    if(contador == 2){
        std::cout<<N<<" es un numero primo. ";
    }
    else{
        std::cout<<N<<" NO es un numero primo. ";
    }
}
else{
    std::cout<<"No esta dentro del rango. ERROR";
}

return 0;
}
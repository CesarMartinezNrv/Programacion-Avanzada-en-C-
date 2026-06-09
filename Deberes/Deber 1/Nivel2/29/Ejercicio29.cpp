/*
Nombre: César Martínez 
Fecha: 04/07/2026


----------------------------------------------------------------------------------------------------
E029 | Función booleana
Escribe bool esPrimo(int n) que retorne true si n es primo.
Úsala en main para imprimir todos los primos entre 1 y 50.

Entrada: (ninguna)
Salida esperada:
  Primos entre 1 y 50:
  2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
----------------------------------------------------------------------------------------------------
*/

#include <iostream>

bool es_primo(int num ){

    if (num <= 1){
        return false;
    }
    for (int i{2}; i < num; i++){
        if (num % i == 0){
            return false;
        }
    }

    return true;
}


int main(){

int num{50};

for(int i{1}; i <= num; ++i){
    if(es_primo(i)){
        std::cout<<i<<" ";
    }
}

return 0;
}

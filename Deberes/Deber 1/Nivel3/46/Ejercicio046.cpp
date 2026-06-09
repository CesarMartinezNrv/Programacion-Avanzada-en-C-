/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E046 | Frecuencia de elementos
Lee N enteros (valores entre 1 y 10 inclusive).
Cuenta cuántas veces aparece cada valor.
Imprime solo los que aparecen al menos una vez.

  Pista: usa un arreglo de contadores de tamaño 11
  (índices 0-10, ignora el índice 0).

Entrada:
  8
  3 1 4 1 5 9 2 3
Salida esperada:
  Valor 1: 2 veces
  Valor 2: 1 veces
  Valor 3: 2 veces
  Valor 4: 1 veces
  Valor 5: 1 veces
  Valor 9: 1 veces
----------------------------------------------------------------------------------------------------
*/


#include <iostream>

int main(){

int tamano{0};
int num{0};
int contadores[11]{};

std::cin>>tamano;

for(int i{0}; i < tamano; i++){
    std::cin>>num;

    if(num >= 1 && num <= 10){
        contadores[num]++;
    }
}
for(int i{1}; i <= 10; i++){
    if(contadores[i] > 0){
        std::cout<<"Valor "<<i<<": "<<contadores[i]<<" veces"<<std::endl;
    }
}

return 0;
}
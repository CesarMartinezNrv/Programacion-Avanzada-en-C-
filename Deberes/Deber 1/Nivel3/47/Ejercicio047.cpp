/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E047 | Matriz — leer e imprimir
Lee una matriz de N filas y M columnas e imprímela.

Entrada:
  2 3
  1 2 3
  4 5 6
Salida esperada:
  1  2  3
  4  5  6
----------------------------------------------------------------------------------------------------
*/


#include <iostream>

int main(){

int filas, columnas;

std::cin>>filas>>columnas;


int matriz[filas][columnas];

for(int i{0}; i < filas; i++){
    for(int j{0}; j < columnas; j++){
        int valor{0};
        std::cin>>valor;
        matriz[i][j] = valor;
    }
}

for(int i{0}; i < filas; i++){
    for(int j{0}; j < columnas; j++){
        std::cout<<matriz[i][j]<<" ";
    }
    std::cout<<std::endl;
}

return 0;
}
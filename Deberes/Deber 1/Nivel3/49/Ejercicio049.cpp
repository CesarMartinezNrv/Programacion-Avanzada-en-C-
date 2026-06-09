/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E049 | Diagonal principal
Lee una matriz cuadrada NxN e imprime los elementos
de su diagonal principal y su suma.

  La diagonal principal son los elementos donde fila == columna:
  posiciones (0,0), (1,1), (2,2)...

Entrada:
  3
  1 2 3
  4 5 6
  7 8 9
Salida esperada:
  Diagonal principal: 1 5 9
  Suma: 15
----------------------------------------------------------------------------------------------------
*/


#include <iostream>

int main(){

int N, suma{0};

std::cin>>N;

int matriz[N][N];

for(int i{0}; i < N; i++){
    for(int j{0}; j < N; j++){
        int valor{0};
        std::cin>>valor;
        matriz[i][j] = valor;
    }
}


std::cout<<"Diagonal principla: ";
for(int i{0}; i < N; i++){
    for(int j{0}; j < N; j++){
        if(i == j){
            std::cout<<matriz[i][j]<<" ";
            suma = suma + matriz [i][j];
        }
    }
}
std::cout<<std::endl;
std::cout<<"Suma: "<<suma;

return 0;
}
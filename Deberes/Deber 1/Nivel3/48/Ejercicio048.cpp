/*
Nombre: César Martínez 
Fecha: 05/06/2026


----------------------------------------------------------------------------------------------------
E048 | Suma de filas y columnas
Lee una matriz 3x3 e imprime la suma de cada fila
y la suma de cada columna.

Entrada:
  1 2 3
  4 5 6
  7 8 9
Salida esperada:
  Suma fila 1: 6
  Suma fila 2: 15
  Suma fila 3: 24
  Suma columna 1: 12
  Suma columna 2: 15
  Suma columna 3: 18
----------------------------------------------------------------------------------------------------
*/


#include <iostream>

int main(){
int filas{3}, columnas{3};



int matriz[filas][columnas];

for(int i{0}; i < filas; i++){
    for(int j{0}; j < columnas; j++){
        int valor{0};
        std::cin>>valor;
        matriz[i][j] = valor;
    }
}


for(int i{0}; i < filas; i++){
    int sumaFila = 0;
    for(int j{0}; j < columnas; j++){
        sumaFila = sumaFila + matriz[i][j];
    }
    std::cout<<"Suma fila "<< i+1<<": "<<sumaFila<<std::endl;
}

for(int j{0}; j < columnas; j++){
    int sumaColumna = 0;
    for (int i{0}; i < filas; i++){
        sumaColumna  = sumaColumna + matriz[i][j];
    }
    std::cout<<"Suma Columna "<< j+1<<": "<<sumaColumna<<std::endl;
}

return 0;
}


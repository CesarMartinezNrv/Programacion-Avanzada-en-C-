/*
Nombre: César Martínez 
Fecha: 06/06/2026


----------------------------------------------------------------------------------------------------
E074 | Matriz dinámica
TRAZA A MANO:
  Dibuja cómo se crea una matriz dinámica de 3 filas:
  int** mat = new int*[3];
  for (int i = 0; i < 3; i++)
      mat[i] = new int[4];

  ¿Cuántos new se ejecutan en total?
  ¿Cuántos delete necesitas?

Luego implementa: crea la matriz, llena con mat[i][j] = i*j,
imprímela y libérala completamente.

Entrada: 3 4
Salida esperada:
  0  0  0  0
  0  1  2  3
  0  2  4  6
----------------------------------------------------------------------------------------------------
*/


#include <iostream>

int main(){

int n{0}, col{0};

std::cin>>n>>col;

int** mat = new int*[n];

for(int i{0}; i < n; i++){
    mat[i] = new int[col];
}

for(int i{0}; i < n; i++){
    for(int j{0}; j < col; j++){
        mat[i][j] = i * j;
    }
}

for(int i{0}; i < n; i++){
    for(int j{0}; j < col; j++){
        std::cout<<mat[i][j]<<" ";
    }

    std::cout<<std::endl;
}


for(int i{0}; i < n; i++){
    delete[] mat[i];
}

delete[] mat;
mat = nullptr;

return 0;

}